(module
  photon ()

  (import
    r5rs
    utf8
    photon.context)

  (let
    ((context (init)))
    (display (%operands context))
    (newline))
  )
