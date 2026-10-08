
/* WARNING: Enum "enum_2029": Some values do not have unique names */

int _htmlCtxtUseOptions(htmlParserCtxtPtr ctxt,int options)

{
  uint local_18;
  uint local_14;
  
  if (ctxt == (htmlParserCtxtPtr)0x0) {
    local_18 = 0xffffffff;
  }
  else {
    local_14 = options;
    if (((uint)options >> 6 & 1) != 0) {
      ctxt->sax->warning = (warningSAXFunc)0x0;
      (ctxt->vctxt).warning = (xmlValidityWarningFunc)0x0;
      local_14 = options - 0x40;
      ctxt->options = ctxt->options | 0x40;
    }
    if ((local_14 >> 5 & 1) != 0) {
      ctxt->sax->error = (errorSAXFunc)0x0;
      (ctxt->vctxt).error = (xmlValidityErrorFunc)0x0;
      ctxt->sax->fatalError = (fatalErrorSAXFunc)0x0;
      local_14 = local_14 - 0x20;
      ctxt->options = ctxt->options | 0x20;
    }
    if ((local_14 >> 7 & 1) == 0) {
      ctxt->pedantic = 0;
    }
    else {
      ctxt->pedantic = 1;
      local_14 = local_14 - 0x80;
      ctxt->options = ctxt->options | 0x80;
    }
    if ((local_14 >> 8 & 1) == 0) {
      ctxt->keepBlanks = 1;
    }
    else {
      ctxt->keepBlanks = 0;
      ctxt->sax->ignorableWhitespace = _xmlSAX2IgnorableWhitespace;
      local_14 = local_14 - 0x100;
      ctxt->options = ctxt->options | 0x100;
    }
    if ((local_14 & 1) == 0) {
      ctxt->recovery = 0;
    }
    else {
      ctxt->recovery = 1;
    }
    if ((local_14 >> 0x10 & 1) != 0) {
      ctxt->options = ctxt->options | 0x10000;
      local_14 = local_14 - 0x10000;
    }
    ctxt->dictNames = 0;
    local_18 = local_14;
  }
  return local_18;
}

