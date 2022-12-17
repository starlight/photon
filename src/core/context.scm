(module
  photon.context
  (init
    %context?
    %config
    %operands)

  (import
    (only (chicken base) exit)
    (only (chicken process-context) command-line-arguments)
    r5rs
    utf8
    srfi-9
    srfi-37
    srfi-69)

  (define ((%bind names required-arg optional-arg proc) config)
    (option
      names
      required-arg
      optional-arg
      (proc config)))

  (define (((%do proc) config) option name arg continue)
    (cond
      ((and
         (not arg)
         (option-required-arg? option))
       (display "Error: option '")
       (display name)
       (display "' is missing the required argument\n")
       (exit 1))
      (else
        (proc config arg)
        continue)))

  (define ((%unknown) option name . _)
    (display "Error: unknown option '")
    (display name)
    (display "'\n")
    (exit 1))

  (define verbose
    (%bind
      '(#\V "verbose") #f #f
      (%do
        (lambda (config _)
          (hash-table-set! config 'verbose #t)))))

  (define version
    (%bind
      '(#\v "version") #f #f
      (%do
        (lambda _
          (display "photon v0.0.1-rc0\n")
          (exit 0)))))

  (define echo
    (%bind
      '(#\e "echo") #t #t
      (%do
        (lambda (_ arg)
          (display (string-append arg "\n"))))))

  (define (process-options config)
    (reverse
      (args-fold
        (command-line-arguments)
        (map
          (lambda (proc)
            (proc config))
          (list
            verbose
            version
            echo))
        (%unknown)
        cons
        '())))

  (define-record-type context%
    (%context operands config)
    %context?
    (operands %operands)
    (config %config))

  (define (init)
    (let
      ((config (make-hash-table)))
      (%context
        (process-options config)
        config)))

  )
