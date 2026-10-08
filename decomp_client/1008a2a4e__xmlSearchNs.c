
xmlNsPtr _xmlSearchNs(xmlDocPtr doc,xmlNodePtr node,xmlChar *nameSpace)

{
  xmlNsPtr pxVar1;
  int iVar2;
  xmlChar *pxVar3;
  _xmlNs *p_Var4;
  xmlNsPtr local_48;
  xmlNodePtr local_38;
  xmlNsPtr local_28;
  
  if (node == (xmlNodePtr)0x0) {
    local_48 = (xmlNsPtr)0x0;
  }
  else {
    local_38 = node;
    if ((nameSpace == (xmlChar *)0x0) ||
       (iVar2 = _xmlStrEqual(nameSpace,(xmlChar *)"xml"), iVar2 == 0)) {
      for (; local_38 != (xmlNodePtr)0x0; local_38 = local_38->parent) {
        if (((local_38->type == XML_ENTITY_REF_NODE) || (local_38->type == XML_ENTITY_NODE)) ||
           (local_38->type == XML_ENTITY_DECL)) {
          return (xmlNsPtr)0x0;
        }
        if (local_38->type == XML_ELEMENT_NODE) {
          for (local_28 = local_38->nsDef; local_28 != (xmlNsPtr)0x0; local_28 = local_28->next) {
            if (((local_28->prefix == (xmlChar *)0x0) && (nameSpace == (xmlChar *)0x0)) &&
               (local_28->href != (xmlChar *)0x0)) {
              return local_28;
            }
            if (((local_28->prefix != (xmlChar *)0x0) && (nameSpace != (xmlChar *)0x0)) &&
               ((local_28->href != (xmlChar *)0x0 &&
                (iVar2 = _xmlStrEqual(local_28->prefix,nameSpace), iVar2 != 0)))) {
              return local_28;
            }
          }
          if ((node != local_38) && (pxVar1 = local_38->ns, pxVar1 != (xmlNsPtr)0x0)) {
            if ((pxVar1->prefix == (xmlChar *)0x0) &&
               ((nameSpace == (xmlChar *)0x0 && (pxVar1->href != (xmlChar *)0x0)))) {
              return pxVar1;
            }
            if ((((pxVar1->prefix != (xmlChar *)0x0) && (nameSpace != (xmlChar *)0x0)) &&
                (pxVar1->href != (xmlChar *)0x0)) &&
               (iVar2 = _xmlStrEqual(pxVar1->prefix,nameSpace), iVar2 != 0)) {
              return pxVar1;
            }
          }
        }
      }
      local_48 = (xmlNsPtr)0x0;
    }
    else if ((doc == (xmlDocPtr)0x0) && (node->type == XML_ELEMENT_NODE)) {
      local_48 = (xmlNsPtr)(*(code *)_xmlMalloc)(0x28);
      if (local_48 == (xmlNsPtr)0x0) {
        FUN_1008991e0("searching namespace");
        local_48 = (xmlNsPtr)0x0;
      }
      else {
        local_48->next = (_xmlNs *)0x0;
        *(undefined8 *)&local_48->type = 0;
        local_48->href = (xmlChar *)0x0;
        local_48->prefix = (xmlChar *)0x0;
        local_48->_private = (void *)0x0;
        local_48->type = XML_NAMESPACE_DECL;
        pxVar3 = _xmlStrdup((xmlChar *)"http://www.w3.org/XML/1998/namespace");
        local_48->href = pxVar3;
        pxVar3 = _xmlStrdup((xmlChar *)"xml");
        local_48->prefix = pxVar3;
        local_48->next = node->nsDef;
        node->nsDef = local_48;
      }
    }
    else {
      if (doc->oldNs == (_xmlNs *)0x0) {
        p_Var4 = (_xmlNs *)(*(code *)_xmlMalloc)(0x28);
        doc->oldNs = p_Var4;
        if (doc->oldNs == (_xmlNs *)0x0) {
          FUN_1008991e0("searching namespace");
          return (xmlNsPtr)0x0;
        }
        p_Var4 = doc->oldNs;
        p_Var4->next = (_xmlNs *)0x0;
        *(undefined8 *)&p_Var4->type = 0;
        p_Var4->href = (xmlChar *)0x0;
        p_Var4->prefix = (xmlChar *)0x0;
        p_Var4->_private = (void *)0x0;
        doc->oldNs->type = XML_NAMESPACE_DECL;
        p_Var4 = doc->oldNs;
        pxVar3 = _xmlStrdup((xmlChar *)"http://www.w3.org/XML/1998/namespace");
        p_Var4->href = pxVar3;
        p_Var4 = doc->oldNs;
        pxVar3 = _xmlStrdup((xmlChar *)"xml");
        p_Var4->prefix = pxVar3;
      }
      local_48 = doc->oldNs;
    }
  }
  return local_48;
}

