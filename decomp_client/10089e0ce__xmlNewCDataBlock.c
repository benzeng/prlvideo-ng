
xmlNodePtr _xmlNewCDataBlock(xmlDocPtr doc,xmlChar *content,int len)

{
  xmlChar *pxVar1;
  xmlRegisterNodeFunc *ppxVar2;
  xmlNodePtr local_38;
  
  local_38 = (xmlNodePtr)(*(code *)_xmlMalloc)(0x78);
  if (local_38 == (xmlNodePtr)0x0) {
    FUN_1008991e0("building CDATA");
    local_38 = (xmlNodePtr)0x0;
  }
  else {
    _memset(local_38,0,0x78);
    local_38->type = XML_CDATA_SECTION_NODE;
    local_38->doc = doc;
    if (content != (xmlChar *)0x0) {
      pxVar1 = _xmlStrndup(content,len);
      local_38->content = pxVar1;
    }
    if ((___xmlRegisterCallbacks != 0) &&
       (ppxVar2 = ___xmlRegisterNodeDefaultValue(), *ppxVar2 != (xmlRegisterNodeFunc)0x0)) {
      ppxVar2 = ___xmlRegisterNodeDefaultValue();
      (**ppxVar2)(local_38);
    }
  }
  return local_38;
}

