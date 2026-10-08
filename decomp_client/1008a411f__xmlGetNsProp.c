
xmlChar * _xmlGetNsProp(xmlNodePtr node,xmlChar *name,xmlChar *nameSpace)

{
  xmlDocPtr doc;
  int iVar1;
  xmlNsPtr pxVar2;
  xmlChar *pxVar3;
  xmlChar *local_58;
  _xmlAttr *local_30;
  xmlAttributePtr local_10;
  
  if ((node == (xmlNodePtr)0x0) || (node->type != XML_ELEMENT_NODE)) {
    local_58 = (xmlChar *)0x0;
  }
  else {
    local_30 = node->properties;
    if (nameSpace == (xmlChar *)0x0) {
      local_58 = _xmlGetNoNsProp(node,name);
    }
    else {
      for (; local_30 != (_xmlAttr *)0x0; local_30 = local_30->next) {
        iVar1 = _xmlStrEqual(local_30->name,name);
        if (((iVar1 != 0) && (local_30->ns != (xmlNs *)0x0)) &&
           (iVar1 = _xmlStrEqual(local_30->ns->href,nameSpace), iVar1 != 0)) {
          pxVar3 = _xmlNodeListGetString(node->doc,local_30->children,1);
          if (pxVar3 != (xmlChar *)0x0) {
            return pxVar3;
          }
          pxVar3 = _xmlStrdup((xmlChar *)"");
          return pxVar3;
        }
      }
      if (DAT_102275874 == 0) {
        local_58 = (xmlChar *)0x0;
      }
      else {
        doc = node->doc;
        if ((doc != (xmlDocPtr)0x0) && (doc->intSubset != (_xmlDtd *)0x0)) {
          local_10 = _xmlGetDtdAttrDesc(doc->intSubset,node->name,name);
          if ((local_10 == (xmlAttributePtr)0x0) && (doc->extSubset != (_xmlDtd *)0x0)) {
            local_10 = _xmlGetDtdAttrDesc(doc->extSubset,node->name,name);
          }
          if (((local_10 != (xmlAttributePtr)0x0) && (local_10->prefix != (xmlChar *)0x0)) &&
             ((pxVar2 = _xmlSearchNs(doc,node,local_10->prefix), pxVar2 != (xmlNsPtr)0x0 &&
              (iVar1 = _xmlStrEqual(pxVar2->href,nameSpace), iVar1 != 0)))) {
            pxVar3 = _xmlStrdup(local_10->defaultValue);
            return pxVar3;
          }
        }
        local_58 = (xmlChar *)0x0;
      }
    }
  }
  return local_58;
}

