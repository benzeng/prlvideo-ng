
void _xmlSAX2StartElement(void *ctx,xmlChar *fullname,xmlChar **atts)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  xmlChar *local_60;
  long *local_58;
  xmlNodePtr local_50;
  xmlNodePtr local_48;
  xmlNsPtr local_40;
  xmlChar *local_38;
  xmlChar *local_30;
  xmlChar *local_28;
  int local_20;
  int local_1c;
  
  if (((ctx != (void *)0x0) && (fullname != (xmlChar *)0x0)) && (*(long *)((long)ctx + 0x10) != 0))
  {
    local_48 = *(xmlNodePtr *)((long)ctx + 0x50);
    local_58 = ctx;
    if (((*(int *)((long)ctx + 0x9c) != 0) && (*(long *)(*(long *)((long)ctx + 0x10) + 0x58) == 0))
       && ((*(long *)(*(long *)((long)ctx + 0x10) + 0x50) == 0 ||
           (((*(long *)(*(long *)(*(long *)((long)ctx + 0x10) + 0x50) + 0x48) == 0 &&
             (*(long *)(*(long *)(*(long *)((long)ctx + 0x10) + 0x50) + 0x50) == 0)) &&
            ((*(long *)(*(long *)(*(long *)((long)ctx + 0x10) + 0x50) + 0x58) == 0 &&
             (*(long *)(*(long *)(*(long *)((long)ctx + 0x10) + 0x50) + 0x60) == 0)))))))) {
      FUN_100977a5b(ctx,0x5e,"Validation failed: no DTD found !",0,0);
      *(undefined4 *)((long)local_58 + 0x9c) = 0;
    }
    local_38 = (xmlChar *)_xmlSplitQName(local_58,fullname,&local_60);
    local_50 = _xmlNewDocNodeEatName((xmlDocPtr)local_58[2],(xmlNsPtr)0x0,local_38,(xmlChar *)0x0);
    if (local_50 == (xmlNodePtr)0x0) {
      if (local_60 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_60);
      }
      FUN_1009779d1(local_58,"xmlSAX2StartElement");
    }
    else {
      if (*(long *)(local_58[2] + 0x18) == 0) {
        _xmlAddChild((xmlNodePtr)local_58[2],local_50);
      }
      else if (local_48 == (xmlNodePtr)0x0) {
        local_48 = *(xmlNodePtr *)(local_58[2] + 0x18);
      }
      *(undefined4 *)(local_58 + 0x34) = 0xffffffff;
      if ((*(int *)((long)local_58 + 0x1b4) != 0) && (local_58[7] != 0)) {
        if (*(int *)(local_58[7] + 0x34) < 0xffff) {
          local_50->line = (ushort)*(undefined4 *)(local_58[7] + 0x34);
        }
        else {
          local_50->line = 0xffff;
        }
      }
      _nodePush(local_58,local_50);
      if (local_48 != (xmlNodePtr)0x0) {
        if (local_48->type == XML_ELEMENT_NODE) {
          _xmlAddChild(local_48,local_50);
        }
        else {
          _xmlAddSibling(local_48,local_50);
        }
      }
      if ((*(int *)((long)local_58 + 0x34) == 0) &&
         ((*(long *)(local_58[2] + 0x50) != 0 || (*(long *)(local_58[2] + 0x58) != 0)))) {
        FUN_10097a4a5(local_58,local_38,local_60,atts);
      }
      if (atts != (xmlChar **)0x0) {
        local_30 = *atts;
        local_28 = atts[1];
        local_20 = 2;
        if (*(int *)((long)local_58 + 0x34) == 0) {
          while ((local_30 != (xmlChar *)0x0 && (local_28 != (xmlChar *)0x0))) {
            if ((*local_30 == 'x') &&
               ((((local_30[1] == 'm' && (local_30[2] == 'l')) && (local_30[3] == 'n')) &&
                (local_30[4] == 's')))) {
              FUN_1009795c5(local_58,local_30,local_28,local_60);
            }
            local_30 = atts[local_20];
            iVar1 = local_20 + 1;
            local_20 = local_20 + 2;
            local_28 = atts[iVar1];
          }
        }
      }
      local_40 = _xmlSearchNs((xmlDocPtr)local_58[2],local_50,local_60);
      if ((local_40 == (xmlNsPtr)0x0) && (local_48 != (xmlNodePtr)0x0)) {
        local_40 = _xmlSearchNs((xmlDocPtr)local_58[2],local_48,local_60);
      }
      if (((local_60 != (xmlChar *)0x0) && (local_40 == (xmlNsPtr)0x0)) &&
         ((local_40 = _xmlNewNs(local_50,(xmlChar *)0x0,local_60), *local_58 != 0 &&
          (*(long *)(*local_58 + 0xa8) != 0)))) {
        (**(code **)(*local_58 + 0xa8))(local_58[1],"Namespace prefix %s is not defined\n",local_60)
        ;
      }
      if (((local_40 != (xmlNsPtr)0x0) && (local_40->href != (xmlChar *)0x0)) &&
         ((*local_40->href != '\0' || (local_40->prefix != (xmlChar *)0x0)))) {
        _xmlSetNs(local_50,local_40);
      }
      if (atts != (xmlChar **)0x0) {
        local_30 = *atts;
        local_28 = atts[1];
        local_20 = 2;
        if (*(int *)((long)local_58 + 0x34) == 0) {
          while ((local_30 != (xmlChar *)0x0 && (local_28 != (xmlChar *)0x0))) {
            if (((*local_30 != 'x') ||
                (((local_30[1] != 'm' || (local_30[2] != 'l')) || (local_30[3] != 'n')))) ||
               (local_30[4] != 's')) {
              FUN_1009795c5(local_58,local_30,local_28,0);
            }
            local_30 = atts[local_20];
            iVar1 = local_20 + 1;
            local_20 = local_20 + 2;
            local_28 = atts[iVar1];
          }
        }
        else {
          while (local_30 != (xmlChar *)0x0) {
            FUN_1009795c5(local_58,local_30,local_28,0);
            lVar4 = (long)local_20;
            local_28 = atts[local_20 + 1];
            local_20 = local_20 + 2;
            local_30 = atts[lVar4];
          }
        }
      }
      if ((*(int *)((long)local_58 + 0x9c) != 0) && ((int)local_58[0x1a] == -0x5432edcc)) {
        local_1c = _xmlValidateDtdFinal((xmlValidCtxtPtr)(local_58 + 0x14),(xmlDocPtr)local_58[2]);
        if (local_1c < 1) {
          *(undefined4 *)(local_58 + 0x13) = 0;
        }
        if (local_1c < 0) {
          *(undefined4 *)(local_58 + 3) = 0;
        }
        uVar2 = *(uint *)(local_58 + 0x13);
        uVar3 = _xmlValidateRoot((xmlValidCtxtPtr)(local_58 + 0x14),(xmlDocPtr)local_58[2]);
        *(uint *)(local_58 + 0x13) = uVar2 & uVar3;
        *(undefined4 *)(local_58 + 0x1a) = 0xabcd1235;
      }
      if (local_60 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_60);
      }
    }
  }
  return;
}

