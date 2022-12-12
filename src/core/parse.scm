(module
  photon.parse
  (*letter
    *digit)

  (import
    r5rs
    utf8
    srfi-9
    utf8-srfi-13
    utf8-srfi-14
    photon.stream)

  ; --- tokens ---

  (define (*in cs)
    (*is
      (lambda (value)
        (char-set-contains? cs value))))

  (define char-set:non-zero-digit
    (char-set-delete
      char-set:digit #\0))

  (define (*whitespace)
    (*in char-set:whitespace))

  (define (*letter)
    (*in char-set:letter))

  (define (*digit)
    (*in char-set:digit))

  (define (*non-zero-digit)
    (*in char-set:non-zero-digit))

  )
