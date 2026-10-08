
xmlNodePtr _xmlNewNodeEatName(xmlNsPtr ns,xmlChar *name)

{
  xmlRegisterNodeFunc *ppxVar1;
  xmlNodePtr local_30;
  
  if (name == (xmlChar *)0x0) {
    local_30 = (xmlNodePtr)0x0;
  }
  else {
    local_30 = (xmlNodePtr)(*(code *)_xmlMalloc)(0x78);
    if (local_30 == (xmlNodePtr)0x0) {
      (*(code *)_xmlFree)(name);
      FUN_1008991e0("building node");
      local_30 = (xmlNodePtr)0x0;
    }
    else {
      _memset(local_30,0,0x78);
      local_30->type = XML_ELEMENT_NODE;
      local_30->name = name;
      local_30->ns = ns;
      if ((___xmlRegisterCallbacks != 0) &&
         (ppxVar1 = ___xmlRegisterNodeDefaultValue(), *ppxVar1 != (xmlRegisterNodeFunc)0x0)) {
        ppxVar1 = ___xmlRegisterNodeDefaultValue();
        (**ppxVar1)(local_30);
      }
    }
  }
  return local_30;
}

