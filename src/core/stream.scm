(module
  photon.stream
  (parse:return
    parse:fail
    parse:identity
    parse:bind
    parse:any
    parse:is
    parse:op
    parse:star
    parse:plus
    parse:seq)

  (import
    r5rs
    utf8
    srfi-2
    srfi-9
    srfi-41)

  (define-record-type :stream
    (stream* value pos)
    stream*?
    (value parse:stream)
    (pos parse:pos))

  ; v -> i -> (v . i)
  (define ((parse:return value) input)
    (stream*
      (stream-cons value (parse:stream input))
      (parse:pos input)))

  ;  -> i -> ()
  (define ((parse:fail) input)
    (stream* stream-null (parse:pos input)))

  ;  -> i -> i
  (define ((parse:identity) input)
    (stream-match
      (parse:stream input)
      (() ((parse:fail) input))
      (ok (stream* ok (+ 1 (parse:pos input))))))

  ; >>=
  (define ((parse:bind parser combinator) input)
    (let
      ((result (parser input)))
      (stream-match
        (parse:stream result)
        (() result)
        ((head . tail)
         ((combinator head) (stream* tail (parse:pos result)))))))

  ; <|>
  (define ((parse:any parser . parsers) input)
    (let
      ((result (parser input)))
      (stream-match
        (parse:stream result)
        (() (if (null? parsers) result
              ((apply parse:any parsers) input)))
        (ok result))))

  (define (parse:is predicate)
    (parse:bind
      (parse:identity)
      (lambda (value)
        (if (apply predicate value)
          (parse:return value)
          (parse:fail)))))

  (define (parse:op operation value parser)
    (parse:bind
      parser
      (lambda (value')
        (parse:return (operation value value')))))

  (define (parse:star parser)
    (parse:any
      (parse:bind
        parser
        (lambda (value)
          (parse:op cons value (parse:star parser))))
      (parse:return '())))

  (define (parse:plus parser)
    (parse:bind
      parser
      (lambda (value)
        (parse:op cons value (parse:star parser)))))

  (define (parse:seq parser . parsers)
    (parse:bind
      parser
      (lambda (value)
        (if (null? parsers)
          (parse:return value)
          (parse:op cons value (apply parse:seq parsers))))))

  (define (parse:string str)
    (cond
      ((= 0 (string-length str))
       (parse:return ""))
      (else
        (parse:bind
          (parse:is
            (lambda (value)
              (eqv? (string-ref str 0) value)))
          (lambda (value)
            (parse:op
              string-append
              (string value)
              (parse:string (substring str 1))))))))
  )
