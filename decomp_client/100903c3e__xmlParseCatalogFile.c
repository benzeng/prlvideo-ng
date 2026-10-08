
/* WARNING: Enum "enum_2029": Some values do not have unique names */
/* WARNING: Enum "enum_2039": Some values do not have unique names */

xmlDocPtr _xmlParseCatalogFile(char *filename)

{
  xmlParserCtxtPtr ctxt;
  xmlSAXHandlerV1 *pxVar1;
  xmlParserInputBufferPtr pxVar2;
  long *plVar3;
  long lVar4;
  xmlDocPtr local_48;
  xmlDocPtr local_30;
  char *local_20;
  
  local_20 = (char *)0x0;
  ctxt = _xmlNewParserCtxt();
  if (ctxt == (xmlParserCtxtPtr)0x0) {
    pxVar1 = ___xmlDefaultSAXHandler();
    if (pxVar1->error != (errorSAXFunc)0x0) {
      pxVar1 = ___xmlDefaultSAXHandler();
      (*pxVar1->error)((void *)0x0,"out of memory\n");
    }
    local_48 = (xmlDocPtr)0x0;
  }
  else {
    pxVar2 = _xmlParserInputBufferCreateFilename(filename,XML_CHAR_ENCODING_ERROR);
    if (pxVar2 == (xmlParserInputBufferPtr)0x0) {
      _xmlFreeParserCtxt(ctxt);
      local_48 = (xmlDocPtr)0x0;
    }
    else {
      plVar3 = (long *)_xmlNewInputStream(ctxt);
      if (plVar3 == (long *)0x0) {
        _xmlFreeParserCtxt(ctxt);
        local_48 = (xmlDocPtr)0x0;
      }
      else {
        lVar4 = _xmlCanonicPath(filename);
        plVar3[1] = lVar4;
        *plVar3 = (long)pxVar2;
        plVar3[3] = **(long **)(*plVar3 + 0x20);
        plVar3[4] = **(long **)(*plVar3 + 0x20);
        plVar3[5] = **(long **)(*plVar3 + 0x20) + (ulong)*(uint *)(*(long *)(*plVar3 + 0x20) + 8);
        _inputPush(ctxt,plVar3);
        if (ctxt->directory == (char *)0x0) {
          local_20 = _xmlParserGetDirectory(filename);
        }
        if ((ctxt->directory == (char *)0x0) && (local_20 != (char *)0x0)) {
          ctxt->directory = local_20;
        }
        ctxt->valid = 0;
        ctxt->validate = 0;
        ctxt->loadsubset = 0;
        ctxt->pedantic = 0;
        ctxt->dictNames = 1;
        _xmlParseDocument(ctxt);
        if (ctxt->wellFormed == 0) {
          local_30 = (xmlDocPtr)0x0;
          _xmlFreeDoc(ctxt->myDoc);
          ctxt->myDoc = (xmlDocPtr)0x0;
        }
        else {
          local_30 = ctxt->myDoc;
        }
        _xmlFreeParserCtxt(ctxt);
        local_48 = local_30;
      }
    }
  }
  return local_48;
}

