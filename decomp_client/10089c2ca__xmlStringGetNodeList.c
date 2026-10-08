
xmlNodePtr _xmlStringGetNodeList(xmlDocPtr doc,xmlChar *value)

{
  int iVar1;
  xmlNodePtr pxVar2;
  xmlNodePtr pxVar3;
  int iVar4;
  xmlNodePtr local_80;
  xmlChar local_68 [16];
  xmlNodePtr local_58;
  xmlNodePtr local_50;
  xmlNodePtr local_48;
  xmlChar *local_40;
  byte *local_38;
  byte *local_30;
  xmlEntityPtr local_28;
  int local_20;
  byte local_19;
  _xmlNode *local_18;
  int local_c;
  
  local_58 = (xmlNodePtr)0x0;
  local_50 = (xmlNodePtr)0x0;
  local_38 = value;
  local_30 = value;
  if (value == (xmlChar *)0x0) {
    local_80 = (xmlNodePtr)0x0;
  }
  else {
    while( true ) {
      iVar1 = (int)local_30;
      iVar4 = (int)local_38;
      if (*local_38 == 0) break;
      if (*local_38 == 0x26) {
        local_20 = 0;
        pxVar2 = local_58;
        pxVar3 = local_50;
        if (local_38 != local_30) {
          if ((local_50 == (xmlNodePtr)0x0) || (local_50->type != XML_TEXT_NODE)) {
            local_48 = _xmlNewDocTextLen(doc,local_30,iVar4 - iVar1);
            if (local_48 == (xmlNodePtr)0x0) {
              return local_58;
            }
            pxVar2 = local_48;
            pxVar3 = local_48;
            if (local_50 != (_xmlNode *)0x0) {
              local_50->next = local_48;
              local_48->prev = local_50;
              pxVar2 = local_58;
            }
          }
          else {
            _xmlNodeAddContentLen(local_50,local_30,iVar4 - iVar1);
            pxVar2 = local_58;
            pxVar3 = local_50;
          }
        }
        local_50 = pxVar3;
        local_58 = pxVar2;
        local_30 = local_38;
        if ((local_38[1] == 0x23) && (local_38[2] == 0x78)) {
          local_38 = local_38 + 3;
          local_19 = *local_38;
          while (local_19 != 0x3b) {
            if ((local_19 < 0x30) || (0x39 < local_19)) {
              if ((local_19 < 0x61) || (0x66 < local_19)) {
                if ((local_19 < 0x41) || (0x46 < local_19)) {
                  FUN_10089920e(0x514,doc,0);
                  local_20 = 0;
                  break;
                }
                local_20 = local_20 * 0x10 + (uint)local_19 + -0x37;
              }
              else {
                local_20 = local_20 * 0x10 + (uint)local_19 + -0x57;
              }
            }
            else {
              local_20 = local_20 * 0x10 + (uint)local_19 + -0x30;
            }
            local_38 = local_38 + 1;
            local_19 = *local_38;
          }
          if (local_19 == 0x3b) {
            local_38 = local_38 + 1;
          }
          local_30 = local_38;
        }
        else if (local_38[1] == 0x23) {
          local_38 = local_38 + 2;
          local_19 = *local_38;
          while (local_19 != 0x3b) {
            if ((local_19 < 0x30) || (0x39 < local_19)) {
              FUN_10089920e(0x515,doc,0);
              local_20 = 0;
              break;
            }
            local_20 = local_20 * 10 + (uint)local_19 + -0x30;
            local_38 = local_38 + 1;
            local_19 = *local_38;
          }
          if (local_19 == 0x3b) {
            local_38 = local_38 + 1;
          }
          local_30 = local_38;
        }
        else {
          local_30 = local_38 + 1;
          for (local_38 = local_30; (*local_38 != 0 && (*local_38 != 0x3b)); local_38 = local_38 + 1
              ) {
          }
          if (*local_38 == 0) {
            FUN_10089920e(0x516,doc,local_30);
            return local_58;
          }
          if (local_38 != local_30) {
            local_40 = _xmlStrndup(local_30,(int)local_38 - (int)local_30);
            local_28 = _xmlGetDocEntity(doc,local_40);
            if ((local_28 == (xmlEntityPtr)0x0) ||
               (local_28->etype != XML_INTERNAL_PREDEFINED_ENTITY)) {
              local_48 = _xmlNewReference(doc,local_40);
              if (local_48 == (xmlNodePtr)0x0) {
                if (local_40 != (xmlChar *)0x0) {
                  (*(code *)_xmlFree)(local_40);
                }
                return local_58;
              }
              if ((local_28 != (xmlEntityPtr)0x0) && (local_28->children == (_xmlNode *)0x0)) {
                pxVar2 = _xmlStringGetNodeList(doc,local_48->content);
                local_28->children = pxVar2;
                local_28->owner = 1;
                for (local_18 = local_28->children; local_18 != (_xmlNode *)0x0;
                    local_18 = local_18->next) {
                  local_18->parent = (_xmlNode *)local_28;
                }
              }
              if (local_50 == (xmlNodePtr)0x0) {
                local_58 = local_48;
                local_50 = local_48;
              }
              else {
                local_50 = _xmlAddNextSibling(local_50,local_48);
              }
            }
            else if (local_50 == (xmlNodePtr)0x0) {
              local_58 = _xmlNewDocText(doc,local_28->content);
              local_50 = local_58;
              local_48 = local_58;
            }
            else if (local_50->type == XML_TEXT_NODE) {
              _xmlNodeAddContent(local_50,local_28->content);
            }
            else {
              local_48 = _xmlNewDocText(doc,local_28->content);
              local_50 = _xmlAddNextSibling(local_50,local_48);
            }
            (*(code *)_xmlFree)(local_40);
          }
          local_30 = local_38 + 1;
        }
        local_38 = local_30;
        if (local_20 != 0) {
          local_c = _xmlCopyCharMultiByte(local_68,local_20);
          local_68[local_c] = '\0';
          local_48 = _xmlNewDocText(doc,local_68);
          pxVar2 = local_58;
          pxVar3 = local_50;
          if ((local_48 != (xmlNodePtr)0x0) &&
             (pxVar2 = local_48, pxVar3 = local_48, local_50 != (xmlNodePtr)0x0)) {
            pxVar3 = _xmlAddNextSibling(local_50,local_48);
            pxVar2 = local_58;
          }
          local_50 = pxVar3;
          local_58 = pxVar2;
          local_20 = 0;
        }
      }
      else {
        local_38 = local_38 + 1;
      }
    }
    if ((local_38 != local_30) || (pxVar2 = local_58, local_58 == (xmlNodePtr)0x0)) {
      if ((local_50 == (xmlNodePtr)0x0) || (local_50->type != XML_TEXT_NODE)) {
        local_48 = _xmlNewDocTextLen(doc,local_30,iVar4 - iVar1);
        if (local_48 == (xmlNodePtr)0x0) {
          return local_58;
        }
        pxVar2 = local_48;
        if (local_50 != (xmlNodePtr)0x0) {
          _xmlAddNextSibling(local_50,local_48);
          pxVar2 = local_58;
        }
      }
      else {
        _xmlNodeAddContentLen(local_50,local_30,iVar4 - iVar1);
        pxVar2 = local_58;
      }
    }
    local_58 = pxVar2;
    local_80 = local_58;
  }
  return local_80;
}

