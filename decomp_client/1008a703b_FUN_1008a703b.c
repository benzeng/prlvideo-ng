
undefined4
FUN_1008a703b(long param_1,xmlDocPtr param_2,_xmlNode *param_3,xmlDocPtr param_4,long param_5)

{
  int iVar1;
  long lVar2;
  xmlChar *pxVar3;
  _xmlNode *local_a0;
  xmlNs *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined4 local_4c;
  _xmlNode *local_48;
  _xmlNode *local_40;
  undefined8 *local_38;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  xmlChar *local_20;
  xmlEntityPtr local_18;
  xmlChar *local_10;
  
  local_4c = 0;
  local_40 = (_xmlNode *)0x0;
  local_58 = (undefined8 *)0x0;
  local_60 = (undefined8 *)0x0;
  local_30 = -1;
  local_28 = 0;
  local_24 = 0;
  local_48 = param_3;
  if ((param_2 == (xmlDocPtr)0x0) || (param_2->dict != param_4->dict)) {
    local_2c = 1;
  }
  else {
    local_2c = 0;
  }
LAB_1008a70db:
  if (local_48 == (_xmlNode *)0x0) {
LAB_1008a79f7:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1008a5b3b(local_58);
    }
    return local_4c;
  }
  if (local_48->doc != param_2) {
    if (local_48->next != (_xmlNode *)0x0) {
      do {
        local_48 = local_48->next;
        if ((local_48->type == XML_XINCLUDE_END) || (local_48->doc == param_3->doc)) break;
      } while (local_48->next != (_xmlNode *)0x0);
      if (local_48->doc == param_3->doc) goto LAB_1008a7159;
    }
    goto LAB_1008a76dd;
  }
LAB_1008a7159:
  local_48->doc = param_4;
  switch(local_48->type) {
  default:
    goto switchD_1008a71a5_caseD_0;
  case XML_ELEMENT_NODE:
    local_40 = local_48;
    local_30 = local_30 + 1;
    if ((param_1 == 0) && (local_48->nsDef != (xmlNs *)0x0)) {
      if (local_28 == 0) {
        if (param_5 != 0) {
          iVar1 = FUN_1008a5dd0(&local_58,param_5);
          if (iVar1 == -1) goto switchD_1008a71a5_caseD_0;
          if (local_58 != (undefined8 *)0x0) {
            local_60 = (undefined8 *)local_58[1];
          }
        }
        local_28 = 1;
      }
      for (local_68 = local_48->nsDef; local_68 != (xmlNs *)0x0; local_68 = local_68->next) {
        if (local_58 != (undefined8 *)0x0) {
          for (local_38 = local_58; (undefined8 *)*local_60 != local_38;
              local_38 = (undefined8 *)*local_38) {
            if (((-2 < *(int *)((long)local_38 + 0x24)) && (*(int *)(local_38 + 4) == -1)) &&
               ((local_68->prefix == *(xmlChar **)(local_38[3] + 0x18) ||
                (iVar1 = _xmlStrEqual(local_68->prefix,*(xmlChar **)(local_38[3] + 0x18)),
                iVar1 != 0)))) {
              *(int *)(local_38 + 4) = local_30;
            }
          }
        }
        lVar2 = FUN_1008a59a1(&local_58,&local_60,local_68,local_68,local_30);
        if (lVar2 == 0) goto switchD_1008a71a5_caseD_0;
      }
    }
  case XML_ATTRIBUTE_NODE:
    if (local_48->ns != (xmlNs *)0x0) {
      if (local_28 == 0) {
        if ((param_5 != 0) && (param_1 == 0)) {
          iVar1 = FUN_1008a5dd0(&local_58,param_5);
          if (iVar1 == -1) goto switchD_1008a71a5_caseD_0;
          if (local_58 != (undefined8 *)0x0) {
            local_60 = (undefined8 *)local_58[1];
          }
        }
        local_28 = 1;
      }
      if (local_58 != (undefined8 *)0x0) {
        for (local_38 = local_58; (undefined8 *)*local_60 != local_38;
            local_38 = (undefined8 *)*local_38) {
          if ((*(int *)(local_38 + 4) == -1) && (local_48->ns == (xmlNs *)local_38[2])) {
            local_48->ns = (xmlNs *)local_38[3];
            goto LAB_1008a74ea;
          }
        }
      }
      if (param_1 == 0) {
        if (param_5 == 0) {
          local_a0 = (_xmlNode *)0x0;
        }
        else {
          local_a0 = local_40;
        }
        iVar1 = FUN_1008a67c7(param_4,local_a0,local_48->ns,&local_68,&local_58,&local_60,local_30,
                              local_24,local_48->type == XML_ATTRIBUTE_NODE);
        if (iVar1 == -1) goto switchD_1008a71a5_caseD_0;
        local_48->ns = local_68;
      }
      else {
        lVar2 = FUN_1008a59a1(&local_58,&local_60,local_68,local_68,0xfffffffc);
        if (lVar2 == 0) {
switchD_1008a71a5_caseD_0:
          if (local_58 != (undefined8 *)0x0) {
            FUN_1008a5b3b(local_58);
          }
          return 0xffffffff;
        }
        local_48->ns = local_68;
      }
    }
LAB_1008a74ea:
    if ((local_2c != 0) && (local_48->name != (xmlChar *)0x0)) {
      if (param_4->dict == (_xmlDict *)0x0) {
        if (((param_2 != (xmlDocPtr)0x0) && (param_2->dict != (_xmlDict *)0x0)) &&
           (iVar1 = _xmlDictOwns(param_2->dict,local_48->name), iVar1 != 0)) {
          pxVar3 = _xmlStrdup(local_48->name);
          local_48->name = pxVar3;
        }
      }
      else {
        local_20 = local_48->name;
        pxVar3 = _xmlDictLookup(param_4->dict,local_48->name,-1);
        local_48->name = pxVar3;
        if (((param_2 == (xmlDocPtr)0x0) || (param_2->dict == (_xmlDict *)0x0)) ||
           (iVar1 = _xmlDictOwns(param_2->dict,local_20), iVar1 == 0)) {
          (*(code *)_xmlFree)(local_20);
        }
      }
    }
    if (local_48->type == XML_ELEMENT_NODE) {
      local_48->psvi = (void *)0x0;
      local_48->line = 0;
      local_48->extra = 0;
      if (local_48->properties != (_xmlAttr *)0x0) {
        local_48 = (_xmlNode *)local_48->properties;
        goto LAB_1008a70db;
      }
    }
    else {
      if ((param_2 != (xmlDocPtr)0x0) && (*(int *)&local_48->content == 2)) {
        _xmlRemoveID(param_2,(xmlAttrPtr)local_48);
      }
      *(undefined4 *)&local_48->content = 0;
      local_48->properties = (_xmlAttr *)0x0;
    }
    break;
  case XML_TEXT_NODE:
  case XML_CDATA_SECTION_NODE:
    if (((local_2c != 0) && (local_48->content != (xmlChar *)0x0)) &&
       ((param_2 != (xmlDocPtr)0x0 &&
        ((param_2->dict != (_xmlDict *)0x0 &&
         (iVar1 = _xmlDictOwns(param_2->dict,local_48->content), iVar1 != 0)))))) {
      if (param_4->dict == (_xmlDict *)0x0) {
        pxVar3 = _xmlStrdup(local_48->content);
        local_48->content = pxVar3;
      }
      else {
        pxVar3 = _xmlDictLookup(param_4->dict,local_48->content,-1);
        local_48->content = pxVar3;
      }
    }
    goto LAB_1008a76dd;
  case XML_ENTITY_REF_NODE:
    local_48->content = (xmlChar *)0x0;
    local_48->children = (_xmlNode *)0x0;
    local_48->last = (_xmlNode *)0x0;
    if (((param_4->intSubset != (_xmlDtd *)0x0) || (param_4->extSubset != (_xmlDtd *)0x0)) &&
       (local_18 = _xmlGetDocEntity(param_4,local_48->name), local_18 != (xmlEntityPtr)0x0)) {
      local_48->content = local_18->content;
      local_48->children = (_xmlNode *)local_18;
      local_48->last = (_xmlNode *)local_18;
    }
    goto LAB_1008a76dd;
  case XML_PI_NODE:
    if ((local_2c != 0) && (local_48->name != (xmlChar *)0x0)) {
      if (param_4->dict == (_xmlDict *)0x0) {
        if (((param_2 != (xmlDocPtr)0x0) && (param_2->dict != (_xmlDict *)0x0)) &&
           (iVar1 = _xmlDictOwns(param_2->dict,local_48->name), iVar1 != 0)) {
          pxVar3 = _xmlStrdup(local_48->name);
          local_48->name = pxVar3;
        }
      }
      else {
        local_10 = local_48->name;
        pxVar3 = _xmlDictLookup(param_4->dict,local_48->name,-1);
        local_48->name = pxVar3;
        if (((param_2 == (xmlDocPtr)0x0) || (param_2->dict == (_xmlDict *)0x0)) ||
           (iVar1 = _xmlDictOwns(param_2->dict,local_10), iVar1 == 0)) {
          (*(code *)_xmlFree)(local_10);
        }
      }
    }
    if (((local_2c != 0) && (local_48->content != (xmlChar *)0x0)) &&
       ((param_2 != (xmlDocPtr)0x0 &&
        ((param_2->dict != (_xmlDict *)0x0 &&
         (iVar1 = _xmlDictOwns(param_2->dict,local_48->content), iVar1 != 0)))))) {
      if (param_4->dict == (_xmlDict *)0x0) {
        pxVar3 = _xmlStrdup(local_48->content);
        local_48->content = pxVar3;
      }
      else {
        pxVar3 = _xmlDictLookup(param_4->dict,local_48->content,-1);
        local_48->content = pxVar3;
      }
    }
    break;
  case XML_COMMENT_NODE:
    break;
  case XML_XINCLUDE_START:
  case XML_XINCLUDE_END:
    return 0xffffffff;
  }
  if (local_48->children == (_xmlNode *)0x0) {
LAB_1008a76dd:
    while( true ) {
      if (local_48 == param_3) goto LAB_1008a79f7;
      if (((local_48->type == XML_ELEMENT_NODE) || (local_48->type == XML_XINCLUDE_START)) ||
         (local_48->type == XML_XINCLUDE_END)) {
        if (local_58 != (undefined8 *)0x0) {
          for (; local_30 <= *(int *)((long)local_60 + 0x24); local_60 = (undefined8 *)local_60[1])
          {
          }
          for (local_38 = local_58; (undefined8 *)*local_60 != local_38;
              local_38 = (undefined8 *)*local_38) {
            if (local_30 <= *(int *)(local_38 + 4)) {
              *(undefined4 *)(local_38 + 4) = 0xffffffff;
            }
          }
        }
        local_30 = local_30 + -1;
      }
      if (local_48->next != (_xmlNode *)0x0) break;
      local_48 = local_48->parent;
    }
    local_48 = local_48->next;
  }
  else {
    local_48 = local_48->children;
  }
  goto LAB_1008a70db;
}

