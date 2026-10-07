
htmlDocPtr _htmlNewDocNoDtD(xmlChar *URI,xmlChar *ExternalID)

{
  xmlDocPtr local_30;
  
  local_30 = (xmlDocPtr)(*(code *)_xmlMalloc)(0xa8);
  if (local_30 == (xmlDocPtr)0x0) {
    FUN_100190414(0,"HTML document creation failed\n");
    local_30 = (xmlDocPtr)0x0;
  }
  else {
    _memset(local_30,0,0xa8);
    local_30->type = XML_HTML_DOCUMENT_NODE;
    local_30->version = (xmlChar *)0x0;
    local_30->intSubset = (_xmlDtd *)0x0;
    local_30->doc = local_30;
    local_30->name = (char *)0x0;
    local_30->children = (_xmlNode *)0x0;
    local_30->extSubset = (_xmlDtd *)0x0;
    local_30->oldNs = (_xmlNs *)0x0;
    local_30->encoding = (xmlChar *)0x0;
    local_30->standalone = 1;
    local_30->compression = 0;
    local_30->ids = (void *)0x0;
    local_30->refs = (void *)0x0;
    local_30->_private = (void *)0x0;
    local_30->charset = 1;
    if ((ExternalID != (xmlChar *)0x0) || (URI != (xmlChar *)0x0)) {
      _xmlCreateIntSubset(local_30,(xmlChar *)"html",ExternalID,URI);
    }
  }
  return local_30;
}

