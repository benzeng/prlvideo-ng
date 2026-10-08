
int _xmlDOMWrapRemoveNode(xmlDOMWrapCtxtPtr ctxt,xmlDocPtr doc,xmlNodePtr node,int options)

{
  int iVar1;
  ulong uVar2;
  int local_50;
  xmlNodePtr local_40;
  int local_28;
  undefined1 local_24 [4];
  long local_20;
  int local_18;
  int local_14;
  xmlNs *local_10;
  
  local_20 = 0;
  if (((node == (xmlNodePtr)0x0) || (doc == (xmlDocPtr)0x0)) || (node->doc != doc)) {
    local_50 = -1;
  }
  else if (node->parent == (_xmlNode *)0x0) {
    local_50 = 0;
  }
  else {
    if (node->type < XML_DOCUMENT_NODE) {
      uVar2 = 1L << ((byte)node->type & 0x3f);
      if ((uVar2 & 0x1b8) != 0) {
        _xmlUnlinkNode(node);
        return 0;
      }
      if ((uVar2 & 6) != 0) {
        _xmlUnlinkNode(node);
        local_40 = node;
        do {
          if (local_40->type == XML_ELEMENT_NODE) {
            if ((ctxt == (xmlDOMWrapCtxtPtr)0x0) && (local_40->nsDef != (xmlNs *)0x0)) {
              local_10 = local_40->nsDef;
              do {
                iVar1 = FUN_1008a5f33(&local_20,local_24,&local_28,local_10,local_10);
                if (iVar1 == -1) goto LAB_1008a6393;
                local_10 = local_10->next;
              } while (local_10 != (xmlNs *)0x0);
            }
LAB_1008a61c2:
            if (local_40->ns != (xmlNs *)0x0) {
              if (local_20 != 0) {
                local_14 = 0;
                for (local_18 = 0; local_18 < local_28; local_18 = local_18 + 1) {
                  if (local_40->ns == *(xmlNs **)((long)local_14 * 8 + local_20)) {
                    local_14 = local_14 + 1;
                    local_40->ns = *(xmlNs **)((long)local_14 * 8 + local_20);
                    goto LAB_1008a626f;
                  }
                  local_14 = local_14 + 2;
                }
              }
              local_10 = (xmlNs *)0x0;
              if (((ctxt == (xmlDOMWrapCtxtPtr)0x0) &&
                  (local_10 = (xmlNs *)FUN_1008a5c6b(doc,local_40->ns->href,local_40->ns->prefix),
                  local_10 == (xmlNs *)0x0)) ||
                 ((local_10 != (xmlNs *)0x0 &&
                  (iVar1 = FUN_1008a5f33(&local_20,local_24,&local_28,local_40->ns,local_10),
                  iVar1 == -1)))) {
LAB_1008a6393:
                if (local_20 != 0) {
                  (*(code *)_xmlFree)(local_20);
                }
                return -1;
              }
              local_40->ns = local_10;
            }
            if ((local_40->type == XML_ELEMENT_NODE) && (local_40->properties != (_xmlAttr *)0x0)) {
              local_40 = (xmlNodePtr)local_40->properties;
            }
            else {
LAB_1008a626f:
              if ((local_40->type != XML_ELEMENT_NODE) || (local_40->children == (_xmlNode *)0x0))
              goto LAB_1008a615b;
              local_40 = local_40->children;
            }
          }
          else {
            if (local_40->type == XML_ATTRIBUTE_NODE) goto LAB_1008a61c2;
LAB_1008a615b:
            while( true ) {
              if (local_40 == (xmlNodePtr)0x0) goto LAB_1008a6371;
              if (local_40->next != (_xmlNode *)0x0) break;
              local_40 = local_40->parent;
            }
            local_40 = local_40->next;
          }
          if (local_40 == (_xmlNode *)0x0) {
LAB_1008a6371:
            if (local_20 != 0) {
              (*(code *)_xmlFree)(local_20);
            }
            return 0;
          }
        } while( true );
      }
    }
    local_50 = 1;
  }
  return local_50;
}

