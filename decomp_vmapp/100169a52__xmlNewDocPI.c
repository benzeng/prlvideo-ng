
xmlNodePtr _xmlNewDocPI(xmlDocPtr doc,xmlChar *name,xmlChar *content)

{
  xmlChar *pxVar1;
  xmlRegisterNodeFunc *ppxVar2;
  xmlNodePtr local_38;
  
  if (name == (xmlChar *)0x0) {
    local_38 = (xmlNodePtr)0x0;
  }
  else {
    local_38 = (xmlNodePtr)(*(code *)_xmlMalloc)(0x78);
    if (local_38 == (xmlNodePtr)0x0) {
      FUN_1001658b8("building PI");
      local_38 = (xmlNodePtr)0x0;
    }
    else {
      _memset(local_38,0,0x78);
      local_38->type = XML_PI_NODE;
      if ((doc == (xmlDocPtr)0x0) || (doc->dict == (_xmlDict *)0x0)) {
        pxVar1 = _xmlStrdup(name);
        local_38->name = pxVar1;
      }
      else {
        pxVar1 = _xmlDictLookup(doc->dict,name,-1);
        local_38->name = pxVar1;
      }
      if (content != (xmlChar *)0x0) {
        pxVar1 = _xmlStrdup(content);
        local_38->content = pxVar1;
      }
      local_38->doc = doc;
      if ((___xmlRegisterCallbacks != 0) &&
         (ppxVar2 = ___xmlRegisterNodeDefaultValue(), *ppxVar2 != (xmlRegisterNodeFunc)0x0)) {
        ppxVar2 = ___xmlRegisterNodeDefaultValue();
        (**ppxVar2)(local_38);
      }
    }
  }
  return local_38;
}

