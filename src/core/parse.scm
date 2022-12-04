(module
  photon.parse
  (parse:return
    parse:zero
    parse:null
    parse:empty
    parse:item
    parse:bind
    parse:or
    parse:maybe
    parse:cons
    parse:list
    parse:star
    parse:plus
    parse:is
    parse:is-not
    parse:in)

  (import
    r5rs utf8
    srfi-1
    srfi-2
    utf8-srfi-14
    srfi-127)

  ; 'identity'
  (define ((parse:return value) input)
    (cons value input))

  ; 'falsy' zero
  (define ((parse:zero) input)
    #f)

  ; 'truthy' null
  (define (parse:null)
    (parse:return '()))

  ; 'empty' input
  (define ((parse:empty) input)
    (if (null? input)
      ((parse:null) input)
      #f))

  (define ((parse:item) input)
    (and
      (not ((parse:empty) input))
      (cons (lseq-car input) (lseq-cdr input))))

  (define ((parse:bind parser function) input)
    (and-let*
      ((result (parser input)))
      ((function (lseq-car result)) (lseq-cdr result))))

  (define ((parse:or parser . parsers) input)
    (or
      (parser input)
      ((apply parse:or parsers) input)))

  (define (parse:maybe parser)
    (parse:or parser (parse:null)))

  (define (parse:cons value parser)
    (parse:bind
      parser
      (lambda (value')
        (parse:return (cons value value')))))

  (define (parse:list parser . parsers)
    (parse:bind
      parser
      (lambda (value)
        (if (null? parsers)
          (parse:return value)
          (parse:cons value (apply parse:list parsers))))))

  (define (parse:star parser)
    (parse:maybe
      (parse:bind
        parser
        (lambda (value)
          (parse:cons value (parse:star parser))))))

  (define (parse:plus parser)
    (parse:list parser (parse:star parser)))

  (define (parse:is predicate)
    (parse:bind
      (parse:item)
      (lambda (value)
        (if (apply predicate value)
          (parse:return value)
          (parse:zero)))))

  (define (parse:is-not predicate)
    (parse:is
      (lambda (value)
        (not (apply predicate value)))))

  (define (parse:in char-set)
    (parse:is
      (lambda (value)
        (char-set-contains? char-set value))))

  )
