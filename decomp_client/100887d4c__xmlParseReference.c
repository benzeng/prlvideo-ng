
/* WARNING: Removing unreachable block (ram,0x00010088815d) */

void _xmlParseReference(long *param_1)

{
  code *pcVar1;
  int iVar2;
  _xmlNode *local_b0;
  char local_a8 [16];
  _xmlNode *local_98;
  xmlChar *local_90;
  int local_88;
  uint local_84;
  uint local_80;
  int local_7c;
  xmlChar *local_78;
  long local_70;
  xmlNodePtr local_68;
  _xmlNode *local_60;
  xmlNodePtr local_58;
  xmlNodePtr local_50;
  _xmlNode *local_48;
  _xmlNode *local_40;
  _xmlNode *local_38;
  _xmlNode *local_30;
  xmlChar *local_28;
  long local_20;
  
  if (**(char **)(param_1[7] + 0x20) == '&') {
    if (*(char *)(*(long *)(param_1[7] + 0x20) + 1) == '#') {
      local_88 = 0;
      local_84 = (uint)*(byte *)(*(long *)(param_1[7] + 0x20) + 2);
      local_80 = _xmlParseCharRef(param_1);
      if ((int)param_1[0x33] == 1) {
        iVar2 = _xmlCopyCharMultiByte(local_a8 + local_88,local_80);
        local_88 = local_88 + iVar2;
        local_a8[local_88] = '\0';
        if (((*param_1 != 0) && (*(long *)(*param_1 + 0x88) != 0)) &&
           (*(int *)((long)param_1 + 0x14c) == 0)) {
          (**(code **)(*param_1 + 0x88))(param_1[1],local_a8,local_88);
        }
      }
      else if ((int)local_80 < 0x100) {
        local_a8[0] = (char)local_80;
        local_a8[1] = 0;
        if (((*param_1 != 0) && (*(long *)(*param_1 + 0x88) != 0)) &&
           (*(int *)((long)param_1 + 0x14c) == 0)) {
          (**(code **)(*param_1 + 0x88))(param_1[1],local_a8,1);
        }
      }
      else {
        if ((local_84 == 0x78) || (local_84 == 0x58)) {
          _snprintf(local_a8,10,"#x%X",(ulong)local_80);
        }
        else {
          _snprintf(local_a8,10,"#%d",(ulong)local_80);
        }
        if (((*param_1 != 0) && (*(long *)(*param_1 + 0x80) != 0)) &&
           (*(int *)((long)param_1 + 0x14c) == 0)) {
          (**(code **)(*param_1 + 0x80))(param_1[1],local_a8);
        }
      }
    }
    else {
      local_98 = (_xmlNode *)_xmlParseEntityRef(param_1);
      if ((local_98 != (_xmlNode *)0x0) && ((int)param_1[3] != 0)) {
        if ((local_98->name == (xmlChar *)0x0) || (*(int *)((long)&local_98->properties + 4) == 6))
        {
          local_90 = local_98->content;
          if (((local_90 != (xmlChar *)0x0) && (*param_1 != 0)) &&
             ((*(long *)(*param_1 + 0x88) != 0 && (*(int *)((long)param_1 + 0x14c) == 0)))) {
            pcVar1 = *(code **)(*param_1 + 0x88);
            iVar2 = _xmlStrlen(local_90);
            (*pcVar1)(param_1[1],local_90,iVar2);
          }
        }
        else {
          local_b0 = (xmlNodePtr)0x0;
          local_7c = 0;
          if (local_98->children == (_xmlNode *)0x0) {
            local_78 = local_98->content;
            if ((((local_78 == (xmlChar *)0x0) || (*local_78 == '\0')) || (local_78[1] != '\0')) ||
               ((*local_78 != '<' ||
                (iVar2 = _xmlStrEqual(local_98->name,(xmlChar *)"lt"), iVar2 == 0)))) {
              if ((long *)param_1[1] == param_1) {
                local_70 = 0;
              }
              else {
                local_70 = param_1[1];
              }
              if (*(int *)((long)&local_98->properties + 4) == 1) {
                *(int *)(param_1 + 0x31) = (int)param_1[0x31] + 1;
                local_7c = FUN_1008960ac(param_1,local_78,local_70,&local_b0);
                *(int *)(param_1 + 0x31) = (int)param_1[0x31] + -1;
              }
              else if (*(int *)((long)&local_98->properties + 4) == 2) {
                *(int *)(param_1 + 0x31) = (int)param_1[0x31] + 1;
                local_7c = FUN_1008958c4(param_1[2],param_1,*param_1,local_70,(int)param_1[0x31],
                                         local_98[1]._private,local_98->nsDef,&local_b0);
                *(int *)(param_1 + 0x31) = (int)param_1[0x31] + -1;
              }
              else {
                local_7c = 0x58;
                FUN_1008781db(param_1,1,"invalid entity type found\n",0);
              }
              if (local_7c == 0x59) {
                FUN_100877520(param_1,0x59,0);
                return;
              }
              if ((local_7c == 0) && (local_b0 != (xmlNodePtr)0x0)) {
                if (((*(int *)((long)&local_98->properties + 4) == 1) ||
                    (*(int *)((long)&local_98->properties + 4) == 2)) &&
                   (local_98->children == (_xmlNode *)0x0)) {
                  local_98->children = local_b0;
                  if (*(int *)((long)param_1 + 0x1c) == 0) {
                    local_98[1].type = XML_ELEMENT_NODE;
                    for (; local_b0 != (xmlNodePtr)0x0; local_b0 = local_b0->next) {
                      local_b0->parent = local_98;
                      if (local_b0->next == (_xmlNode *)0x0) {
                        local_98->last = local_b0;
                      }
                    }
                  }
                  else if (((local_b0->type == XML_TEXT_NODE) && (local_b0->next == (_xmlNode *)0x0)
                           ) || ((int)param_1[0x56] == 5)) {
                    local_b0->parent = local_98;
                    local_b0 = (xmlNodePtr)0x0;
                    local_98[1].type = XML_ELEMENT_NODE;
                  }
                  else {
                    local_98[1].type = 0;
                    for (; local_b0 != (_xmlNode *)0x0; local_b0 = local_b0->next) {
                      local_b0->parent = (_xmlNode *)param_1[10];
                      local_b0->doc = (_xmlDoc *)param_1[2];
                      if (local_b0->next == (_xmlNode *)0x0) {
                        local_98->last = local_b0;
                      }
                    }
                    local_b0 = local_98->children;
                    if (*(int *)((long)&local_98->properties + 4) == 2) {
                      FUN_100897dad(local_98,local_b0,0);
                    }
                  }
                }
                else {
                  _xmlFreeNodeList(local_b0);
                  local_b0 = (xmlNodePtr)0x0;
                }
              }
              else if ((local_7c == 0) || (local_7c == 0x1b)) {
                if (local_b0 != (xmlNodePtr)0x0) {
                  _xmlFreeNodeList(local_b0);
                  local_b0 = (xmlNodePtr)0x0;
                }
              }
              else {
                FUN_100877520(param_1,local_7c,0);
              }
            }
            else {
              local_b0 = _xmlNewDocText((xmlDocPtr)param_1[2],local_78);
              if (local_b0 != (xmlNodePtr)0x0) {
                if ((*(int *)((long)&local_98->properties + 4) == 1) &&
                   (local_98->children == (_xmlNode *)0x0)) {
                  local_98->children = local_b0;
                  local_98->last = local_b0;
                  local_98[1].type = XML_ELEMENT_NODE;
                  local_b0->parent = local_98;
                }
                else {
                  _xmlFreeNodeList(local_b0);
                }
              }
            }
          }
          if ((((*param_1 == 0) || (*(long *)(*param_1 + 0x80) == 0)) ||
              (*(int *)((long)param_1 + 0x1c) != 0)) || (*(int *)((long)param_1 + 0x14c) != 0)) {
            if (*(int *)((long)param_1 + 0x1c) != 0) {
              if ((param_1[10] == 0) || (local_98->children == (_xmlNode *)0x0)) {
                local_20 = _xmlNewEntityInputStream(param_1,local_98);
                _xmlPushInput(param_1,local_20);
                if ((((*(int *)((long)&local_98->properties + 4) == 2) &&
                     ((**(char **)(param_1[7] + 0x20) == '<' &&
                      (*(char *)(*(long *)(param_1[7] + 0x20) + 1) == '?')))) &&
                    (*(char *)(*(long *)(param_1[7] + 0x20) + 2) == 'x')) &&
                   (((*(char *)(*(long *)(param_1[7] + 0x20) + 3) == 'm' &&
                     (*(char *)(*(long *)(param_1[7] + 0x20) + 4) == 'l')) &&
                    ((*(char *)(*(long *)(param_1[7] + 0x20) + 5) == ' ' ||
                     (((8 < *(byte *)(*(long *)(param_1[7] + 0x20) + 5) &&
                       (*(byte *)(*(long *)(param_1[7] + 0x20) + 5) < 0xb)) ||
                      (*(char *)(*(long *)(param_1[7] + 0x20) + 5) == '\r')))))))) {
                  _xmlParseTextDecl(param_1);
                  if ((int)param_1[0x11] == 0x20) {
                    *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
                  }
                  else if (*(int *)(local_20 + 0x60) == 1) {
                    FUN_100877520(param_1,0x52,0);
                  }
                }
              }
              else {
                if (((local_b0 == (xmlNodePtr)0x0) && (local_98[1].type == 0)) ||
                   ((int)param_1[0x56] == 5)) {
                  local_68 = (xmlNodePtr)0x0;
                  local_58 = (xmlNodePtr)0x0;
                  for (local_60 = local_98->children; local_60 != (xmlNodePtr)0x0;
                      local_60 = local_60->next) {
                    local_68 = _xmlDocCopyNode(local_60,(xmlDocPtr)param_1[2],1);
                    if (local_68 != (xmlNodePtr)0x0) {
                      if (local_68->_private == (void *)0x0) {
                        local_68->_private = local_60->_private;
                      }
                      if (local_58 == (xmlNodePtr)0x0) {
                        local_58 = local_68;
                      }
                      local_68 = _xmlAddChild((xmlNodePtr)param_1[10],local_68);
                    }
                    if (local_98->last == local_60) {
                      if ((((int)param_1[0x56] == 5) && (local_68->type == XML_ELEMENT_NODE)) &&
                         (local_68->children == (_xmlNode *)0x0)) {
                        local_68->extra = 1;
                      }
                      break;
                    }
                  }
                  if (*(int *)((long)&local_98->properties + 4) == 2) {
                    FUN_100897dad(local_98,local_58,local_68);
                  }
                }
                else if (local_b0 == (xmlNodePtr)0x0) {
                  local_50 = (xmlNodePtr)0x0;
                  local_30 = (_xmlNode *)0x0;
                  local_48 = local_98->children;
                  local_98->children = (_xmlNode *)0x0;
                  local_38 = local_98->last;
                  local_98->last = (_xmlNode *)0x0;
                  while (local_48 != (xmlNodePtr)0x0) {
                    local_40 = local_48->next;
                    local_48->next = (_xmlNode *)0x0;
                    local_48->parent = (_xmlNode *)0x0;
                    local_50 = _xmlDocCopyNode(local_48,(xmlDocPtr)param_1[2],1);
                    if (local_50 != (xmlNodePtr)0x0) {
                      if (local_50->_private == (void *)0x0) {
                        local_50->_private = local_48->_private;
                      }
                      if (local_30 == (_xmlNode *)0x0) {
                        local_30 = local_48;
                      }
                      _xmlAddChild(local_98,local_50);
                      _xmlAddChild((xmlNodePtr)param_1[10],local_48);
                    }
                    if (local_48 == local_38) break;
                    local_48 = local_40;
                  }
                  local_98[1].type = XML_ELEMENT_NODE;
                  if (*(int *)((long)&local_98->properties + 4) == 2) {
                    FUN_100897dad(local_98,local_30,local_50);
                  }
                }
                else {
                  local_28 = _xmlDictLookup((xmlDictPtr)param_1[0x39],(xmlChar *)"nbktext",-1);
                  if (local_98->children->type == XML_TEXT_NODE) {
                    local_98->children->name = local_28;
                  }
                  if ((local_98->last != local_98->children) &&
                     (local_98->last->type == XML_TEXT_NODE)) {
                    local_98->last->name = local_28;
                  }
                  _xmlAddChildList((xmlNodePtr)param_1[10],local_98->children);
                }
                *(undefined4 *)(param_1 + 0x34) = 0;
                *(undefined4 *)((long)param_1 + 0x19c) = 0;
              }
            }
          }
          else {
            (**(code **)(*param_1 + 0x80))(param_1[1],local_98->name);
          }
        }
      }
    }
  }
  return;
}

