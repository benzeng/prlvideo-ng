
xmlAttrPtr _xmlHasProp(xmlNodePtr node,xmlChar *name)

{
  _xmlDoc *p_Var1;
  int iVar2;
  xmlAttrPtr local_20;
  xmlAttributePtr local_10;
  
  if (((node != (xmlNodePtr)0x0) && (node->type == XML_ELEMENT_NODE)) && (name != (xmlChar *)0x0)) {
    for (local_20 = node->properties; local_20 != (xmlAttrPtr)0x0; local_20 = local_20->next) {
      iVar2 = _xmlStrEqual(local_20->name,name);
      if (iVar2 != 0) {
        return local_20;
      }
    }
    if (((DAT_102275874 != 0) && (p_Var1 = node->doc, p_Var1 != (_xmlDoc *)0x0)) &&
       (p_Var1->intSubset != (_xmlDtd *)0x0)) {
      local_10 = _xmlGetDtdAttrDesc(p_Var1->intSubset,node->name,name);
      if ((local_10 == (xmlAttributePtr)0x0) && (p_Var1->extSubset != (_xmlDtd *)0x0)) {
        local_10 = _xmlGetDtdAttrDesc(p_Var1->extSubset,node->name,name);
      }
      if ((local_10 != (xmlAttributePtr)0x0) && (local_10->defaultValue != (xmlChar *)0x0)) {
        return (xmlAttrPtr)local_10;
      }
    }
  }
  return (xmlAttrPtr)0x0;
}

