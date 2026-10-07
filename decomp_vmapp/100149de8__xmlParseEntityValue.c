
undefined8 _xmlParseEntityValue(long param_1,undefined8 *param_2)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  char *local_58;
  int local_4c;
  char *local_48;
  int local_40;
  int local_3c;
  uint local_38;
  byte local_31;
  undefined8 local_30;
  long local_28;
  char *local_20;
  long local_18;
  char local_9;
  
  local_48 = (char *)0x0;
  local_40 = 0;
  local_3c = 100;
  local_30 = 0;
  local_58 = (char *)0x0;
  if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\"') {
    local_31 = 0x22;
  }
  else {
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '\'') {
      FUN_100143bf8(param_1,0x24,0);
      return 0;
    }
    local_31 = 0x27;
  }
  local_48 = (char *)(*(code *)_xmlMallocAtomic)(100);
  if (local_48 == (char *)0x0) {
    _xmlErrMemory(param_1,0);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x110) = 0xb;
  local_28 = *(long *)(param_1 + 0x38);
  if ((*(int *)(param_1 + 0x1c4) == 0) &&
     (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
      0xfa)) {
    FUN_100146394(param_1);
  }
  _xmlNextChar(param_1);
  local_38 = _xmlCurrentChar(param_1,&local_4c);
  while ((int)local_38 < 0x100) {
    if (((((int)local_38 < 9) || (10 < (int)local_38)) && (local_38 != 0xd)) &&
       ((int)local_38 < 0x20)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_10014a1cb;
LAB_10014a1ac:
    if ((local_31 == local_38) && (*(long *)(param_1 + 0x38) == local_28)) goto LAB_10014a1cb;
    pcVar2 = local_48;
    if (local_3c <= local_40 + 5) {
      local_3c = local_3c << 1;
      local_20 = (char *)(*(code *)_xmlRealloc)(local_48,(long)local_3c);
      pcVar2 = local_20;
      if (local_20 == (char *)0x0) {
        _xmlErrMemory(param_1,0);
        (*(code *)_xmlFree)(local_48);
        return 0;
      }
    }
    local_48 = pcVar2;
    if (local_4c == 1) {
      local_48[local_40] = (char)local_38;
      local_40 = local_40 + 1;
    }
    else {
      iVar3 = _xmlCopyCharMultiByte(local_48 + local_40,local_38);
      local_40 = local_40 + iVar3;
    }
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\n') {
      *(int *)(*(long *)(param_1 + 0x38) + 0x34) = *(int *)(*(long *)(param_1 + 0x38) + 0x34) + 1;
      *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x38) = 1;
    }
    else {
      *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 1;
    }
    *(long *)(*(long *)(param_1 + 0x38) + 0x20) =
         *(long *)(*(long *)(param_1 + 0x38) + 0x20) + (long)local_4c;
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '%') {
      _xmlParserHandlePEReference(param_1);
    }
    while ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0' && (1 < *(int *)(param_1 + 0x40)))
          ) {
      _xmlPopInput(param_1);
    }
    if ((*(int *)(param_1 + 0x1c4) == 0) &&
       (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
        0xfa)) {
      FUN_100146394(param_1);
    }
    local_38 = _xmlCurrentChar(param_1,&local_4c);
    if (local_38 == 0) {
      if ((*(int *)(param_1 + 0x1c4) == 0) &&
         (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20)
          < 0xfa)) {
        FUN_100146394(param_1);
      }
      local_38 = _xmlCurrentChar(param_1,&local_4c);
    }
  }
  if (((((int)local_38 < 0x100) || (0xd7ff < (int)local_38)) &&
      (((int)local_38 < 0xe000 || (0xfffd < (int)local_38)))) &&
     (((int)local_38 < 0x10000 || (0x10ffff < (int)local_38)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) goto LAB_10014a1ac;
LAB_10014a1cb:
  local_48[local_40] = '\0';
  for (local_58 = local_48; *local_58 != '\0'; local_58 = local_58 + 1) {
    if ((*local_58 == '%') || ((*local_58 == '&' && (local_58[1] != '#')))) {
      local_9 = *local_58;
      local_58 = local_58 + 1;
      local_18 = FUN_100148fef(param_1,&local_58);
      if ((local_18 == 0) || (*local_58 != ';')) {
        FUN_1001445a9(param_1,0x57,"EntityValue: \'%c\' forbidden except for entities references\n",
                      local_9);
      }
      if (((local_9 == '%') && (*(int *)(param_1 + 0x150) == 1)) && (*(int *)(param_1 + 0x40) == 1))
      {
        FUN_100143bf8(param_1,0x58,0);
      }
      if (local_18 != 0) {
        (*(code *)_xmlFree)(local_18);
      }
      if (*local_58 == '\0') break;
    }
  }
  if (local_31 == local_38) {
    _xmlNextChar(param_1);
    local_30 = _xmlStringDecodeEntities(param_1,local_48,2,0,0,0);
    if (param_2 == (undefined8 *)0x0) {
      (*(code *)_xmlFree)(local_48);
    }
    else {
      *param_2 = local_48;
    }
  }
  else {
    FUN_100143bf8(param_1,0x25,0);
    (*(code *)_xmlFree)(local_48);
  }
  return local_30;
}

