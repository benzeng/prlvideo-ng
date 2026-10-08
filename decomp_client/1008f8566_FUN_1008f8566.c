
xmlNodePtr FUN_1008f8566(long param_1,xmlDocPtr param_2,long param_3,int *param_4)

{
  xmlNodePtr local_b8;
  int local_7c;
  xmlNodePtr local_78;
  xmlNodePtr local_70;
  _xmlNode *local_68;
  xmlNodePtr local_60;
  xmlNodePtr local_58;
  xmlNodePtr local_50;
  xmlNodePtr local_48;
  xmlNodePtr local_40;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  xmlChar *local_20;
  int local_14;
  xmlChar *local_10;
  
  local_78 = (xmlNodePtr)0x0;
  local_70 = (xmlNodePtr)0x0;
  local_68 = (_xmlNode *)0x0;
  local_7c = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  if ((((param_1 == 0) || (param_2 == (xmlDocPtr)0x0)) || (param_3 == 0)) || (param_4 == (int *)0x0)
     ) {
    local_b8 = (xmlNodePtr)0x0;
  }
  else if (*param_4 == 6) {
    local_50 = *(xmlNodePtr *)(param_4 + 10);
    if (local_50 == (xmlNodePtr)0x0) {
      local_b8 = (xmlNodePtr)0x0;
    }
    else {
      local_40 = *(xmlNodePtr *)(param_4 + 0xe);
      if (local_40 == (xmlNodePtr)0x0) {
        local_b8 = _xmlDocCopyNode(local_50,param_2,1);
      }
      else {
        local_34 = param_4[0xc];
        local_30 = param_4[0x10];
        local_48 = local_50;
LAB_1008f8a80:
        do {
          while( true ) {
            if (local_48 == (_xmlNode *)0x0) goto LAB_1008f8a8b;
            if (local_7c < 0) {
              for (; local_7c < 0; local_7c = local_7c + 1) {
                local_58 = _xmlDocCopyNode(local_68,param_2,2);
                _xmlAddChild(local_58,local_78);
                local_78 = local_58;
                local_68 = local_68->parent;
              }
              local_70 = local_78;
              local_2c = 0;
            }
            for (; local_7c < local_2c; local_2c = local_2c + -1) {
              local_70 = local_70->parent;
            }
            if (local_48 != local_40) break;
            if (local_48->type == XML_TEXT_NODE) {
              local_20 = local_48->content;
              if (local_20 == (xmlChar *)0x0) {
                local_60 = _xmlNewTextLen((xmlChar *)0x0,0);
              }
              else {
                if ((local_48 == local_50) && (1 < local_34)) {
                  local_20 = local_20 + (long)local_34 + -1;
                  local_14 = (local_30 - local_34) + 1;
                  local_34 = 0;
                }
                else {
                  local_14 = local_30;
                }
                local_60 = _xmlNewTextLen(local_20,local_14);
              }
              if (local_78 == (xmlNodePtr)0x0) {
                return local_60;
              }
              if (local_7c == local_2c) {
                _xmlAddNextSibling(local_70,local_60);
              }
              else {
                _xmlAddChild(local_70,local_60);
              }
              return local_78;
            }
            local_28 = local_7c;
            local_24 = 1;
            local_60 = _xmlDocCopyNode(local_48,param_2,2);
            if (local_78 == (xmlNodePtr)0x0) {
              local_68 = local_48->parent;
              local_78 = local_60;
            }
            else if (local_7c == local_2c) {
              _xmlAddNextSibling(local_70,local_60);
            }
            else {
              _xmlAddChild(local_70,local_60);
              local_2c = local_7c;
            }
            local_70 = local_60;
            if (1 < local_30) {
              local_40 = (xmlNodePtr)FUN_1008f84d0(local_48,local_30 + -1);
              local_30 = 0;
            }
            if ((local_48 == local_50) && (1 < local_34)) {
              local_48 = (xmlNodePtr)FUN_1008f84d0(local_48,local_34 + -1);
              local_34 = 0;
            }
            else {
              local_48 = local_48->children;
            }
            local_7c = local_7c + 1;
          }
          if (local_48 == local_50) {
            if ((local_48->type == XML_TEXT_NODE) || (local_48->type == XML_CDATA_SECTION_NODE)) {
              local_10 = local_48->content;
              if (local_10 == (xmlChar *)0x0) {
                local_60 = _xmlNewTextLen((xmlChar *)0x0,0);
              }
              else {
                if (1 < local_34) {
                  local_10 = local_10 + (long)local_34 + -1;
                  local_34 = 0;
                }
                local_60 = _xmlNewText(local_10);
              }
              local_78 = local_60;
              local_70 = local_60;
              local_68 = local_48->parent;
            }
            else {
              local_78 = _xmlDocCopyNode(local_48,param_2,2);
              local_68 = local_48->parent;
              local_70 = local_78;
              local_60 = local_78;
              if (1 < local_34) {
                local_48 = (xmlNodePtr)FUN_1008f84d0(local_48,local_34 + -1);
                local_2c = 1;
                local_7c = 1;
                local_34 = 0;
                goto LAB_1008f8a80;
              }
            }
          }
          else {
            local_60 = (xmlNodePtr)0x0;
            if ((XML_XINCLUDE_END < local_48->type) ||
               ((1L << ((byte)local_48->type & 0x3f) & 0x1bc044U) == 0)) {
              local_60 = _xmlDocCopyNode(local_48,param_2,2);
            }
            if (local_60 != (xmlNodePtr)0x0) {
              if (local_7c == local_2c) {
                _xmlAddNextSibling(local_70,local_60);
              }
              else {
                _xmlAddChild(local_70,local_60);
                local_2c = local_7c;
              }
              local_70 = local_60;
            }
          }
          local_48 = (xmlNodePtr)_xmlXPtrAdvanceNode(local_48,&local_7c);
        } while ((local_24 == 0) || (local_7c < local_28));
LAB_1008f8a8b:
        local_b8 = local_78;
      }
    }
  }
  else {
    local_b8 = (xmlNodePtr)0x0;
  }
  return local_b8;
}

