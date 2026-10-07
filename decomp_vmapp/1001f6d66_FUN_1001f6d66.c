
void FUN_1001f6d66(long param_1,_xmlNode *param_2)

{
  int iVar1;
  xmlNodePtr local_18;
  xmlNodePtr local_10;
  
  if ((param_1 != 0) && (param_2 != (_xmlNode *)0x0)) {
    local_18 = (xmlNodePtr)0x0;
    local_10 = param_2;
LAB_1001f6ed9:
    if (local_10 != (xmlNodePtr)0x0) {
      if (local_18 != (xmlNodePtr)0x0) {
        _xmlUnlinkNode(local_18);
        _xmlFreeNode(local_18);
        local_18 = (xmlNodePtr)0x0;
      }
      if (local_10->type == XML_TEXT_NODE) {
        if (local_10->type == XML_TEXT_NODE) {
          iVar1 = FUN_1001ed76e(local_10->content,0xffffffff);
          if (iVar1 != 0) {
            iVar1 = _xmlNodeGetSpacePreserve(local_10);
            if (iVar1 != 1) {
              local_18 = local_10;
            }
          }
        }
LAB_1001f6e06:
        if ((((local_10->children != (_xmlNode *)0x0) &&
             (local_10->children->type != XML_ENTITY_DECL)) &&
            (local_10->children->type != XML_ENTITY_REF_NODE)) &&
           (local_10->children->type != XML_ENTITY_NODE)) {
          local_10 = local_10->children;
          goto LAB_1001f6ed9;
        }
      }
      else {
        if ((local_10->type == XML_ELEMENT_NODE) || (local_10->type == XML_CDATA_SECTION_NODE))
        goto LAB_1001f6e06;
        local_18 = local_10;
      }
      if (local_10->next == (_xmlNode *)0x0) {
        do {
          local_10 = local_10->parent;
          if (local_10 == (_xmlNode *)0x0) break;
          if (local_10 == param_2) {
            local_10 = (xmlNodePtr)0x0;
            break;
          }
          if (local_10->next != (_xmlNode *)0x0) {
            local_10 = local_10->next;
            break;
          }
        } while (local_10 != (_xmlNode *)0x0);
      }
      else {
        local_10 = local_10->next;
      }
      goto LAB_1001f6ed9;
    }
    if (local_18 != (xmlNodePtr)0x0) {
      _xmlUnlinkNode(local_18);
      _xmlFreeNode(local_18);
    }
  }
  return;
}

