
xmlChar * _xmlGetNoNsProp(xmlNodePtr node,xmlChar *name)

{
  _xmlDoc *p_Var1;
  int iVar2;
  xmlChar *pxVar3;
  _xmlAttr *local_28;
  xmlAttributePtr local_10;
  
  if (((node != (xmlNodePtr)0x0) && (node->type == XML_ELEMENT_NODE)) && (name != (xmlChar *)0x0)) {
    for (local_28 = node->properties; local_28 != (_xmlAttr *)0x0; local_28 = local_28->next) {
      if ((local_28->ns == (xmlNs *)0x0) && (iVar2 = _xmlStrEqual(local_28->name,name), iVar2 != 0))
      {
        pxVar3 = _xmlNodeListGetString(node->doc,local_28->children,1);
        if (pxVar3 == (xmlChar *)0x0) {
          pxVar3 = _xmlStrdup((xmlChar *)"");
          return pxVar3;
        }
        return pxVar3;
      }
    }
    if (((DAT_10110d774 != 0) && (p_Var1 = node->doc, p_Var1 != (_xmlDoc *)0x0)) &&
       (p_Var1->intSubset != (_xmlDtd *)0x0)) {
      local_10 = _xmlGetDtdAttrDesc(p_Var1->intSubset,node->name,name);
      if ((local_10 == (xmlAttributePtr)0x0) && (p_Var1->extSubset != (_xmlDtd *)0x0)) {
        local_10 = _xmlGetDtdAttrDesc(p_Var1->extSubset,node->name,name);
      }
      if ((local_10 != (xmlAttributePtr)0x0) && (local_10->defaultValue != (xmlChar *)0x0)) {
        pxVar3 = _xmlStrdup(local_10->defaultValue);
        return pxVar3;
      }
    }
  }
  return (xmlChar *)0x0;
}

