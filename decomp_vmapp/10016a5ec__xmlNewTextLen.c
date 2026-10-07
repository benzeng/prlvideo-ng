
xmlNodePtr _xmlNewTextLen(xmlChar *content,int len)

{
  xmlChar *pxVar1;
  xmlRegisterNodeFunc *ppxVar2;
  xmlNodePtr local_30;
  
  local_30 = (xmlNodePtr)(*(code *)_xmlMalloc)(0x78);
  if (local_30 == (xmlNodePtr)0x0) {
    FUN_1001658b8("building text");
    local_30 = (xmlNodePtr)0x0;
  }
  else {
    _memset(local_30,0,0x78);
    local_30->type = XML_TEXT_NODE;
    local_30->name = "text";
    if (content != (xmlChar *)0x0) {
      pxVar1 = _xmlStrndup(content,len);
      local_30->content = pxVar1;
    }
    if ((___xmlRegisterCallbacks != 0) &&
       (ppxVar2 = ___xmlRegisterNodeDefaultValue(), *ppxVar2 != (xmlRegisterNodeFunc)0x0)) {
      ppxVar2 = ___xmlRegisterNodeDefaultValue();
      (**ppxVar2)(local_30);
    }
  }
  return local_30;
}

