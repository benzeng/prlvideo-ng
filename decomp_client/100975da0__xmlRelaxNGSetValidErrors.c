
void _xmlRelaxNGSetValidErrors
               (xmlRelaxNGValidCtxtPtr ctxt,xmlRelaxNGValidityErrorFunc err,
               xmlRelaxNGValidityWarningFunc warn,void *ctx)

{
  if (ctxt != (xmlRelaxNGValidCtxtPtr)0x0) {
    *(xmlRelaxNGValidityErrorFunc *)(ctxt + 8) = err;
    *(xmlRelaxNGValidityWarningFunc *)(ctxt + 0x10) = warn;
    *(void **)ctxt = ctx;
    *(undefined8 *)(ctxt + 0x18) = 0;
  }
  return;
}

