
xmlAttrPtr _xmlHasNsProp(xmlNodePtr node,xmlChar *name,xmlChar *nameSpace)

{
  _xmlDoc *p_Var1;
  int iVar2;
  xmlNsPtr *ppxVar3;
  xmlChar *pxVar4;
  xmlAttributePtr local_58;
  xmlAttrPtr local_38;
  xmlAttributePtr local_28;
  xmlNsPtr *local_18;
  xmlChar *local_10;
  
  if (((node == (xmlNodePtr)0x0) || (node->type != XML_ELEMENT_NODE)) || (name == (xmlChar *)0x0)) {
    local_58 = (xmlAttributePtr)0x0;
  }
  else {
    for (local_38 = node->properties; local_38 != (xmlAttrPtr)0x0; local_38 = local_38->next) {
      iVar2 = _xmlStrEqual(local_38->name,name);
      if ((iVar2 != 0) &&
         (((local_38->ns != (xmlNs *)0x0 &&
           (iVar2 = _xmlStrEqual(local_38->ns->href,nameSpace), iVar2 != 0)) ||
          ((local_38->ns == (xmlNs *)0x0 && (nameSpace == (xmlChar *)0x0)))))) {
        return local_38;
      }
    }
    if (DAT_102275874 == 0) {
      local_58 = (xmlAttributePtr)0x0;
    }
    else {
      p_Var1 = node->doc;
      if ((p_Var1 == (_xmlDoc *)0x0) || (p_Var1->intSubset == (_xmlDtd *)0x0)) {
        local_58 = (xmlAttributePtr)0x0;
      }
      else {
        local_28 = (xmlAttributePtr)0x0;
        ppxVar3 = _xmlGetNsList(node->doc,node);
        if (ppxVar3 == (xmlNsPtr *)0x0) {
          local_58 = (xmlAttributePtr)0x0;
        }
        else {
          if ((node->ns == (xmlNs *)0x0) || (node->ns->prefix == (xmlChar *)0x0)) {
            local_10 = _xmlStrdup(node->name);
          }
          else {
            pxVar4 = _xmlStrdup(node->ns->prefix);
            pxVar4 = _xmlStrcat(pxVar4,(xmlChar *)":");
            local_10 = _xmlStrcat(pxVar4,node->name);
          }
          if (local_10 == (xmlChar *)0x0) {
            (*(code *)_xmlFree)(ppxVar3);
            local_58 = (xmlAttributePtr)0x0;
          }
          else {
            local_18 = ppxVar3;
            if (nameSpace == (xmlChar *)0x0) {
              local_28 = _xmlGetDtdQAttrDesc(p_Var1->intSubset,local_10,name,(xmlChar *)0x0);
              if ((local_28 == (xmlAttributePtr)0x0) && (p_Var1->extSubset != (_xmlDtd *)0x0)) {
                local_28 = _xmlGetDtdQAttrDesc(p_Var1->extSubset,local_10,name,(xmlChar *)0x0);
              }
            }
            else {
              for (; *local_18 != (xmlNsPtr)0x0; local_18 = local_18 + 1) {
                iVar2 = _xmlStrEqual((*local_18)->href,nameSpace);
                if (((iVar2 != 0) &&
                    (local_28 = _xmlGetDtdQAttrDesc(p_Var1->intSubset,local_10,name,
                                                    (*local_18)->prefix),
                    local_28 == (xmlAttributePtr)0x0)) && (p_Var1->extSubset != (_xmlDtd *)0x0)) {
                  local_28 = _xmlGetDtdQAttrDesc(p_Var1->extSubset,local_10,name,(*local_18)->prefix
                                                );
                }
              }
            }
            (*(code *)_xmlFree)(ppxVar3);
            (*(code *)_xmlFree)(local_10);
            local_58 = local_28;
          }
        }
      }
    }
  }
  return (xmlAttrPtr)local_58;
}

