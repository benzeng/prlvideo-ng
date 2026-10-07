
xmlNodePtr _xmlNewNode(xmlNsPtr ns,xmlChar *name)

{
  xmlChar *pxVar1;
  xmlRegisterNodeFunc *ppxVar2;
  xmlNodePtr local_30;
  
  if (name == (xmlChar *)0x0) {
    local_30 = (xmlNodePtr)0x0;
  }
  else {
    local_30 = (xmlNodePtr)(*(code *)_xmlMalloc)(0x78);
    if (local_30 == (xmlNodePtr)0x0) {
      FUN_1001658b8("building node");
      local_30 = (xmlNodePtr)0x0;
    }
    else {
      _memset(local_30,0,0x78);
      local_30->type = XML_ELEMENT_NODE;
      pxVar1 = _xmlStrdup(name);
      local_30->name = pxVar1;
      local_30->ns = ns;
      if ((___xmlRegisterCallbacks != 0) &&
         (ppxVar2 = ___xmlRegisterNodeDefaultValue(), *ppxVar2 != (xmlRegisterNodeFunc)0x0)) {
        ppxVar2 = ___xmlRegisterNodeDefaultValue();
        (**ppxVar2)(local_30);
      }
    }
  }
  return local_30;
}

