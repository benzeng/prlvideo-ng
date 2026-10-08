
xmlNodePtr _xmlNewText(xmlChar *content)

{
  xmlChar *pxVar1;
  xmlRegisterNodeFunc *ppxVar2;
  xmlNodePtr local_28;
  
  local_28 = (xmlNodePtr)(*(code *)_xmlMalloc)(0x78);
  if (local_28 == (xmlNodePtr)0x0) {
    FUN_1008991e0("building text");
    local_28 = (xmlNodePtr)0x0;
  }
  else {
    _memset(local_28,0,0x78);
    local_28->type = XML_TEXT_NODE;
    local_28->name = "text";
    if (content != (xmlChar *)0x0) {
      pxVar1 = _xmlStrdup(content);
      local_28->content = pxVar1;
    }
    if ((___xmlRegisterCallbacks != 0) &&
       (ppxVar2 = ___xmlRegisterNodeDefaultValue(), *ppxVar2 != (xmlRegisterNodeFunc)0x0)) {
      ppxVar2 = ___xmlRegisterNodeDefaultValue();
      (**ppxVar2)(local_28);
    }
  }
  return local_28;
}

