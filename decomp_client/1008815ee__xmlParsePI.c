
void _xmlParsePI(long *param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  int local_4c;
  long local_48;
  int local_3c;
  int local_38;
  uint local_34;
  xmlChar *local_30;
  int local_28;
  int local_24;
  long local_20;
  long local_18;
  xmlCatalogAllow local_c;
  
  local_48 = 0;
  local_3c = 0;
  local_38 = 100;
  local_24 = 0;
  if (**(char **)(param_1[7] + 0x20) != '<') {
    return;
  }
  if (*(char *)(*(long *)(param_1[7] + 0x20) + 1) != '?') {
    return;
  }
  local_20 = param_1[7];
  local_28 = (int)param_1[0x22];
  *(undefined4 *)(param_1 + 0x22) = 2;
  param_1[0x27] = param_1[0x27] + 2;
  *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + 2;
  *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 2;
  if (**(char **)(param_1[7] + 0x20) == '%') {
    _xmlParserHandlePEReference(param_1);
  }
  if ((**(char **)(param_1[7] + 0x20) == '\0') &&
     (iVar3 = _xmlParserInputGrow((xmlParserInputPtr)param_1[7],0xfa), iVar3 < 1)) {
    _xmlPopInput(param_1);
  }
  if (((*(int *)((long)param_1 + 0x1c4) == 0) &&
      (500 < *(long *)(param_1[7] + 0x20) - *(long *)(param_1[7] + 0x18))) &&
     (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 500)) {
    FUN_100879c6f(param_1);
  }
  local_30 = (xmlChar *)_xmlParsePITarget(param_1);
  if (local_30 == (xmlChar *)0x0) {
    FUN_100877520(param_1,0x2e,0);
  }
  else {
    if ((**(char **)(param_1[7] + 0x20) == '?') &&
       (*(char *)(*(long *)(param_1[7] + 0x20) + 1) == '>')) {
      if (param_1[7] != local_20) {
        FUN_100877b3f(param_1,0x5a,"PI declaration doesn\'t start and stop in the same entity\n");
      }
      param_1[0x27] = param_1[0x27] + 2;
      *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + 2;
      *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 2;
      if (**(char **)(param_1[7] + 0x20) == '%') {
        _xmlParserHandlePEReference(param_1);
      }
      if ((**(char **)(param_1[7] + 0x20) == '\0') &&
         (iVar3 = _xmlParserInputGrow((xmlParserInputPtr)param_1[7],0xfa), iVar3 < 1)) {
        _xmlPopInput(param_1);
      }
      if (((*param_1 != 0) && (*(int *)((long)param_1 + 0x14c) == 0)) &&
         (*(long *)(*param_1 + 0x98) != 0)) {
        (**(code **)(*param_1 + 0x98))(param_1[1],local_30,0);
      }
      *(int *)(param_1 + 0x22) = local_28;
      return;
    }
    local_48 = (*(code *)_xmlMallocAtomic)((long)local_38);
    if (local_48 == 0) {
      _xmlErrMemory(param_1,0);
      *(int *)(param_1 + 0x22) = local_28;
      return;
    }
    local_34 = (uint)**(byte **)(param_1[7] + 0x20);
    if ((0xff < local_34) ||
       (((local_34 != 0x20 && ((local_34 < 9 || (10 < local_34)))) && (local_34 != 0xd)))) {
      FUN_1008780de(param_1,0x41,"ParsePI: PI %s space expected\n",local_30);
    }
    _xmlSkipBlankChars(param_1);
    local_34 = _xmlCurrentChar(param_1,&local_4c);
    while (0xff < (int)local_34) {
      if (((((int)local_34 < 0x100) || (0xd7ff < (int)local_34)) &&
          (((int)local_34 < 0xe000 || (0xfffd < (int)local_34)))) &&
         (((int)local_34 < 0x10000 || (0x10ffff < (int)local_34)))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_100881c9a;
LAB_100881c76:
      if ((local_34 == 0x3f) && (*(char *)(*(long *)(param_1[7] + 0x20) + 1) == '>'))
      goto LAB_100881c9a;
      lVar2 = local_48;
      if (local_38 <= local_3c + 5) {
        local_38 = local_38 << 1;
        local_18 = (*(code *)_xmlRealloc)(local_48,(long)local_38);
        lVar2 = local_18;
        if (local_18 == 0) {
          _xmlErrMemory(param_1,0);
          (*(code *)_xmlFree)(local_48);
          *(int *)(param_1 + 0x22) = local_28;
          return;
        }
      }
      local_48 = lVar2;
      local_24 = local_24 + 1;
      if (0x32 < local_24) {
        if ((*(int *)((long)param_1 + 0x1c4) == 0) &&
           (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa)) {
          FUN_100879cbc(param_1);
        }
        local_24 = 0;
      }
      if (local_4c == 1) {
        *(char *)(local_3c + local_48) = (char)local_34;
        local_3c = local_3c + 1;
      }
      else {
        iVar3 = _xmlCopyCharMultiByte(local_3c + local_48,local_34);
        local_3c = local_3c + iVar3;
      }
      if (**(char **)(param_1[7] + 0x20) == '\n') {
        *(int *)(param_1[7] + 0x34) = *(int *)(param_1[7] + 0x34) + 1;
        *(undefined4 *)(param_1[7] + 0x38) = 1;
      }
      else {
        *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 1;
      }
      *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + (long)local_4c;
      if (**(char **)(param_1[7] + 0x20) == '%') {
        _xmlParserHandlePEReference(param_1);
      }
      local_34 = _xmlCurrentChar(param_1,&local_4c);
      if (local_34 == 0) {
        if (((*(int *)((long)param_1 + 0x1c4) == 0) &&
            (500 < *(long *)(param_1[7] + 0x20) - *(long *)(param_1[7] + 0x18))) &&
           (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 500)) {
          FUN_100879c6f(param_1);
        }
        if ((*(int *)((long)param_1 + 0x1c4) == 0) &&
           (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa)) {
          FUN_100879cbc(param_1);
        }
        local_34 = _xmlCurrentChar(param_1,&local_4c);
      }
    }
    if ((((int)local_34 < 9) || (10 < (int)local_34)) &&
       ((local_34 != 0xd && ((int)local_34 < 0x20)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_100881c76;
LAB_100881c9a:
    *(undefined1 *)(local_3c + local_48) = 0;
    if (local_34 == 0x3f) {
      if (param_1[7] != local_20) {
        FUN_100877b3f(param_1,0x41,"PI declaration doesn\'t start and stop in the same entity\n");
      }
      param_1[0x27] = param_1[0x27] + 2;
      *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + 2;
      *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 2;
      if (**(char **)(param_1[7] + 0x20) == '%') {
        _xmlParserHandlePEReference(param_1);
      }
      if ((**(char **)(param_1[7] + 0x20) == '\0') &&
         (iVar3 = _xmlParserInputGrow((xmlParserInputPtr)param_1[7],0xfa), iVar3 < 1)) {
        _xmlPopInput(param_1);
      }
      if ((((local_28 == 1) || (local_28 == 0)) &&
          (iVar3 = _xmlStrEqual(local_30,(xmlChar *)"oasis-xml-catalog"), iVar3 != 0)) &&
         ((local_c = _xmlCatalogGetDefaults(), local_c == XML_CATA_ALLOW_DOCUMENT ||
          (local_c == XML_CATA_ALLOW_ALL)))) {
        FUN_1008813c7(param_1,local_48);
      }
      if (((*param_1 != 0) && (*(int *)((long)param_1 + 0x14c) == 0)) &&
         (*(long *)(*param_1 + 0x98) != 0)) {
        (**(code **)(*param_1 + 0x98))(param_1[1],local_30,local_48);
      }
    }
    else {
      FUN_1008780de(param_1,0x2f,"ParsePI: PI %s never end ...\n",local_30);
    }
    (*(code *)_xmlFree)(local_48);
  }
  *(int *)(param_1 + 0x22) = local_28;
  return;
}

