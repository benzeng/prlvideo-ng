
/* WARNING: Enum "enum_2029": Some values do not have unique names */
/* WARNING: Enum "enum_2039": Some values do not have unique names */

int _xmlParseExtParsedEnt(xmlParserCtxtPtr ctxt)

{
  setDocumentLocatorSAXFunc psVar1;
  xmlSAXLocator *loc;
  xmlChar *pxVar2;
  int local_34;
  xmlChar local_28;
  xmlChar local_27;
  xmlChar local_26;
  xmlChar local_25;
  xmlCharEncoding local_1c;
  
  if ((ctxt == (xmlParserCtxtPtr)0x0) || (ctxt->input == (xmlParserInputPtr)0x0)) {
    local_34 = -1;
  }
  else {
    _xmlDefaultSAXHandlerInit();
    FUN_1008785ae(ctxt);
    if ((ctxt->progressive == 0) && ((long)ctxt->input->end - (long)ctxt->input->cur < 0xfa)) {
      FUN_100879cbc(ctxt);
    }
    if ((ctxt->sax != (_xmlSAXHandler *)0x0) &&
       (ctxt->sax->setDocumentLocator != (setDocumentLocatorSAXFunc)0x0)) {
      psVar1 = ctxt->sax->setDocumentLocator;
      loc = ___xmlDefaultSAXLocator();
      (*psVar1)(ctxt->userData,loc);
    }
    if (3 < (long)ctxt->input->end - (long)ctxt->input->cur) {
      local_28 = *ctxt->input->cur;
      local_27 = ctxt->input->cur[1];
      local_26 = ctxt->input->cur[2];
      local_25 = ctxt->input->cur[3];
      local_1c = _xmlDetectCharEncoding(&local_28,4);
      if (local_1c != XML_CHAR_ENCODING_ERROR) {
        _xmlSwitchEncoding(ctxt,local_1c);
      }
    }
    if (*ctxt->input->cur == '\0') {
      FUN_100877520(ctxt,4,0);
    }
    if ((ctxt->progressive == 0) && ((long)ctxt->input->end - (long)ctxt->input->cur < 0xfa)) {
      FUN_100879cbc(ctxt);
    }
    if (((((*ctxt->input->cur == '<') && (ctxt->input->cur[1] == '?')) &&
         (ctxt->input->cur[2] == 'x')) &&
        ((ctxt->input->cur[3] == 'm' && (ctxt->input->cur[4] == 'l')))) &&
       (((ctxt->input->cur[5] == ' ' || ((8 < ctxt->input->cur[5] && (ctxt->input->cur[5] < 0xb))))
        || (ctxt->input->cur[5] == '\r')))) {
      _xmlParseXMLDecl(ctxt);
      if (ctxt->errNo == 0x20) {
        return -1;
      }
      _xmlSkipBlankChars(ctxt);
    }
    else {
      pxVar2 = _xmlCharStrdup("1.0");
      ctxt->version = pxVar2;
    }
    if (((ctxt->sax != (_xmlSAXHandler *)0x0) &&
        (ctxt->sax->startDocument != (startDocumentSAXFunc)0x0)) && (ctxt->disableSAX == 0)) {
      (*ctxt->sax->startDocument)(ctxt->userData);
    }
    ctxt->instate = XML_PARSER_CONTENT;
    ctxt->validate = 0;
    ctxt->loadsubset = 0;
    ctxt->depth = 0;
    _xmlParseContent(ctxt);
    if ((*ctxt->input->cur == '<') && (ctxt->input->cur[1] == '/')) {
      FUN_100877520(ctxt,0x55,0);
    }
    else if (*ctxt->input->cur != '\0') {
      FUN_100877520(ctxt,0x56,0);
    }
    if ((ctxt->sax != (_xmlSAXHandler *)0x0) && (ctxt->sax->endDocument != (endDocumentSAXFunc)0x0))
    {
      (*ctxt->sax->endDocument)(ctxt->userData);
    }
    if (ctxt->wellFormed == 0) {
      local_34 = -1;
    }
    else {
      local_34 = 0;
    }
  }
  return local_34;
}

