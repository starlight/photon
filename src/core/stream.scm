(module
  photon.stream
  (stream%
    %stream
    %stream?
    %lseq
    %pos
    port->stream%
    result%
    %result
    %result?
    %value
    %input
    *return
    *fail
    *identity
    *bind
    *one-of
    *null
    *maybe
    *each-of
    *zero-or-more
    *one-or-more
    *is)

  (import
    r5rs
    utf8
    srfi-2
    srfi-9
    srfi-127
    srfi-158)

  ; 𝒑 -> 𝒍
  (define (port->lseq port)
    (generator->lseq
      (make-coroutine-generator
        (lambda (yield)
          (let loop
            ((ch (read-char port)))
            (cond
              ((eof-object? ch))
              (else
                (yield ch)
                (loop (read-char port)))))))))

  ; 𝒍 𝑛 -> 𝜸ₙ
  (define-record-type stream%
    (%stream lseq pos)
    %stream?
    (lseq %lseq)
    (pos %pos))

  ; 𝒑 -> 𝜸₀
  (define (port->stream% port)
    (%stream (port->lseq port) 0))

  ; 𝑣 𝜸ₙ -> 𝑣.𝜸ₙ
  (define-record-type result%
    (%result value input)
    %result?
    (value %value)
    (input %input))

  ; 𝑣 -> 𝜸ₙ -> 𝑣.𝜸ₙ
  (define ((*return value) input)
    (%result value input))

  ; -> 𝜸ₙ -> ⊥
  (define ((*fail) input) #f)

  ; -> 𝜸ₙ -> 𝑥ₙ.𝜸ₙ₊ | ⊥
  (define ((*identity) input)
    (cond
      ((null? (%lseq input)) #f)
      (else
        (%result
          (lseq-car (%lseq input))
          (%stream
            (lseq-cdr (%lseq input))
            (+ 1 (%pos input)))))))

  ; >>=
  ; 𝑝 𝑘' => 𝑣ₚ -> 𝑣ₖ | ⊥
  (define ((*bind parser combinator) input)
    (and-let*
      ((result (parser input)))
      ((combinator (%value result)) (%input result))))

  ; <|>
  ; 𝑝 𝑟* => 𝑣ₚ | 𝑣ᵣ... | ⊥
  (define ((*one-of parser . parsers) input)
    (let
      ((result (parser input)))
      (cond
        ((or result (null? parsers)) result)
        (else
          ((apply *one-of parsers) input)))))

  ; => ∅
  (define (*null)
    (*return '()))

  (define (*each-of . parsers)
    (cond
      ((null? parsers) (*null))
      (else
        (*bind
          (car parsers)
          (lambda (value)
            (*bind
              (apply *each-of (cdr parsers))
              (lambda (value')
                (*return (cons value value')))))))))

  ; 𝑝 => 𝑣ₚ | ∅
  (define (*maybe parser)
    (*one-of parser (*null)))

  (define (*one-or-more parser)
    (*each-of parser (*zero-or-more parser)))

  (define (*zero-or-more parser)
    (*maybe
      (*one-or-more parser)))

  (define (*is predicate . args)
    (*bind
      (*identity)
      (lambda (value)
        (if (apply predicate value args)
          (*return value)
          (*fail)))))

)
