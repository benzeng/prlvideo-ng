
void _xmlRelaxNGSetParserErrors
               (xmlRelaxNGParserCtxtPtr ctxt,xmlRelaxNGValidityErrorFunc err,
               xmlRelaxNGValidityWarningFunc warn,void *ctx)

{
  if (ctxt != (xmlRelaxNGParserCtxtPtr)0x0) {
    *(xmlRelaxNGValidityErrorFunc *)(ctxt + 8) = err;
    *(xmlRelaxNGValidityWarningFunc *)(ctxt + 0x10) = warn;
    *(undefined8 *)(ctxt + 0x18) = 0;
    *(void **)ctxt = ctx;
  }
  return;
}

