
void FUN_1009795c5(long *param_1,xmlChar *param_2,xmlChar *param_3,xmlChar *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  xmlNodePtr pxVar4;
  xmlChar *local_b0;
  xmlChar *local_98;
  long *local_90;
  _xmlNode *local_88;
  xmlChar *local_80;
  xmlChar *local_78;
  xmlNsPtr local_70;
  xmlNsPtr local_68;
  xmlChar *local_60;
  long *local_58;
  xmlNsPtr local_50;
  xmlChar *local_48;
  long *local_40;
  long local_38;
  _xmlNode *local_30;
  xmlChar *local_28;
  xmlChar *local_20;
  
  local_90 = param_1;
  local_80 = (xmlChar *)_xmlSplitQName(param_1,param_2,&local_98);
  if ((local_80 != (xmlChar *)0x0) && (*local_80 == '\0')) {
    iVar2 = _xmlStrEqual(local_98,(xmlChar *)"xmlns");
    if (iVar2 == 0) {
      FUN_100977e9b(local_90,0x6a,"Avoid attribute ending with \':\' like \'%s\'\n",param_2,0);
    }
    else {
      FUN_100977dae(local_90,0x23,"invalid namespace declaration \'%s\'\n",param_2,0);
    }
    if (local_98 != (xmlChar *)0x0) {
      (*(code *)_xmlFree)(local_98);
    }
    local_98 = (xmlChar *)0x0;
    (*(code *)_xmlFree)(local_80);
    local_80 = _xmlStrdup(param_2);
  }
  if (local_80 == (xmlChar *)0x0) {
    FUN_1009779d1(local_90,"xmlSAX2StartElement");
    if (local_98 != (xmlChar *)0x0) {
      (*(code *)_xmlFree)(local_98);
    }
  }
  else {
    *(undefined4 *)(local_90 + 0x1c) = 1;
    local_78 = _xmlValidCtxtNormalizeAttributeValue
                         ((xmlValidCtxtPtr)(local_90 + 0x14),(xmlDocPtr)local_90[2],
                          (xmlNodePtr)local_90[10],param_2,param_3);
    if ((int)local_90[0x1c] != 1) {
      *(undefined4 *)(local_90 + 0x13) = 0;
    }
    local_b0 = param_3;
    if (local_78 != (xmlChar *)0x0) {
      local_b0 = local_78;
    }
    if ((((*(int *)((long)local_90 + 0x34) == 0) && (local_98 == (xmlChar *)0x0)) &&
        (*local_80 == 'x')) &&
       (((local_80[1] == 'm' && (local_80[2] == 'l')) &&
        ((local_80[3] == 'n' && ((local_80[4] == 's' && (local_80[5] == '\0')))))))) {
      if (*(int *)((long)local_90 + 0x1c) == 0) {
        *(int *)(local_90 + 0x31) = (int)local_90[0x31] + 1;
        local_60 = (xmlChar *)_xmlStringDecodeEntities(local_90,local_b0,1,0,0,0);
        *(int *)(local_90 + 0x31) = (int)local_90[0x31] + -1;
      }
      else {
        local_60 = local_b0;
      }
      if (*local_60 != '\0') {
        local_58 = (long *)_xmlParseURI(local_60);
        if (local_58 == (long *)0x0) {
          if ((*local_90 != 0) && (*(long *)(*local_90 + 0xa8) != 0)) {
            (**(code **)(*local_90 + 0xa8))(local_90[1],"xmlns: %s not a valid URI\n",local_60);
          }
        }
        else {
          if (((*local_58 == 0) && (*local_90 != 0)) && (*(long *)(*local_90 + 0xa8) != 0)) {
            (**(code **)(*local_90 + 0xa8))(local_90[1],"xmlns: URI %s is not absolute\n",local_60);
          }
          _xmlFreeURI(local_58);
        }
      }
      local_68 = _xmlNewNs((xmlNodePtr)local_90[10],local_60,(xmlChar *)0x0);
      if ((((local_68 != (xmlNsPtr)0x0) && (*(int *)((long)local_90 + 0x9c) != 0)) &&
          ((int)local_90[3] != 0)) && ((local_90[2] != 0 && (*(long *)(local_90[2] + 0x50) != 0))))
      {
        uVar1 = *(uint *)(local_90 + 0x13);
        uVar3 = _xmlValidateOneNamespace
                          ((xmlValidCtxtPtr)(local_90 + 0x14),(xmlDocPtr)local_90[2],
                           (xmlNodePtr)local_90[10],param_4,local_68,local_60);
        *(uint *)(local_90 + 0x13) = uVar1 & uVar3;
      }
      if (local_80 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_80);
      }
      if (local_78 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_78);
      }
      if (local_60 != local_b0) {
        (*(code *)_xmlFree)(local_60);
      }
    }
    else if (((*(int *)((long)local_90 + 0x34) == 0) &&
             ((((local_98 != (xmlChar *)0x0 && (*local_98 == 'x')) && (local_98[1] == 'm')) &&
              ((local_98[2] == 'l' && (local_98[3] == 'n')))))) &&
            ((local_98[4] == 's' && (local_98[5] == '\0')))) {
      if (*(int *)((long)local_90 + 0x1c) == 0) {
        *(int *)(local_90 + 0x31) = (int)local_90[0x31] + 1;
        local_48 = (xmlChar *)_xmlStringDecodeEntities(local_90,local_b0,1,0,0,0);
        *(int *)(local_90 + 0x31) = (int)local_90[0x31] + -1;
        if (local_48 == (xmlChar *)0x0) {
          FUN_1009779d1(local_90,"xmlSAX2StartElement");
          (*(code *)_xmlFree)(local_98);
          if (local_80 == (xmlChar *)0x0) {
            return;
          }
          (*(code *)_xmlFree)(local_80);
          return;
        }
      }
      else {
        local_48 = local_b0;
      }
      if (*local_48 == '\0') {
        FUN_100977dae(local_90,0xcc,"Empty namespace name for prefix %s\n",local_80,0);
      }
      if ((*(int *)((long)local_90 + 0x1a4) != 0) && (*local_48 != '\0')) {
        local_40 = (long *)_xmlParseURI(local_48);
        if (local_40 == (long *)0x0) {
          FUN_100977e9b(local_90,99,"xmlns:%s: %s not a valid URI\n",local_80,local_b0);
        }
        else {
          if (*local_40 == 0) {
            FUN_100977e9b(local_90,100,"xmlns:%s: URI %s is not absolute\n",local_80,local_b0);
          }
          _xmlFreeURI(local_40);
        }
      }
      local_50 = _xmlNewNs((xmlNodePtr)local_90[10],local_48,local_80);
      (*(code *)_xmlFree)(local_98);
      if ((((local_50 != (xmlNsPtr)0x0) && (*(int *)((long)local_90 + 0x9c) != 0)) &&
          ((int)local_90[3] != 0)) && ((local_90[2] != 0 && (*(long *)(local_90[2] + 0x50) != 0))))
      {
        uVar1 = *(uint *)(local_90 + 0x13);
        uVar3 = _xmlValidateOneNamespace
                          ((xmlValidCtxtPtr)(local_90 + 0x14),(xmlDocPtr)local_90[2],
                           (xmlNodePtr)local_90[10],param_4,local_50,local_b0);
        *(uint *)(local_90 + 0x13) = uVar1 & uVar3;
      }
      if (local_80 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_80);
      }
      if (local_78 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_78);
      }
      if (local_48 != local_b0) {
        (*(code *)_xmlFree)(local_48);
      }
    }
    else {
      if (local_98 == (xmlChar *)0x0) {
        local_70 = (xmlNsPtr)0x0;
      }
      else {
        local_70 = _xmlSearchNs((xmlDocPtr)local_90[2],(xmlNodePtr)local_90[10],local_98);
        if (local_70 == (xmlNsPtr)0x0) {
          FUN_100977dae(local_90,0xc9,"Namespace prefix %s of attribute %s is not defined\n",
                        local_98,local_80);
        }
        for (local_38 = *(long *)(local_90[10] + 0x58); local_38 != 0;
            local_38 = *(long *)(local_38 + 0x30)) {
          if (((*(long *)(local_38 + 0x48) != 0) &&
              (iVar2 = _xmlStrEqual(local_80,*(xmlChar **)(local_38 + 0x10)), iVar2 != 0)) &&
             ((*(xmlNsPtr *)(local_38 + 0x48) == local_70 ||
              (iVar2 = _xmlStrEqual(local_70->href,*(xmlChar **)(*(long *)(local_38 + 0x48) + 0x10))
              , iVar2 != 0)))) {
            FUN_100977dae(local_90,0x2a,"Attribute %s in %s redefined\n",local_80,local_70->href);
            *(undefined4 *)(local_90 + 3) = 0;
            if ((int)local_90[0x38] == 0) {
              *(undefined4 *)((long)local_90 + 0x14c) = 1;
            }
            goto LAB_10097a465;
          }
        }
      }
      local_88 = (_xmlNode *)
                 _xmlNewNsPropEatName((xmlNodePtr)local_90[10],local_70,local_80,(xmlChar *)0x0);
      if (local_88 != (_xmlNode *)0x0) {
        if ((*(int *)((long)local_90 + 0x1c) == 0) && (*(int *)((long)local_90 + 0x34) == 0)) {
          pxVar4 = _xmlStringGetNodeList((xmlDocPtr)local_90[2],local_b0);
          local_88->children = pxVar4;
          for (local_30 = local_88->children; local_30 != (_xmlNode *)0x0; local_30 = local_30->next
              ) {
            local_30->parent = local_88;
            if (local_30->next == (_xmlNode *)0x0) {
              local_88->last = local_30;
            }
          }
        }
        else if (local_b0 != (xmlChar *)0x0) {
          pxVar4 = _xmlNewDocText((xmlDocPtr)local_90[2],local_b0);
          local_88->children = pxVar4;
          local_88->last = local_88->children;
          if (local_88->children != (_xmlNode *)0x0) {
            local_88->children->parent = local_88;
          }
        }
      }
      if ((((*(int *)((long)local_90 + 0x34) == 0) && (*(int *)((long)local_90 + 0x9c) != 0)) &&
          ((int)local_90[3] != 0)) && ((local_90[2] != 0 && (*(long *)(local_90[2] + 0x50) != 0))))
      {
        if (*(int *)((long)local_90 + 0x1c) == 0) {
          *(int *)(local_90 + 0x31) = (int)local_90[0x31] + 1;
          local_28 = (xmlChar *)_xmlStringDecodeEntities(local_90,local_b0,1,0,0,0);
          *(int *)(local_90 + 0x31) = (int)local_90[0x31] + -1;
          if (local_28 == (xmlChar *)0x0) {
            uVar1 = *(uint *)(local_90 + 0x13);
            uVar3 = _xmlValidateOneAttribute
                              ((xmlValidCtxtPtr)(local_90 + 0x14),(xmlDocPtr)local_90[2],
                               (xmlNodePtr)local_90[10],(xmlAttrPtr)local_88,local_b0);
            *(uint *)(local_90 + 0x13) = uVar1 & uVar3;
          }
          else {
            local_20 = _xmlValidNormalizeAttributeValue
                                 ((xmlDocPtr)local_90[2],(xmlNodePtr)local_90[10],param_2,local_28);
            if (local_20 != (xmlChar *)0x0) {
              (*(code *)_xmlFree)(local_28);
              local_28 = local_20;
            }
            uVar1 = *(uint *)(local_90 + 0x13);
            uVar3 = _xmlValidateOneAttribute
                              ((xmlValidCtxtPtr)(local_90 + 0x14),(xmlDocPtr)local_90[2],
                               (xmlNodePtr)local_90[10],(xmlAttrPtr)local_88,local_28);
            *(uint *)(local_90 + 0x13) = uVar1 & uVar3;
            (*(code *)_xmlFree)(local_28);
          }
        }
        else {
          uVar1 = *(uint *)(local_90 + 0x13);
          uVar3 = _xmlValidateOneAttribute
                            ((xmlValidCtxtPtr)(local_90 + 0x14),(xmlDocPtr)local_90[2],
                             (xmlNodePtr)local_90[10],(xmlAttrPtr)local_88,local_b0);
          *(uint *)(local_90 + 0x13) = uVar1 & uVar3;
        }
      }
      else if ((((*(uint *)(local_90 + 0x36) >> 3 ^ 1) & 1) != 0) &&
              (((*(int *)((long)local_90 + 0x1c) == 0 && (*(int *)((long)local_90 + 0x94) != 2)) ||
               ((*(int *)((long)local_90 + 0x1c) != 0 && ((int)local_90[0x2a] == 0)))))) {
        iVar2 = _xmlStrEqual(param_2,(xmlChar *)"xml:id");
        if (iVar2 == 0) {
          iVar2 = _xmlIsID((xmlDocPtr)local_90[2],(xmlNodePtr)local_90[10],(xmlAttrPtr)local_88);
          if (iVar2 == 0) {
            iVar2 = _xmlIsRef((xmlDocPtr)local_90[2],(xmlNodePtr)local_90[10],(xmlAttrPtr)local_88);
            if (iVar2 != 0) {
              _xmlAddRef((xmlValidCtxtPtr)(local_90 + 0x14),(xmlDocPtr)local_90[2],local_b0,
                         (xmlAttrPtr)local_88);
            }
          }
          else {
            _xmlAddID((xmlValidCtxtPtr)(local_90 + 0x14),(xmlDocPtr)local_90[2],local_b0,
                      (xmlAttrPtr)local_88);
          }
        }
        else {
          iVar2 = _xmlValidateNCName(local_b0,1);
          if (iVar2 != 0) {
            FUN_100977a5b(local_90,0x21b,"xml:id : attribute value %s is not an NCName\n",local_b0,0
                         );
          }
          _xmlAddID((xmlValidCtxtPtr)(local_90 + 0x14),(xmlDocPtr)local_90[2],local_b0,
                    (xmlAttrPtr)local_88);
        }
      }
LAB_10097a465:
      if (local_78 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_78);
      }
      if (local_98 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_98);
      }
    }
  }
  return;
}

