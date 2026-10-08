
/* WARNING: Enum "enum_2029": Some values do not have unique names */

xmlParserInputPtr _xmlNewEntityInputStream(xmlParserCtxtPtr param_1,long param_2)

{
  xmlGenericErrorFunc pxVar1;
  undefined8 uVar2;
  int *piVar3;
  xmlGenericErrorFunc *ppxVar4;
  void **ppvVar5;
  xmlParserInputPtr pxVar6;
  xmlParserInputPtr local_48;
  
  if (param_2 == 0) {
    FUN_1008734ff(param_1,"xmlNewEntityInputStream entity = NULL\n",0);
    local_48 = (xmlParserInputPtr)0x0;
  }
  else {
    piVar3 = ___xmlParserDebugEntities();
    if (*piVar3 != 0) {
      ppxVar4 = ___xmlGenericError();
      pxVar1 = *ppxVar4;
      uVar2 = *(undefined8 *)(param_2 + 0x10);
      ppvVar5 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar5,"new input from entity: %s\n",uVar2);
    }
    if (*(long *)(param_2 + 0x50) == 0) {
      switch(*(undefined4 *)(param_2 + 0x5c)) {
      case 1:
        FUN_1008734ff(param_1,"Internal entity %s without content !\n",
                      *(undefined8 *)(param_2 + 0x10));
        break;
      case 2:
      case 5:
        pxVar6 = _xmlLoadExternalEntity
                           (*(char **)(param_2 + 0x78),*(char **)(param_2 + 0x60),param_1);
        return pxVar6;
      case 3:
        FUN_1008734ff(param_1,"Cannot parse entity %s\n",*(undefined8 *)(param_2 + 0x10));
        break;
      case 4:
        FUN_1008734ff(param_1,"Internal parameter entity %s without content !\n",
                      *(undefined8 *)(param_2 + 0x10));
        break;
      case 6:
        FUN_1008734ff(param_1,"Predefined entity %s without content !\n",
                      *(undefined8 *)(param_2 + 0x10));
      }
      local_48 = (xmlParserInputPtr)0x0;
    }
    else {
      local_48 = (xmlParserInputPtr)_xmlNewInputStream(param_1);
      if (local_48 == (xmlParserInputPtr)0x0) {
        local_48 = (xmlParserInputPtr)0x0;
      }
      else {
        local_48->filename = *(char **)(param_2 + 0x78);
        local_48->base = *(xmlChar **)(param_2 + 0x50);
        local_48->cur = *(xmlChar **)(param_2 + 0x50);
        local_48->length = *(int *)(param_2 + 0x58);
        local_48->end = (xmlChar *)(*(long *)(param_2 + 0x50) + (long)local_48->length);
      }
    }
  }
  return local_48;
}

