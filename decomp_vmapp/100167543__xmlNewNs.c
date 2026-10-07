
xmlNsPtr _xmlNewNs(xmlNodePtr node,xmlChar *href,xmlChar *prefix)

{
  int iVar1;
  xmlChar *pxVar2;
  xmlNsPtr local_38;
  xmlNs *local_10;
  
  if ((node == (xmlNodePtr)0x0) || (node->type == XML_ELEMENT_NODE)) {
    if ((prefix == (xmlChar *)0x0) || (iVar1 = _xmlStrEqual(prefix,(xmlChar *)"xml"), iVar1 == 0)) {
      local_38 = (xmlNsPtr)(*(code *)_xmlMalloc)(0x28);
      if (local_38 == (xmlNsPtr)0x0) {
        FUN_1001658b8("building namespace");
        local_38 = (xmlNsPtr)0x0;
      }
      else {
        local_38->next = (_xmlNs *)0x0;
        *(undefined8 *)&local_38->type = 0;
        local_38->href = (xmlChar *)0x0;
        local_38->prefix = (xmlChar *)0x0;
        local_38->_private = (void *)0x0;
        local_38->type = XML_NAMESPACE_DECL;
        if (href != (xmlChar *)0x0) {
          pxVar2 = _xmlStrdup(href);
          local_38->href = pxVar2;
        }
        if (prefix != (xmlChar *)0x0) {
          pxVar2 = _xmlStrdup(prefix);
          local_38->prefix = pxVar2;
        }
        if (node != (xmlNodePtr)0x0) {
          if (node->nsDef == (xmlNs *)0x0) {
            node->nsDef = local_38;
          }
          else {
            local_10 = node->nsDef;
            if (((local_10->prefix == (xmlChar *)0x0) && (local_38->prefix == (xmlChar *)0x0)) ||
               (iVar1 = _xmlStrEqual(local_10->prefix,local_38->prefix), iVar1 != 0)) {
              _xmlFreeNs(local_38);
              local_38 = (xmlNsPtr)0x0;
            }
            else {
              do {
                if (local_10->next == (_xmlNs *)0x0) {
                  local_10->next = local_38;
                  return local_38;
                }
                local_10 = local_10->next;
              } while (((local_10->prefix != (xmlChar *)0x0) || (local_38->prefix != (xmlChar *)0x0)
                       ) && (iVar1 = _xmlStrEqual(local_10->prefix,local_38->prefix), iVar1 == 0));
              _xmlFreeNs(local_38);
              local_38 = (xmlNsPtr)0x0;
            }
          }
        }
      }
    }
    else {
      local_38 = (xmlNsPtr)0x0;
    }
  }
  else {
    local_38 = (xmlNsPtr)0x0;
  }
  return local_38;
}

