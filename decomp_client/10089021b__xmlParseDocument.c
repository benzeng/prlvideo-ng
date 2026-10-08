
/* WARNING: Enum "enum_2029": Some values do not have unique names */
/* WARNING: Enum "enum_2039": Some values do not have unique names */

int _xmlParseDocument(xmlParserCtxtPtr ctxt)

{
  setDocumentLocatorSAXFunc psVar1;
  int iVar2;
  xmlSAXLocator *loc;
  xmlChar *pxVar3;
  int local_34;
  xmlChar local_28;
  xmlChar local_27;
  xmlChar local_26;
  xmlChar local_25;
  xmlCharEncoding local_1c;
  
  _xmlInitParser();
  if ((ctxt == (xmlParserCtxtPtr)0x0) || (ctxt->input == (xmlParserInputPtr)0x0)) {
    local_34 = -1;
  }
  else {
    if ((ctxt->progressive == 0) && ((long)ctxt->input->end - (long)ctxt->input->cur < 0xfa)) {
      FUN_100879cbc(ctxt);
    }
    FUN_1008785ae(ctxt);
    if ((ctxt->sax != (_xmlSAXHandler *)0x0) &&
       (ctxt->sax->setDocumentLocator != (setDocumentLocatorSAXFunc)0x0)) {
      psVar1 = ctxt->sax->setDocumentLocator;
      loc = ___xmlDefaultSAXLocator();
      (*psVar1)(ctxt->userData,loc);
    }
    if ((ctxt->encoding == (xmlChar *)0x0) && (3 < (long)ctxt->input->end - (long)ctxt->input->cur))
    {
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
      ctxt->standalone = ctxt->input->standalone;
      _xmlSkipBlankChars(ctxt);
    }
    else {
      pxVar3 = _xmlCharStrdup("1.0");
      ctxt->version = pxVar3;
    }
    if (((ctxt->sax != (_xmlSAXHandler *)0x0) &&
        (ctxt->sax->startDocument != (startDocumentSAXFunc)0x0)) && (ctxt->disableSAX == 0)) {
      (*ctxt->sax->startDocument)(ctxt->userData);
    }
    if ((ctxt->progressive == 0) && ((long)ctxt->input->end - (long)ctxt->input->cur < 0xfa)) {
      FUN_100879cbc(ctxt);
    }
    _xmlParseMisc(ctxt);
    if ((ctxt->progressive == 0) && ((long)ctxt->input->end - (long)ctxt->input->cur < 0xfa)) {
      FUN_100879cbc(ctxt);
    }
    if (((((*ctxt->input->cur == '<') && (ctxt->input->cur[1] == '!')) &&
         (ctxt->input->cur[2] == 'D')) &&
        (((ctxt->input->cur[3] == 'O' && (ctxt->input->cur[4] == 'C')) &&
         ((ctxt->input->cur[5] == 'T' &&
          ((ctxt->input->cur[6] == 'Y' && (ctxt->input->cur[7] == 'P')))))))) &&
       (ctxt->input->cur[8] == 'E')) {
      ctxt->inSubset = 1;
      _xmlParseDocTypeDecl(ctxt);
      if (*ctxt->input->cur == '[') {
        ctxt->instate = XML_PARSER_DTD;
        FUN_10088988a(ctxt);
      }
      ctxt->inSubset = 2;
      if (((ctxt->sax != (_xmlSAXHandler *)0x0) &&
          (ctxt->sax->externalSubset != (externalSubsetSAXFunc)0x0)) && (ctxt->disableSAX == 0)) {
        (*ctxt->sax->externalSubset)
                  (ctxt->userData,ctxt->intSubName,ctxt->extSubSystem,ctxt->extSubURI);
      }
      ctxt->inSubset = 0;
      ctxt->instate = XML_PARSER_PROLOG;
      _xmlParseMisc(ctxt);
    }
    if ((ctxt->progressive == 0) && ((long)ctxt->input->end - (long)ctxt->input->cur < 0xfa)) {
      FUN_100879cbc(ctxt);
    }
    if (*ctxt->input->cur == '<') {
      ctxt->instate = XML_PARSER_CONTENT;
      _xmlParseElement(ctxt);
      ctxt->instate = XML_PARSER_EPILOG;
      _xmlParseMisc(ctxt);
      if (*ctxt->input->cur != '\0') {
        FUN_100877520(ctxt,5,0);
      }
      ctxt->instate = ~XML_PARSER_EOF;
    }
    else {
      FUN_100877b3f(ctxt,4,"Start tag expected, \'<\' not found\n");
    }
    if ((ctxt->sax != (_xmlSAXHandler *)0x0) && (ctxt->sax->endDocument != (endDocumentSAXFunc)0x0))
    {
      (*ctxt->sax->endDocument)(ctxt->userData);
    }
    if ((ctxt->myDoc != (xmlDocPtr)0x0) &&
       (iVar2 = _xmlStrEqual(ctxt->myDoc->version,(xmlChar *)"SAX compatibility mode document"),
       iVar2 != 0)) {
      _xmlFreeDoc(ctxt->myDoc);
      ctxt->myDoc = (xmlDocPtr)0x0;
    }
    if (ctxt->wellFormed == 0) {
      ctxt->valid = 0;
      local_34 = -1;
    }
    else {
      local_34 = 0;
    }
  }
  return local_34;
}

