
int _xmlShellLoad(xmlShellCtxtPtr ctxt,char *filename,xmlNodePtr node,xmlNodePtr node2)

{
  xmlXPathContextPtr pxVar1;
  char *pcVar2;
  bool bVar3;
  int local_3c;
  xmlDocPtr local_18;
  
  bVar3 = false;
  if ((ctxt == (xmlShellCtxtPtr)0x0) || (filename == (char *)0x0)) {
    local_3c = -1;
  }
  else {
    if (ctxt->doc != (xmlDocPtr)0x0) {
      bVar3 = ctxt->doc->type == XML_HTML_DOCUMENT_NODE;
    }
    if (bVar3) {
      local_18 = _htmlParseFile(filename,(char *)0x0);
    }
    else {
      local_18 = _xmlReadFile(filename,(char *)0x0,0);
    }
    if (local_18 == (xmlDocPtr)0x0) {
      local_3c = -1;
    }
    else {
      if (ctxt->loaded == 1) {
        _xmlFreeDoc(ctxt->doc);
      }
      ctxt->loaded = 1;
      _xmlXPathFreeContext(ctxt->pctxt);
      (*(code *)_xmlFree)(ctxt->filename);
      ctxt->doc = local_18;
      ctxt->node = (xmlNodePtr)local_18;
      pxVar1 = _xmlXPathNewContext(local_18);
      ctxt->pctxt = pxVar1;
      pcVar2 = (char *)_xmlCanonicPath(filename);
      ctxt->filename = pcVar2;
      local_3c = 0;
    }
  }
  return local_3c;
}

