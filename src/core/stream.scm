(module
  photon.stream
  (result%
    stream%
    pos%
    return*
    fail*
    identity*
    bind*
    any*
    null*
    maybe*
    seq*
    star*
    plus*
    is*
    const*
    string*)

  (import
    r5rs
    utf8
    srfi-2
    srfi-9
    utf8-srfi-13
    srfi-41)

  (define-record-type :result
    (result% strm pos)
    result?
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
    (stream-match
      (stream% input)
      (() ((fail*) input))
      (ok (result% ok (+ 1 (pos% input))))))

  ; >>=
  (define ((bind* parser combinator) input)
    (let
      ((result (parser input)))
      (stream-match
        (stream% result)
        (() result)
        ((value . rest)
         ((combinator value) (result% rest (pos% result)))))))

  ; <|>
  (define ((any* parser . parsers) input)
    (let
      ((result (parser input)))
      (stream-match
        (stream% result)
        (() (not (null? parsers))
            ((apply any* parsers) input))
        (_ result))))

  ;  -> i -> (() . i)
  (define (null*)
    (return* '()))

  (define (maybe* parser)
    (any* parser (null*)))

  (define (seq* . parsers)
    (cond
      ((null? parsers) (null*))
      (else
        (bind*
          (car parsers)
          (lambda (value)
            (bind*
              (apply seq* (cdr parsers))
              (lambda (value')
                (return* (cons value value')))))))))

  (define (star* parser)
    (maybe*
      (seq* parser (star* parser))))

  (define (plus* parser)
    (seq* parser (star* parser)))

  (define (is* predicate)
    (bind*
      (identity*)
      (lambda (value)
        (if (apply predicate value)
          (return* value)
          (fail*)))))

  (define (const* value)
    (is*
      (lambda (value')
        (eqv? value value'))))

  (define (string* strng)
    (bind*
      (apply seq* (string-map const* strng))
      (lambda (value)
        (return* strng))))

  )
