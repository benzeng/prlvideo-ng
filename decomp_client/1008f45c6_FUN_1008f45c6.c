
xmlNodePtr FUN_1008f45c6(int *param_1)

{
  xmlNodePtr node;
  xmlGenericErrorFunc pxVar1;
  xmlNodePtr pxVar2;
  xmlNodePtr cur;
  xmlGenericErrorFunc *ppxVar3;
  void **ppvVar4;
  ulong uVar5;
  xmlNodePtr local_90;
  xmlNodePtr local_70;
  xmlNodePtr local_68;
  xmlNodePtr local_60;
  xmlNodePtr local_58;
  xmlNodePtr local_48;
  xmlNodePtr local_40;
  int local_38;
  int local_34;
  xmlChar *local_30;
  int local_24;
  xmlChar *local_20;
  
  local_70 = (xmlNodePtr)0x0;
  local_68 = (xmlNodePtr)0x0;
  local_60 = (xmlNodePtr)0x0;
  if (param_1 == (int *)0x0) {
    local_90 = (xmlNodePtr)0x0;
  }
  else if (*param_1 == 6) {
    node = *(xmlNodePtr *)(param_1 + 10);
    if (node == (xmlNodePtr)0x0) {
      local_90 = (xmlNodePtr)0x0;
    }
    else {
      local_40 = *(xmlNodePtr *)(param_1 + 0xe);
      if (local_40 != (xmlNodePtr)0x0) {
        local_38 = param_1[0xc];
        local_34 = param_1[0x10];
        local_48 = node;
        do {
          while( true ) {
            while( true ) {
              if (local_48 == (xmlNodePtr)0x0) {
                return local_70;
              }
              if (local_48 != local_40) break;
              if (local_48->type == XML_TEXT_NODE) {
                local_30 = local_48->content;
                if (local_30 == (xmlChar *)0x0) {
                  local_58 = _xmlNewTextLen((xmlChar *)0x0,0);
                }
                else {
                  if ((local_48 == node) && (1 < local_38)) {
                    local_30 = local_30 + (long)local_38 + -1;
                    local_24 = (local_34 - local_38) + 1;
                  }
                  else {
                    local_24 = local_34;
                  }
                  local_58 = _xmlNewTextLen(local_30,local_24);
                }
                if (local_70 == (xmlNodePtr)0x0) {
                  return local_58;
                }
                if (local_68 == (xmlNodePtr)0x0) {
                  _xmlAddChild(local_60,local_58);
                }
                else {
                  _xmlAddNextSibling(local_68,local_58);
                }
                return local_70;
              }
              cur = _xmlCopyNode(local_48,0);
              pxVar2 = cur;
              if (local_70 != (xmlNodePtr)0x0) {
                pxVar2 = local_70;
                if (local_68 == (xmlNodePtr)0x0) {
                  _xmlAddChild(local_60,cur);
                }
                else {
                  _xmlAddNextSibling(local_68,cur);
                }
              }
              local_70 = pxVar2;
              local_68 = (xmlNodePtr)0x0;
              if (1 < local_34) {
                local_40 = (xmlNodePtr)FUN_1008f2574(local_48,local_34 + -1);
                local_34 = 0;
              }
              local_60 = cur;
              if ((local_48 == node) && (1 < local_38)) {
                local_48 = (xmlNodePtr)FUN_1008f2574(local_48,local_38 + -1);
                local_38 = 0;
              }
              else {
                local_48 = local_48->children;
              }
            }
            if ((local_48 == node) && (local_70 == (xmlNodePtr)0x0)) break;
            local_58 = (xmlNodePtr)0x0;
            if (local_48->type < XML_DOCB_DOCUMENT_NODE) {
              uVar5 = 1L << ((byte)local_48->type & 0x3f);
              if ((uVar5 & 0x19c040) == 0) {
                if ((uVar5 & 4) == 0) {
                  if ((uVar5 & 0x20000) == 0) goto LAB_1008f499e;
                  ppxVar3 = ___xmlGenericError();
                  pxVar1 = *ppxVar3;
                  ppvVar4 = ___xmlGenericErrorContext();
                  (*pxVar1)(*ppvVar4,"Unimplemented block at %s:%d\n","xpointer.c",0x610);
                }
                else {
                  ppxVar3 = ___xmlGenericError();
                  pxVar1 = *ppxVar3;
                  ppvVar4 = ___xmlGenericErrorContext();
                  (*pxVar1)(*ppvVar4,"Internal error at %s:%d\n","xpointer.c",0x618);
                }
              }
            }
            else {
LAB_1008f499e:
              local_58 = _xmlCopyNode(local_48,1);
            }
            if (local_58 != (xmlNodePtr)0x0) {
              if ((local_70 == (xmlNodePtr)0x0) ||
                 ((local_68 == (xmlNodePtr)0x0 && (local_60 == (xmlNodePtr)0x0)))) {
                ppxVar3 = ___xmlGenericError();
                pxVar1 = *ppxVar3;
                ppvVar4 = ___xmlGenericErrorContext();
                (*pxVar1)(*ppvVar4,"Internal error at %s:%d\n","xpointer.c",0x620);
                return (xmlNodePtr)0x0;
              }
              if (local_68 == (xmlNodePtr)0x0) {
                _xmlAddChild(local_60,local_58);
                local_68 = local_58;
              }
              else {
                _xmlAddNextSibling(local_68,local_58);
              }
            }
LAB_1008f4a8f:
            if ((local_70 == (xmlNodePtr)0x0) ||
               ((local_68 == (xmlNodePtr)0x0 && (local_60 == (xmlNodePtr)0x0)))) {
              ppxVar3 = ___xmlGenericError();
              pxVar1 = *ppxVar3;
              ppvVar4 = ___xmlGenericErrorContext();
              (*pxVar1)(*ppvVar4,"Internal error at %s:%d\n","xpointer.c",0x62f);
              return (xmlNodePtr)0x0;
            }
            local_48 = (xmlNodePtr)_xmlXPtrAdvanceNode(local_48,0);
          }
          if ((local_48->type == XML_TEXT_NODE) || (local_48->type == XML_CDATA_SECTION_NODE)) {
            local_20 = local_48->content;
            if (local_20 == (xmlChar *)0x0) {
              local_58 = _xmlNewTextLen((xmlChar *)0x0,0);
            }
            else {
              if (1 < local_38) {
                local_20 = local_20 + (long)local_38 + -1;
              }
              local_58 = _xmlNewText(local_20);
            }
            local_70 = local_58;
            local_68 = local_58;
            goto LAB_1008f4a8f;
          }
          if ((local_48 != node) || (local_38 < 2)) {
            local_70 = _xmlCopyNode(local_48,1);
            local_60 = (xmlNodePtr)0x0;
            local_68 = local_70;
            goto LAB_1008f4a8f;
          }
          local_70 = _xmlCopyNode(local_48,0);
          local_68 = (xmlNodePtr)0x0;
          local_48 = (xmlNodePtr)FUN_1008f2574(local_48,local_38 + -1);
          local_38 = 0;
          local_60 = local_70;
        } while( true );
      }
      local_90 = _xmlCopyNode(node,1);
    }
  }
  else {
    local_90 = (xmlNodePtr)0x0;
  }
  return local_90;
}

