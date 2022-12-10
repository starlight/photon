(module
  photon.stream
  (result%
    stream%
    pos%
    return*
    fail*
    identity*
    bind*
    one-of*
    null*
    maybe*
    each-of*
    zero-or-more*
    one-or-more*
    is*)

  (import
    r5rs
    utf8
    srfi-9
    srfi-41)

  (define-record-type %result
    (result% strm pos)
    %result?
    (strm stream%)
    (pos pos%))

  ; v -> i -> (v . i)
  (define ((return* value) input)
    (result%
      (stream-cons value (stream% input))
      (pos% input)))

  ;  -> i -> ()
  (define ((fail*) input)
    (result%
      stream-null
      (pos% input)))

  ;  -> i -> i
  (define ((identity*) input)
    (result%
      (stream% input)
      (+ 1 (pos% input))))

  ; >>=
  (define ((bind* parser combinator) input)
    (let
      ((result (parser input)))
      (stream-match
        (stream% result)
        (() result)
        ((value . rest)
         ((combinator value)
          (result% rest (pos% result)))))))

  ; <|>
  (define ((one-of* parser . parsers) input)
    (let
      ((result (parser input)))
      (stream-match
        (stream% result)
        (() (not (null? parsers))
            ((apply one-of* parsers) input))
        (_ result))))

  ;  -> i -> (() . i)
  (define (null*)
    (return* '()))

  (define (maybe* parser)
    (one-of* parser (null*)))

  (define (each-of* . parsers)
    (cond
      ((null? parsers) (null*))
      (else
        (bind*
          (car parsers)
          (lambda (value)
            (bind*
              (apply each-of* (cdr parsers))
              (lambda (value')
                (return* (cons value value')))))))))

  (define (zero-or-more* parser)
    (maybe*
      (each-of* parser (zero-or-more* parser))))

  (define (one-or-more* parser)
    (each-of* parser (zero-or-more* parser)))

  (define (is* predicate)
    (bind*
      (identity*)
      (lambda (value)
        (if (apply predicate value)
          (return* value)
          (fail*)))))

  )
