
int _xmlValidateElement(xmlValidCtxtPtr ctxt,xmlDocPtr doc,xmlNodePtr elem)

{
  uint uVar1;
  xmlChar *value;
  uint local_54;
  xmlNodePtr local_30;
  xmlAttrPtr local_28;
  xmlNsPtr local_20;
  uint local_c;
  
  if (elem == (xmlNodePtr)0x0) {
    local_54 = 0;
  }
  else if ((elem->type == XML_XINCLUDE_START) || (elem->type == XML_XINCLUDE_END)) {
    local_54 = 1;
  }
  else if (doc == (xmlDocPtr)0x0) {
    local_54 = 0;
  }
  else if ((doc->intSubset == (_xmlDtd *)0x0) && (doc->extSubset == (_xmlDtd *)0x0)) {
    local_54 = 0;
  }
  else if (elem->type == XML_ENTITY_REF_NODE) {
    local_54 = 1;
  }
  else {
    local_c = _xmlValidateOneElement(ctxt,doc,elem);
    local_c = local_c & 1;
    if (elem->type == XML_ELEMENT_NODE) {
      for (local_28 = elem->properties; local_28 != (xmlAttrPtr)0x0; local_28 = local_28->next) {
        value = _xmlNodeListGetString(doc,local_28->children,0);
        uVar1 = _xmlValidateOneAttribute(ctxt,doc,elem,local_28,value);
        local_c = local_c & uVar1;
        if (value != (xmlChar *)0x0) {
          (*(code *)_xmlFree)(value);
        }
      }
      for (local_20 = elem->nsDef; local_20 != (xmlNsPtr)0x0; local_20 = local_20->next) {
        if (elem->ns == (xmlNs *)0x0) {
          uVar1 = _xmlValidateOneNamespace(ctxt,doc,elem,(xmlChar *)0x0,local_20,local_20->href);
        }
        else {
          uVar1 = _xmlValidateOneNamespace(ctxt,doc,elem,elem->ns->prefix,local_20,local_20->href);
        }
        local_c = local_c & uVar1;
      }
    }
    for (local_30 = elem->children; local_30 != (xmlNodePtr)0x0; local_30 = local_30->next) {
      uVar1 = _xmlValidateElement(ctxt,doc,local_30);
      local_c = local_c & uVar1;
    }
    local_54 = local_c;
  }
  return local_54;
}

