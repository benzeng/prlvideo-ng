
xmlNodePtr _xmlStringLenGetNodeList(xmlDocPtr doc,xmlChar *value,int len)

{
  int iVar1;
  xmlNodePtr pxVar2;
  xmlNodePtr pxVar3;
  int iVar4;
  xmlNodePtr local_98;
  xmlChar local_78 [24];
  xmlNodePtr local_60;
  xmlNodePtr local_58;
  xmlNodePtr local_50;
  xmlChar *local_48;
  byte *local_40;
  byte *local_38;
  byte *local_30;
  xmlEntityPtr local_28;
  int local_20;
  byte local_19;
  _xmlNode *local_18;
  int local_c;
  
  local_60 = (xmlNodePtr)0x0;
  local_58 = (xmlNodePtr)0x0;
  local_38 = value + len;
  local_40 = value;
  local_30 = value;
  if (value == (xmlChar *)0x0) {
    local_98 = (xmlNodePtr)0x0;
  }
  else {
    while( true ) {
      iVar1 = (int)local_30;
      iVar4 = (int)local_40;
      if ((local_38 <= local_40) || (*local_40 == 0)) break;
      if (*local_40 == 0x26) {
        local_20 = 0;
        pxVar2 = local_60;
        pxVar3 = local_58;
        if (local_40 != local_30) {
          if ((local_58 == (xmlNodePtr)0x0) || (local_58->type != XML_TEXT_NODE)) {
            local_50 = _xmlNewDocTextLen(doc,local_30,iVar4 - iVar1);
            if (local_50 == (xmlNodePtr)0x0) {
              return local_60;
            }
            pxVar2 = local_50;
            pxVar3 = local_50;
            if (local_58 != (_xmlNode *)0x0) {
              local_58->next = local_50;
              local_50->prev = local_58;
              pxVar2 = local_60;
            }
          }
          else {
            _xmlNodeAddContentLen(local_58,local_30,iVar4 - iVar1);
            pxVar2 = local_60;
            pxVar3 = local_58;
          }
        }
        local_58 = pxVar3;
        local_60 = pxVar2;
        local_30 = local_40;
        if (((local_40 + 2 < local_38) && (local_40[1] == 0x23)) && (local_40[2] == 0x78)) {
          local_40 = local_40 + 3;
          if (local_40 < local_38) {
            local_19 = *local_40;
          }
          else {
            local_19 = 0;
          }
          while (local_19 != 0x3b) {
            if ((local_19 < 0x30) || (0x39 < local_19)) {
              if ((local_19 < 0x61) || (0x66 < local_19)) {
                if ((local_19 < 0x41) || (0x46 < local_19)) {
                  FUN_1001658e6(0x514,doc,0);
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
            local_40 = local_40 + 1;
            if (local_40 < local_38) {
              local_19 = *local_40;
            }
            else {
              local_19 = 0;
            }
          }
          if (local_19 == 0x3b) {
            local_40 = local_40 + 1;
          }
          local_30 = local_40;
        }
        else if ((local_40 + 1 < local_38) && (local_40[1] == 0x23)) {
          local_40 = local_40 + 2;
          if (local_40 < local_38) {
            local_19 = *local_40;
          }
          else {
            local_19 = 0;
          }
          while (local_19 != 0x3b) {
            if ((local_19 < 0x30) || (0x39 < local_19)) {
              FUN_1001658e6(0x515,doc,0);
              local_20 = 0;
              break;
            }
            local_20 = local_20 * 10 + (uint)local_19 + -0x30;
            local_40 = local_40 + 1;
            if (local_40 < local_38) {
              local_19 = *local_40;
            }
            else {
              local_19 = 0;
            }
          }
          if (local_19 == 0x3b) {
            local_40 = local_40 + 1;
          }
          local_30 = local_40;
        }
        else {
          local_30 = local_40 + 1;
          for (local_40 = local_30;
              ((local_40 < local_38 && (*local_40 != 0)) && (*local_40 != 0x3b));
              local_40 = local_40 + 1) {
          }
          if ((local_38 <= local_40) || (*local_40 == 0)) {
            FUN_1001658e6(0x516,doc,local_30);
            return local_60;
          }
          if (local_40 != local_30) {
            local_48 = _xmlStrndup(local_30,(int)local_40 - (int)local_30);
            local_28 = _xmlGetDocEntity(doc,local_48);
            if ((local_28 == (xmlEntityPtr)0x0) ||
               (local_28->etype != XML_INTERNAL_PREDEFINED_ENTITY)) {
              local_50 = _xmlNewReference(doc,local_48);
              if (local_50 == (xmlNodePtr)0x0) {
                if (local_48 != (xmlChar *)0x0) {
                  (*(code *)_xmlFree)(local_48);
                }
                return local_60;
              }
              if ((local_28 != (xmlEntityPtr)0x0) && (local_28->children == (_xmlNode *)0x0)) {
                pxVar2 = _xmlStringGetNodeList(doc,local_50->content);
                local_28->children = pxVar2;
                local_28->owner = 1;
                for (local_18 = local_28->children; local_18 != (_xmlNode *)0x0;
                    local_18 = local_18->next) {
                  local_18->parent = (_xmlNode *)local_28;
                  local_28->last = local_18;
                }
              }
              if (local_58 == (xmlNodePtr)0x0) {
                local_60 = local_50;
                local_58 = local_50;
              }
              else {
                local_58 = _xmlAddNextSibling(local_58,local_50);
              }
            }
            else if (local_58 == (xmlNodePtr)0x0) {
              local_60 = _xmlNewDocText(doc,local_28->content);
              local_58 = local_60;
              local_50 = local_60;
            }
            else if (local_58->type == XML_TEXT_NODE) {
              _xmlNodeAddContent(local_58,local_28->content);
            }
            else {
              local_50 = _xmlNewDocText(doc,local_28->content);
              local_58 = _xmlAddNextSibling(local_58,local_50);
            }
            (*(code *)_xmlFree)(local_48);
          }
          local_30 = local_40 + 1;
        }
        local_40 = local_30;
        if (local_20 != 0) {
          local_c = _xmlCopyCharMultiByte(local_78,local_20);
          local_78[local_c] = '\0';
          local_50 = _xmlNewDocText(doc,local_78);
          pxVar2 = local_60;
          pxVar3 = local_58;
          if ((local_50 != (xmlNodePtr)0x0) &&
             (pxVar2 = local_50, pxVar3 = local_50, local_58 != (xmlNodePtr)0x0)) {
            pxVar3 = _xmlAddNextSibling(local_58,local_50);
            pxVar2 = local_60;
          }
          local_58 = pxVar3;
          local_60 = pxVar2;
          local_20 = 0;
        }
      }
      else {
        local_40 = local_40 + 1;
      }
    }
    if ((local_40 != local_30) || (pxVar2 = local_60, local_60 == (xmlNodePtr)0x0)) {
      if ((local_58 == (xmlNodePtr)0x0) || (local_58->type != XML_TEXT_NODE)) {
        local_50 = _xmlNewDocTextLen(doc,local_30,iVar4 - iVar1);
        if (local_50 == (xmlNodePtr)0x0) {
          return local_60;
        }
        pxVar2 = local_50;
        if (local_58 != (xmlNodePtr)0x0) {
          _xmlAddNextSibling(local_58,local_50);
          pxVar2 = local_60;
        }
      }
      else {
        _xmlNodeAddContentLen(local_58,local_30,iVar4 - iVar1);
        pxVar2 = local_60;
      }
    }
    local_60 = pxVar2;
    local_98 = local_60;
  }
  return local_98;
}

