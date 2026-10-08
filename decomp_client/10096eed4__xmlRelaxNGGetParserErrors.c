
int _xmlRelaxNGGetParserErrors
              (xmlRelaxNGParserCtxtPtr ctxt,xmlRelaxNGValidityErrorFunc *err,
              xmlRelaxNGValidityWarningFunc *warn,void **ctx)

{
  int local_2c;
  
  if (ctxt == (xmlRelaxNGParserCtxtPtr)0x0) {
    local_2c = -1;
  }
  else {
    if (err != (xmlRelaxNGValidityErrorFunc *)0x0) {
      *err = *(xmlRelaxNGValidityErrorFunc *)(ctxt + 8);
    }
    if (warn != (xmlRelaxNGValidityWarningFunc *)0x0) {
      *warn = *(xmlRelaxNGValidityWarningFunc *)(ctxt + 0x10);
    }
    if (ctx != (void **)0x0) {
      *ctx = *(void **)ctxt;
    }
    local_2c = 0;
  }
  return local_2c;
}

