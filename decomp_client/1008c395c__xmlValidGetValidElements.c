
int _xmlValidGetValidElements(xmlNode *prev,xmlNode *next,xmlChar **names,int max)

{
  int iVar1;
  int local_924;
  xmlNode *local_920;
  _xmlNode *local_918;
  _xmlNode *local_910;
  int local_8dc;
  xmlChar *local_8d8 [256];
  xmlValidCtxt local_d8;
  int local_60;
  int local_5c;
  xmlChar *local_58;
  xmlNode *local_50;
  _xmlNode *local_48;
  xmlNodePtr local_40;
  _xmlNode *local_38;
  _xmlNode *local_30;
  _xmlNode *local_28;
  _xmlNode *local_20;
  xmlElementPtr local_18;
  int local_c;
  
  local_60 = 0;
  local_8dc = 0;
  if ((prev == (xmlNode *)0x0) && (next == (xmlNode *)0x0)) {
    local_924 = -1;
  }
  else if (names == (xmlChar **)0x0) {
    local_924 = -1;
  }
  else if (max < 1) {
    local_924 = -1;
  }
  else {
    _memset(&local_d8,0,0x70);
    local_d8.error = FUN_1008c38cd;
    local_60 = 0;
    local_920 = next;
    if (prev != (xmlNode *)0x0) {
      local_920 = prev;
    }
    local_50 = local_920;
    local_48 = local_920->parent;
    local_18 = _xmlGetDtdElementDesc(local_48->doc->intSubset,local_48->name);
    if ((local_18 == (xmlElementPtr)0x0) && (local_48->doc->extSubset != (_xmlDtd *)0x0)) {
      local_18 = _xmlGetDtdElementDesc(local_48->doc->extSubset,local_48->name);
    }
    if (local_18 == (xmlElementPtr)0x0) {
      local_924 = -1;
    }
    else {
      if (prev == (xmlNode *)0x0) {
        local_918 = (_xmlNode *)0x0;
      }
      else {
        local_918 = prev->next;
      }
      local_38 = local_918;
      if (next == (xmlNode *)0x0) {
        local_910 = (_xmlNode *)0x0;
      }
      else {
        local_910 = next->prev;
      }
      local_30 = local_910;
      local_28 = local_48->children;
      local_20 = local_48->last;
      local_40 = _xmlNewDocNode(local_50->doc,(xmlNsPtr)0x0,(xmlChar *)"<!dummy?>",(xmlChar *)0x0);
      local_40->parent = local_48;
      local_40->prev = prev;
      local_40->next = next;
      local_58 = local_40->name;
      if (prev == (xmlNode *)0x0) {
        local_48->children = local_40;
      }
      else {
        prev->next = local_40;
      }
      if (next == (xmlNode *)0x0) {
        local_48->last = local_40;
      }
      else {
        next->prev = local_40;
      }
      local_8dc = _xmlValidGetPotentialChildren(local_18->content,local_8d8,&local_8dc,0x100);
      for (local_5c = 0; local_5c < local_8dc; local_5c = local_5c + 1) {
        local_40->name = local_8d8[local_5c];
        iVar1 = _xmlValidateOneElement(&local_d8,local_48->doc,local_48);
        if (iVar1 != 0) {
          local_c = 0;
          while ((local_c < local_60 &&
                 (iVar1 = _xmlStrEqual(local_8d8[local_5c],names[local_c]), iVar1 == 0))) {
            local_c = local_c + 1;
          }
          names[local_60] = local_8d8[local_5c];
          local_60 = local_60 + 1;
          if (max <= local_60) break;
        }
      }
      if (prev != (xmlNode *)0x0) {
        prev->next = local_38;
      }
      if (next != (xmlNode *)0x0) {
        next->prev = local_30;
      }
      local_48->children = local_28;
      local_48->last = local_20;
      local_40->name = local_58;
      _xmlFreeNode(local_40);
      local_924 = local_60;
    }
  }
  return local_924;
}

