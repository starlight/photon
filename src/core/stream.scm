(module
  photon.stream
  (stream%
    %stream
    %stream?
    %lseq
    %pos
    generator->stream%
    result%
    %result
    %result?
    %value
    %rest
    *return
    *fail
    *identity
    *bind
    *one-of
    *nothing
    *maybe
    *is
    *not
    *end
    *list
    *zero-or-more
    *one-or-more)

  (import
    r5rs
    utf8
    srfi-2
    srfi-9
    srfi-127
    srfi-158)

  (define-record-type stream%
    (%stream lseq pos)
    %stream?
    (lseq %lseq)
    (pos %pos))

  (define-record-type result%
    (%result value stream)
    %result?
    (value %value)
    (stream %rest))

  (define (generator->stream% gen)
    (%stream (generator->lseq gen) 0))

  (define (%empty? stream)
    (null? (%lseq stream)))

  (define (port->generator port)
    (make-coroutine-generator
      (lambda (yield)
        (let loop
          ((char (read-char port)))
          (cond
            ((eof-object? char))
            (else
              (yield char)
              (loop (read-char port))))))))

  ; 𝑣 -> 𝜸ₓ -> 𝑣.𝜸ₓ
  ; 𝑣 => 𝑣
  (define ((*return value) input)
    (%result value input))

  ;  -> 𝜸ₓ -> ⊥
  ;  => ⊥
  (define ((*fail) input)
    #f)

  ;  -> 𝜸ₓ -> 𝑥.𝜸₊ | ⊥
  ;  => 𝑥 | ⊥
  (define ((*identity) input)
    (if (%empty? input) #f
      (%result
        (lseq-car (%lseq input))
        (%stream
          (lseq-cdr (%lseq input))
          (+ 1 (%pos input))))))

  ; 𝑟 𝑘' => 𝑘'𝑣ʳ -> 𝑣ᵏ | ⊥
  (define ((*bind parser combinator) input)
    (and-let*
      ((result (parser input)))
      ((combinator (%value result)) (%rest result))))

  ; 𝑟 𝑠.. => 𝑣ʳ | 𝑣ˢ.. | ⊥
  (define ((*one-of . parsers) input)
    (and
      (not (null? parsers))
      (or
        ((car parsers) input)
        ((apply *one-of (cdr parsers)) input))))

  ;  => ∅
  (define (*nothing)
    (*return '()))

  ; 𝑟 => 𝑣ʳ | ∅
  (define (*maybe parser)
    (*one-of parser (*nothing)))

  ; 𝑟 => 𝑣ʳ ∴ ⊥ | ∅
  (define ((*not parser) input)
    (and
      (not (parser input))
      ((*nothing) input)))

  ;  => 𝑥 ∴ ⊥ | ∅
  (define (*end)
    (*not (*identity)))

  ; 𝑒 => 𝑒𝑥 ∴ 𝑥 | ⊥
  (define (*is predicate . args)
    (*bind
      (*identity)
      (lambda (value)
        (if (apply predicate value args)
          (*return value)
          (*fail)))))

  ; 𝑟 𝑠.. => [𝑣ʳ, 𝑣ˢ..] | ⊥
  (define (*list . parsers)
    (if (null? parsers) (*nothing)
      (*bind
        (car parsers)
        (lambda (value)
          (*bind
            (apply *list (cdr parsers))
            (lambda (value')
              (*return (cons value value'))))))))

  ; 𝑟 => [𝑣ʳ, <𝑣ʳ..>] | ⊥
  (define (*one-or-more parser)
    (*bind
      parser
      (lambda (value)
        (*list
          (*return value)
          (*zero-or-more parser)))))

  ; 𝑟 => [𝑣ʳ, <𝑣ʳ..>] | ∅
  (define (*zero-or-more parser)
    (*maybe
      (*one-or-more parser)))

)
