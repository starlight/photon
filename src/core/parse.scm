(module
  photon.parse
  (result%
    zero%
    item%
    bind%
    seq*
    is*
    is-not*
    eqv*
    in*)

  (import
    r5rs utf8
    srfi-1
    srfi-2
    utf8-srfi-14
    srfi-127)

  ; v -> i -> [(v . i)]
  (define ((result% value) input)
    (list (cons value input)))

  ; () -> i -> #f
  (define ((zero%) input) #f)

  ; () -> i -> [(x . xs)] || #f
  (define ((item%) input)
    (and
      (not (null? input))
      (list (cons (lseq-first input) (lseq-rest input)))))

  (define ((bind% parser function) input)
    (and-let*
      ((results (parser input))
       (results'
         (filter-map
           (lambda (result)
             ((function (lseq-first result)) (lseq-rest result)))
           results))
       (not (null? results')))
      results'))

  (define ((plus% p q) input)
    (let*
      ((p' (p input))
       (q' (q input)))
      (if (and p' q')
        (append p' q')
        (or p' q'))))

  (define (seq* parser . parsers)
    (bind%
      (parser)
      (lambda (value0)
        (if (null? parsers)
          (result% value0)
          (bind%
            (apply seq* parsers)
            (lambda (value1)
              (result% (cons value0 value1))))))))

  (define (is* predicate . args)
    (bind%
      (item%)
      (lambda (value)
        (if (apply predicate value args)
          (result% value)
          (zero%)))))

  (define (is-not* predicate . args)
    (is*
      (lambda (value)
        (not (apply predicate value args)))))

  (define (eqv* const)
    (is*
      (lambda (value)
        (eqv? value const))))

  (define (in* char-set)
    (is*
      (lambda (value)
        (char-set-contains? char-set value))))

  )
