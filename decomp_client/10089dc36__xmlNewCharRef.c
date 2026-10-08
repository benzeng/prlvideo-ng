
xmlNodePtr _xmlNewCharRef(xmlDocPtr doc,xmlChar *name)

{
  int len;
  xmlChar *pxVar1;
  xmlRegisterNodeFunc *ppxVar2;
  xmlNodePtr local_30;
  
  if (name == (xmlChar *)0x0) {
    local_30 = (xmlNodePtr)0x0;
  }
  else {
    local_30 = (xmlNodePtr)(*(code *)_xmlMalloc)(0x78);
    if (local_30 == (xmlNodePtr)0x0) {
      FUN_1008991e0("building character reference");
      local_30 = (xmlNodePtr)0x0;
    }
    else {
      _memset(local_30,0,0x78);
      local_30->type = XML_ENTITY_REF_NODE;
      local_30->doc = doc;
      if (*name == '&') {
        pxVar1 = name + 1;
        len = _xmlStrlen(pxVar1);
        if (pxVar1[(long)len + -1] == ';') {
          pxVar1 = _xmlStrndup(pxVar1,len + -1);
          local_30->name = pxVar1;
        }
        else {
          pxVar1 = _xmlStrndup(pxVar1,len);
          local_30->name = pxVar1;
        }
      }
      else {
        pxVar1 = _xmlStrdup(name);
        local_30->name = pxVar1;
      }
      if ((___xmlRegisterCallbacks != 0) &&
         (ppxVar2 = ___xmlRegisterNodeDefaultValue(), *ppxVar2 != (xmlRegisterNodeFunc)0x0)) {
        ppxVar2 = ___xmlRegisterNodeDefaultValue();
        (**ppxVar2)(local_30);
      }
    }
  }
  return local_30;
}

