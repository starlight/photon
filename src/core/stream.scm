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
    is*
    op*
    star*
    plus*
    seq*
    string*)

  (import
    r5rs
    utf8
    srfi-2
    srfi-9
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

  (define (is* predicate)
    (bind*
      (identity*)
      (lambda (value)
        (if (apply predicate value)
          (return* value)
          (fail*)))))

  (define (op* operation value parser)
    (bind*
      parser
      (lambda (value')
        (return* (operation value value')))))

  (define (star* parser)
    (any*
      (bind*
        parser
        (lambda (value)
          (op* cons value (star* parser))))
      (return* '())))

  (define (plus* parser)
    (bind*
      parser
      (lambda (value)
        (op* cons value (star* parser)))))

  (define (seq* parser . parsers)
    (bind*
      parser
      (lambda (value)
        (if (null? parsers)
          (return* value)
          (op* cons value (apply seq* parsers))))))

  (define (string* str)
    (cond
      ((= 0 (string-length str))
       (return* ""))
      (else
        (bind*
          (is*
            (lambda (value)
              (eqv? (string-ref str 0) value)))
          (lambda (value)
            (op*
              string-append
              (string value)
              (string* (substring str 1))))))))
  )
