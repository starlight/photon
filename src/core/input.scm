(module
  photon.input
  (make-char-generator
   port->lseq)

  (import
    r5rs
    utf8
    srfi-121
    srfi-127)

  (define (make-char-generator port)
    (make-coroutine-generator
      (lambda (yield)
        (read-char port))))

  (define (port->lseq port)
    (generator->lseq
      (make-char-generator port)))
  )
