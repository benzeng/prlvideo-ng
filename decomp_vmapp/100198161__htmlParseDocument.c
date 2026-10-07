
/* WARNING: Enum "enum_2029": Some values do not have unique names */

int _htmlParseDocument(htmlParserCtxtPtr ctxt)

{
  setDocumentLocatorSAXFunc psVar1;
  xmlDocPtr pxVar2;
  int iVar3;
  xmlSAXLocator *loc;
  xmlDtdPtr pxVar4;
  int local_34;
  
  _xmlInitParser();
  _htmlDefaultSAXHandlerInit();
  if ((ctxt == (htmlParserCtxtPtr)0x0) || (ctxt->input == (xmlParserInputPtr)0x0)) {
    FUN_100190598(ctxt,1,"htmlParseDocument: context error\n",0,0);
    local_34 = 1;
  }
  else {
    ctxt->html = 1;
    if ((ctxt->progressive == 0) && ((long)ctxt->input->end - (long)ctxt->input->cur < 0xfa)) {
      _xmlParserInputGrow(ctxt->input,0xfa);
    }
    if ((ctxt->sax != (_xmlSAXHandler *)0x0) &&
       (ctxt->sax->setDocumentLocator != (setDocumentLocatorSAXFunc)0x0)) {
      psVar1 = ctxt->sax->setDocumentLocator;
      loc = ___xmlDefaultSAXLocator();
      (*psVar1)(ctxt->userData,loc);
    }
    FUN_100190e92(ctxt);
    if (*ctxt->input->cur == '\0') {
      FUN_100190598(ctxt,4,"Document is empty\n",0,0);
    }
    if (((ctxt->sax != (_xmlSAXHandler *)0x0) &&
        (ctxt->sax->startDocument != (startDocumentSAXFunc)0x0)) && (ctxt->disableSAX == 0)) {
      (*ctxt->sax->startDocument)(ctxt->userData);
    }
    while ((((*ctxt->input->cur == '<' && (ctxt->input->cur[1] == '!')) &&
            ((ctxt->input->cur[2] == '-' && (ctxt->input->cur[3] == '-')))) ||
           ((*ctxt->input->cur == '<' && (ctxt->input->cur[1] == '?'))))) {
      FUN_10019572e(ctxt);
      FUN_10019503b(ctxt);
      FUN_100190e92(ctxt);
    }
    if ((*ctxt->input->cur == '<') && (ctxt->input->cur[1] == '!')) {
      iVar3 = FUN_100195026(ctxt->input->cur[2]);
      if (iVar3 == 0x44) {
        iVar3 = FUN_100195026(ctxt->input->cur[3]);
        if (iVar3 == 0x4f) {
          iVar3 = FUN_100195026(ctxt->input->cur[4]);
          if (iVar3 == 0x43) {
            iVar3 = FUN_100195026(ctxt->input->cur[5]);
            if (iVar3 == 0x54) {
              iVar3 = FUN_100195026(ctxt->input->cur[6]);
              if (iVar3 == 0x59) {
                iVar3 = FUN_100195026(ctxt->input->cur[7]);
                if (iVar3 == 0x50) {
                  iVar3 = FUN_100195026(ctxt->input->cur[8]);
                  if (iVar3 == 0x45) {
                    FUN_1001962a9(ctxt);
                  }
                }
              }
            }
          }
        }
      }
    }
    FUN_100190e92(ctxt);
    while (((((*ctxt->input->cur == '<' && (ctxt->input->cur[1] == '!')) &&
             (ctxt->input->cur[2] == '-')) && (ctxt->input->cur[3] == '-')) ||
           ((*ctxt->input->cur == '<' && (ctxt->input->cur[1] == '?'))))) {
      FUN_10019572e(ctxt);
      FUN_10019503b(ctxt);
      FUN_100190e92(ctxt);
    }
    FUN_100197801(ctxt);
    if (*ctxt->input->cur == '\0') {
      FUN_1001913f7(ctxt);
    }
    if ((ctxt->sax != (_xmlSAXHandler *)0x0) && (ctxt->sax->endDocument != (endDocumentSAXFunc)0x0))
    {
      (*ctxt->sax->endDocument)(ctxt->userData);
    }
    if (ctxt->myDoc != (xmlDocPtr)0x0) {
      pxVar4 = _xmlGetIntSubset(ctxt->myDoc);
      if (pxVar4 == (xmlDtdPtr)0x0) {
        pxVar2 = ctxt->myDoc;
        pxVar4 = _xmlCreateIntSubset(ctxt->myDoc,(xmlChar *)"html",
                                     (xmlChar *)"-//W3C//DTD HTML 4.0 Transitional//EN",
                                     (xmlChar *)"http://www.w3.org/TR/REC-html40/loose.dtd");
        pxVar2->intSubset = pxVar4;
      }
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

