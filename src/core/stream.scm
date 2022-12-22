(module
  photon.stream
  (stream%
    %stream
    %stream?
    %lseq
    %position
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
    srfi-127)

  (define-record-type stream%
    (%stream lseq position)
    %stream?
    (lseq %lseq)
    (position %position))

  (define-record-type result%
    (%result value stream)
    %result?
    (value %value)
    (stream %input))

  ; 𝑣 -> 𝒊ₙ -> 𝑣 . 𝒊ₙ
  (define ((*return value) input)
    (%result value input))

  ;   -> 𝒊ₙ -> ∅
  (define ((*fail) input) #f)

  ;   -> 𝒊ₙ -> 𝑥ₙ . 𝒊ₙ₊
  (define ((*identity) input)
    (cond
      ((null? (%lseq input)) #f)
      (else
        (%result
          (lseq-car (%lseq input))
          (%stream
            (lseq-cdr (%lseq input))
            (+ 1 (%position input)))))))

  ; >>=
  (define ((*bind parser combinator) input)
    (and-let*
      ((result (parser input)))
      ((combinator (%value result)) (%input result))))

  ; <|>
  (define ((*one-of parser . parsers) input)
    (let
      ((result (parser input)))
      (cond
        ((or result (null? parsers)) result)
        (else
          ((apply *one-of parsers) input)))))

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
