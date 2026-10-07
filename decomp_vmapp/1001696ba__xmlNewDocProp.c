
xmlAttrPtr _xmlNewDocProp(xmlDocPtr doc,xmlChar *name,xmlChar *value)

{
  xmlChar *pxVar1;
  xmlNodePtr pxVar2;
  xmlRegisterNodeFunc *ppxVar3;
  xmlNodePtr local_38;
  _xmlNode *local_10;
  
  if (name == (xmlChar *)0x0) {
    local_38 = (xmlNodePtr)0x0;
  }
  else {
    local_38 = (xmlNodePtr)(*(code *)_xmlMalloc)(0x60);
    if (local_38 == (xmlNodePtr)0x0) {
      FUN_1001658b8("building attribute");
      local_38 = (xmlNodePtr)0x0;
    }
    else {
      _memset(local_38,0,0x60);
      local_38->type = XML_ATTRIBUTE_NODE;
      if ((doc == (xmlDocPtr)0x0) || (doc->dict == (_xmlDict *)0x0)) {
        pxVar1 = _xmlStrdup(name);
        local_38->name = pxVar1;
      }
      else {
        pxVar1 = _xmlDictLookup(doc->dict,name,-1);
        local_38->name = pxVar1;
      }
      local_38->doc = doc;
      if (value != (xmlChar *)0x0) {
        pxVar2 = _xmlStringGetNodeList(doc,value);
        local_38->children = pxVar2;
        local_38->last = (_xmlNode *)0x0;
        for (local_10 = local_38->children; local_10 != (_xmlNode *)0x0; local_10 = local_10->next)
        {
          local_10->parent = local_38;
          if (local_10->next == (_xmlNode *)0x0) {
            local_38->last = local_10;
          }
        }
      }
      if ((___xmlRegisterCallbacks != 0) &&
         (ppxVar3 = ___xmlRegisterNodeDefaultValue(), *ppxVar3 != (xmlRegisterNodeFunc)0x0)) {
        ppxVar3 = ___xmlRegisterNodeDefaultValue();
        (**ppxVar3)(local_38);
      }
    }
  }
  return (xmlAttrPtr)local_38;
}

