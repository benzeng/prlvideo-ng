
xmlDocPtr _xmlNewDoc(xmlChar *version)

{
  xmlChar *pxVar1;
  xmlRegisterNodeFunc *ppxVar2;
  xmlDocPtr local_28;
  xmlChar *local_20;
  
  local_20 = version;
  if (version == (xmlChar *)0x0) {
    local_20 = "1.0";
  }
  local_28 = (xmlDocPtr)(*(code *)_xmlMalloc)(0xa8);
  if (local_28 == (xmlDocPtr)0x0) {
    FUN_1008991e0("building doc");
    local_28 = (xmlDocPtr)0x0;
  }
  else {
    _memset(local_28,0,0xa8);
    local_28->type = XML_DOCUMENT_NODE;
    pxVar1 = _xmlStrdup(local_20);
    local_28->version = pxVar1;
    if (local_28->version == (void *)0x0) {
      FUN_1008991e0("building doc");
      (*(code *)_xmlFree)(local_28);
      local_28 = (xmlDocPtr)0x0;
    }
    else {
      local_28->standalone = 0xffffffff;
      local_28->compression = 0xffffffff;
      local_28->doc = local_28;
      local_28->charset = 1;
      if ((___xmlRegisterCallbacks != 0) &&
         (ppxVar2 = ___xmlRegisterNodeDefaultValue(), *ppxVar2 != (xmlRegisterNodeFunc)0x0)) {
        ppxVar2 = ___xmlRegisterNodeDefaultValue();
        (**ppxVar2)((xmlNodePtr)local_28);
      }
    }
  }
  return local_28;
}

