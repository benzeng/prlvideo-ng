
xmlNsPtr _xmlSearchNsByHref(xmlDocPtr doc,xmlNodePtr node,xmlChar *href)

{
  xmlNsPtr pxVar1;
  int iVar2;
  xmlChar *pxVar3;
  _xmlNs *p_Var4;
  bool bVar5;
  xmlNsPtr local_58;
  xmlNodePtr local_48;
  xmlNsPtr local_30;
  
  if ((node == (xmlNodePtr)0x0) || (href == (xmlChar *)0x0)) {
    local_58 = (xmlNsPtr)0x0;
  }
  else {
    iVar2 = _xmlStrEqual(href,(xmlChar *)"http://www.w3.org/XML/1998/namespace");
    if (iVar2 == 0) {
      bVar5 = node->type != XML_ATTRIBUTE_NODE;
      for (local_48 = node; local_48 != (xmlNodePtr)0x0; local_48 = local_48->parent) {
        if (((local_48->type == XML_ENTITY_REF_NODE) || (local_48->type == XML_ENTITY_NODE)) ||
           (local_48->type == XML_ENTITY_DECL)) {
          return (xmlNsPtr)0x0;
        }
        if (local_48->type == XML_ELEMENT_NODE) {
          for (local_30 = local_48->nsDef; local_30 != (xmlNsPtr)0x0; local_30 = local_30->next) {
            if ((((local_30->href != (xmlChar *)0x0) && (href != (xmlChar *)0x0)) &&
                ((iVar2 = _xmlStrEqual(local_30->href,href), iVar2 != 0 &&
                 ((bVar5 || (local_30->prefix != (xmlChar *)0x0)))))) &&
               (iVar2 = FUN_1008a2dda(doc,node,local_48,local_30->prefix), iVar2 == 1)) {
              return local_30;
            }
          }
          if ((((((node != local_48) && (pxVar1 = local_48->ns, pxVar1 != (xmlNsPtr)0x0)) &&
                (pxVar1->href != (xmlChar *)0x0)) &&
               ((href != (xmlChar *)0x0 && (iVar2 = _xmlStrEqual(pxVar1->href,href), iVar2 != 0))))
              && ((bVar5 || (pxVar1->prefix != (xmlChar *)0x0)))) &&
             (iVar2 = FUN_1008a2dda(doc,node,local_48,pxVar1->prefix), iVar2 == 1)) {
            return pxVar1;
          }
        }
      }
      local_58 = (xmlNsPtr)0x0;
    }
    else if ((doc == (xmlDocPtr)0x0) && (node->type == XML_ELEMENT_NODE)) {
      local_58 = (xmlNsPtr)(*(code *)_xmlMalloc)(0x28);
      if (local_58 == (xmlNsPtr)0x0) {
        FUN_1008991e0("searching namespace");
        local_58 = (xmlNsPtr)0x0;
      }
      else {
        local_58->next = (_xmlNs *)0x0;
        *(undefined8 *)&local_58->type = 0;
        local_58->href = (xmlChar *)0x0;
        local_58->prefix = (xmlChar *)0x0;
        local_58->_private = (void *)0x0;
        local_58->type = XML_NAMESPACE_DECL;
        pxVar3 = _xmlStrdup((xmlChar *)"http://www.w3.org/XML/1998/namespace");
        local_58->href = pxVar3;
        pxVar3 = _xmlStrdup((xmlChar *)"xml");
        local_58->prefix = pxVar3;
        local_58->next = node->nsDef;
        node->nsDef = local_58;
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
      local_58 = doc->oldNs;
    }
  }
  return local_58;
}

