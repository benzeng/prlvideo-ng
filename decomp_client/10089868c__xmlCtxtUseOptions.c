
/* WARNING: Enum "enum_2029": Some values do not have unique names */

int _xmlCtxtUseOptions(xmlParserCtxtPtr ctxt,int options)

{
  uint local_18;
  uint local_14;
  
  if (ctxt == (xmlParserCtxtPtr)0x0) {
    local_18 = 0xffffffff;
  }
  else {
    if ((options & 1U) == 0) {
      ctxt->recovery = 0;
      local_14 = options;
    }
    else {
      ctxt->recovery = 1;
      local_14 = options - 1;
    }
    if ((local_14 >> 2 & 1) == 0) {
      ctxt->loadsubset = 0;
    }
    else {
      ctxt->loadsubset = 2;
      local_14 = local_14 - 4;
    }
    if ((local_14 >> 3 & 1) != 0) {
      ctxt->loadsubset = ctxt->loadsubset | 4;
      local_14 = local_14 - 8;
    }
    if ((local_14 >> 1 & 1) == 0) {
      ctxt->replaceEntities = 0;
    }
    else {
      ctxt->replaceEntities = 1;
      local_14 = local_14 - 2;
    }
    if ((local_14 >> 7 & 1) == 0) {
      ctxt->pedantic = 0;
    }
    else {
      ctxt->pedantic = 1;
      local_14 = local_14 - 0x80;
    }
    if ((local_14 >> 8 & 1) == 0) {
      ctxt->keepBlanks = 1;
    }
    else {
      ctxt->keepBlanks = 0;
      ctxt->sax->ignorableWhitespace = _xmlSAX2IgnorableWhitespace;
      local_14 = local_14 - 0x100;
    }
    if ((local_14 >> 4 & 1) == 0) {
      ctxt->validate = 0;
    }
    else {
      ctxt->validate = 1;
      if ((local_14 >> 6 & 1) != 0) {
        (ctxt->vctxt).warning = (xmlValidityWarningFunc)0x0;
      }
      if ((local_14 >> 5 & 1) != 0) {
        (ctxt->vctxt).error = (xmlValidityErrorFunc)0x0;
      }
      local_14 = local_14 - 0x10;
    }
    if ((local_14 >> 6 & 1) != 0) {
      ctxt->sax->warning = (warningSAXFunc)0x0;
      local_14 = local_14 - 0x40;
    }
    if ((local_14 >> 5 & 1) != 0) {
      ctxt->sax->error = (errorSAXFunc)0x0;
      ctxt->sax->fatalError = (fatalErrorSAXFunc)0x0;
      local_14 = local_14 - 0x20;
    }
    if ((local_14 >> 9 & 1) != 0) {
      ctxt->sax->startElement = _xmlSAX2StartElement;
      ctxt->sax->endElement = _xmlSAX2EndElement;
      ctxt->sax->startElementNs = (startElementNsSAX2Func)0x0;
      ctxt->sax->endElementNs = (endElementNsSAX2Func)0x0;
      ctxt->sax->initialized = 1;
      local_14 = local_14 - 0x200;
    }
    if ((local_14 >> 0xc & 1) == 0) {
      ctxt->dictNames = 1;
    }
    else {
      ctxt->dictNames = 0;
      local_14 = local_14 - 0x1000;
    }
    if ((local_14 >> 0xe & 1) != 0) {
      ctxt->sax->cdataBlock = (cdataBlockSAXFunc)0x0;
      local_14 = local_14 - 0x4000;
    }
    if ((local_14 >> 0xd & 1) != 0) {
      ctxt->options = ctxt->options | 0x2000;
      local_14 = local_14 - 0x2000;
    }
    if ((local_14 >> 0xb & 1) != 0) {
      ctxt->options = ctxt->options | 0x800;
      local_14 = local_14 - 0x800;
    }
    if ((local_14 >> 0x10 & 1) != 0) {
      ctxt->options = ctxt->options | 0x10000;
      local_14 = local_14 - 0x10000;
    }
    ctxt->linenumbers = 1;
    local_18 = local_14;
  }
  return local_18;
}

