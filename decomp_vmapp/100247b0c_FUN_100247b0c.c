
void FUN_100247b0c(long param_1,xmlChar *param_2,xmlChar *param_3,xmlChar *param_4,char *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  xmlChar *pxVar5;
  xmlRegisterNodeFunc *ppxVar6;
  xmlNodePtr pxVar7;
  int iVar8;
  xmlChar local_98 [64];
  _xmlNode *local_58;
  xmlNsPtr local_50;
  xmlChar *local_48;
  _xmlNode *local_40;
  _xmlNode *local_38;
  _xmlNode *local_30;
  xmlChar *local_28;
  xmlChar *local_20;
  
  local_50 = (xmlNsPtr)0x0;
  local_48 = (xmlChar *)0x0;
  if (param_3 != (xmlChar *)0x0) {
    local_50 = _xmlSearchNs(*(xmlDocPtr *)(param_1 + 0x10),*(xmlNodePtr *)(param_1 + 0x50),param_3);
  }
  if (*(long *)(param_1 + 0x250) == 0) {
    if (*(int *)(param_1 + 0x238) == 0) {
      local_58 = (_xmlNode *)
                 _xmlNewNsProp(*(xmlNodePtr *)(param_1 + 0x50),local_50,param_2,(xmlChar *)0x0);
    }
    else {
      local_58 = (_xmlNode *)
                 _xmlNewNsPropEatName
                           (*(xmlNodePtr *)(param_1 + 0x50),local_50,param_2,(xmlChar *)0x0);
    }
    if (local_58 == (_xmlNode *)0x0) {
      _xmlErrMemory(param_1,"xmlSAX2AttributeNs");
      return;
    }
  }
  else {
    local_58 = *(_xmlNode **)(param_1 + 0x250);
    *(_xmlNode **)(param_1 + 0x250) = local_58->next;
    *(int *)(param_1 + 0x248) = *(int *)(param_1 + 0x248) + -1;
    _memset(local_58,0,0x60);
    local_58->type = XML_ATTRIBUTE_NODE;
    local_58->parent = *(_xmlNode **)(param_1 + 0x50);
    local_58->doc = *(_xmlDoc **)(param_1 + 0x10);
    local_58->ns = local_50;
    if (*(int *)(param_1 + 0x238) == 0) {
      pxVar5 = _xmlStrdup(param_2);
      local_58->name = pxVar5;
    }
    else {
      local_58->name = param_2;
    }
    if (*(long *)(*(long *)(param_1 + 0x50) + 0x58) == 0) {
      *(_xmlNode **)(*(long *)(param_1 + 0x50) + 0x58) = local_58;
    }
    else {
      for (local_40 = *(_xmlNode **)(*(long *)(param_1 + 0x50) + 0x58);
          local_40->next != (_xmlNode *)0x0; local_40 = local_40->next) {
      }
      local_40->next = local_58;
      local_58->prev = local_40;
    }
    if ((___xmlRegisterCallbacks != 0) &&
       (ppxVar6 = ___xmlRegisterNodeDefaultValue(), *ppxVar6 != (xmlRegisterNodeFunc)0x0)) {
      ppxVar6 = ___xmlRegisterNodeDefaultValue();
      (**ppxVar6)(local_58);
    }
  }
  iVar3 = (int)param_4;
  iVar8 = (int)param_5;
  if ((*(int *)(param_1 + 0x1c) == 0) && (*(int *)(param_1 + 0x34) == 0)) {
    if (*param_5 == '\0') {
      pxVar7 = _xmlStringLenGetNodeList(*(xmlDocPtr *)(param_1 + 0x10),param_4,iVar8 - iVar3);
      local_58->children = pxVar7;
      for (local_38 = local_58->children; local_38 != (_xmlNode *)0x0; local_38 = local_38->next) {
        local_38->doc = local_58->doc;
        local_38->parent = local_58;
        if (local_38->next == (_xmlNode *)0x0) {
          local_58->last = local_38;
        }
      }
    }
    else {
      local_38 = (_xmlNode *)FUN_10024775e(param_1,param_4,iVar8 - iVar3);
      local_58->children = local_38;
      local_58->last = local_38;
      if (local_38 != (_xmlNode *)0x0) {
        local_38->doc = local_58->doc;
        local_38->parent = local_58;
      }
    }
  }
  else if (param_4 != (xmlChar *)0x0) {
    local_30 = (_xmlNode *)FUN_10024775e(param_1,param_4,iVar8 - iVar3);
    local_58->children = local_30;
    local_58->last = local_30;
    if (local_30 != (_xmlNode *)0x0) {
      local_30->doc = local_58->doc;
      local_30->parent = local_58;
    }
  }
  if ((((*(int *)(param_1 + 0x34) == 0) && (*(int *)(param_1 + 0x9c) != 0)) &&
      (*(int *)(param_1 + 0x18) != 0)) &&
     ((*(long *)(param_1 + 0x10) != 0 && (*(long *)(*(long *)(param_1 + 0x10) + 0x50) != 0)))) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      local_48 = (xmlChar *)FUN_100247a52(param_1,param_4,param_5);
      if (local_48 == (xmlChar *)0x0) {
        if (*param_5 == '\0') {
          uVar1 = *(uint *)(param_1 + 0x98);
          uVar2 = _xmlValidateOneAttribute
                            ((xmlValidCtxtPtr)(param_1 + 0xa0),*(xmlDocPtr *)(param_1 + 0x10),
                             *(xmlNodePtr *)(param_1 + 0x50),(xmlAttrPtr)local_58,param_4);
          *(uint *)(param_1 + 0x98) = uVar1 & uVar2;
        }
        else {
          local_48 = _xmlStrndup(param_4,iVar8 - iVar3);
          uVar1 = *(uint *)(param_1 + 0x98);
          uVar2 = _xmlValidateOneAttribute
                            ((xmlValidCtxtPtr)(param_1 + 0xa0),*(xmlDocPtr *)(param_1 + 0x10),
                             *(xmlNodePtr *)(param_1 + 0x50),(xmlAttrPtr)local_58,local_48);
          *(uint *)(param_1 + 0x98) = uVar1 & uVar2;
        }
      }
      else {
        if ((*(long *)(param_1 + 0x228) != 0) &&
           (local_20 = _xmlBuildQName(param_2,param_3,local_98,0x32), local_20 != (xmlChar *)0x0)) {
          *(undefined4 *)(param_1 + 0xe0) = 1;
          local_28 = _xmlValidCtxtNormalizeAttributeValue
                               ((xmlValidCtxtPtr)(param_1 + 0xa0),*(xmlDocPtr *)(param_1 + 0x10),
                                *(xmlNodePtr *)(param_1 + 0x50),local_20,local_48);
          if (*(int *)(param_1 + 0xe0) != 1) {
            *(undefined4 *)(param_1 + 0x98) = 0;
          }
          if ((local_98 != local_20) && (local_20 != param_2)) {
            (*(code *)_xmlFree)(local_20);
          }
          if (local_28 != (xmlChar *)0x0) {
            (*(code *)_xmlFree)(local_48);
            local_48 = local_28;
          }
        }
        uVar1 = *(uint *)(param_1 + 0x98);
        uVar2 = _xmlValidateOneAttribute
                          ((xmlValidCtxtPtr)(param_1 + 0xa0),*(xmlDocPtr *)(param_1 + 0x10),
                           *(xmlNodePtr *)(param_1 + 0x50),(xmlAttrPtr)local_58,local_48);
        *(uint *)(param_1 + 0x98) = uVar1 & uVar2;
      }
    }
    else {
      local_48 = _xmlStrndup(param_4,iVar8 - iVar3);
      uVar1 = *(uint *)(param_1 + 0x98);
      uVar2 = _xmlValidateOneAttribute
                        ((xmlValidCtxtPtr)(param_1 + 0xa0),*(xmlDocPtr *)(param_1 + 0x10),
                         *(xmlNodePtr *)(param_1 + 0x50),(xmlAttrPtr)local_58,local_48);
      *(uint *)(param_1 + 0x98) = uVar1 & uVar2;
    }
  }
  else if ((((*(uint *)(param_1 + 0x1b0) >> 3 ^ 1) & 1) != 0) &&
          (((*(int *)(param_1 + 0x1c) == 0 && (*(int *)(param_1 + 0x94) != 2)) ||
           ((*(int *)(param_1 + 0x1c) != 0 && (*(int *)(param_1 + 0x150) == 0)))))) {
    if ((((*(xmlChar **)(param_1 + 0x1e0) == param_3) && (*param_2 == 'i')) && (param_2[1] == 'd'))
       && (param_2[2] == '\0')) {
      if (local_48 == (xmlChar *)0x0) {
        local_48 = _xmlStrndup(param_4,iVar8 - iVar3);
      }
      iVar3 = _xmlValidateNCName(local_48,1);
      if (iVar3 != 0) {
        FUN_100244133(param_1,0x21b,"xml:id : attribute value %s is not an NCName\n",local_48,0);
      }
      _xmlAddID((xmlValidCtxtPtr)(param_1 + 0xa0),*(xmlDocPtr *)(param_1 + 0x10),local_48,
                (xmlAttrPtr)local_58);
    }
    else {
      iVar4 = _xmlIsID(*(xmlDocPtr *)(param_1 + 0x10),*(xmlNodePtr *)(param_1 + 0x50),
                       (xmlAttrPtr)local_58);
      if (iVar4 == 0) {
        iVar4 = _xmlIsRef(*(xmlDocPtr *)(param_1 + 0x10),*(xmlNodePtr *)(param_1 + 0x50),
                          (xmlAttrPtr)local_58);
        if (iVar4 != 0) {
          if (local_48 == (xmlChar *)0x0) {
            local_48 = _xmlStrndup(param_4,iVar8 - iVar3);
          }
          _xmlAddRef((xmlValidCtxtPtr)(param_1 + 0xa0),*(xmlDocPtr *)(param_1 + 0x10),local_48,
                     (xmlAttrPtr)local_58);
        }
      }
      else {
        if (local_48 == (xmlChar *)0x0) {
          local_48 = _xmlStrndup(param_4,iVar8 - iVar3);
        }
        _xmlAddID((xmlValidCtxtPtr)(param_1 + 0xa0),*(xmlDocPtr *)(param_1 + 0x10),local_48,
                  (xmlAttrPtr)local_58);
      }
    }
  }
  if (local_48 != (xmlChar *)0x0) {
    (*(code *)_xmlFree)(local_48);
  }
  return;
}

