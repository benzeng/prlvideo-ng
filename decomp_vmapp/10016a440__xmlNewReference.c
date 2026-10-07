
xmlNodePtr _xmlNewReference(xmlDocPtr doc,xmlChar *name)

{
  int len;
  xmlChar *pxVar1;
  xmlEntityPtr pxVar2;
  xmlRegisterNodeFunc *ppxVar3;
  xmlNodePtr local_40;
  
  if (name == (xmlChar *)0x0) {
    local_40 = (xmlNodePtr)0x0;
  }
  else {
    local_40 = (xmlNodePtr)(*(code *)_xmlMalloc)(0x78);
    if (local_40 == (xmlNodePtr)0x0) {
      FUN_1001658b8("building reference");
      local_40 = (xmlNodePtr)0x0;
    }
    else {
      _memset(local_40,0,0x78);
      local_40->type = XML_ENTITY_REF_NODE;
      local_40->doc = doc;
      if (*name == '&') {
        pxVar1 = name + 1;
        len = _xmlStrlen(pxVar1);
        if (pxVar1[(long)len + -1] == ';') {
          pxVar1 = _xmlStrndup(pxVar1,len + -1);
          local_40->name = pxVar1;
        }
        else {
          pxVar1 = _xmlStrndup(pxVar1,len);
          local_40->name = pxVar1;
        }
      }
      else {
        pxVar1 = _xmlStrdup(name);
        local_40->name = pxVar1;
      }
      pxVar2 = _xmlGetDocEntity(doc,local_40->name);
      if (pxVar2 != (xmlEntityPtr)0x0) {
        local_40->content = pxVar2->content;
        local_40->children = (_xmlNode *)pxVar2;
        local_40->last = (_xmlNode *)pxVar2;
      }
      if ((___xmlRegisterCallbacks != 0) &&
         (ppxVar3 = ___xmlRegisterNodeDefaultValue(), *ppxVar3 != (xmlRegisterNodeFunc)0x0)) {
        ppxVar3 = ___xmlRegisterNodeDefaultValue();
        (**ppxVar3)(local_40);
      }
    }
  }
  return local_40;
}

