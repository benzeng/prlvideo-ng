
void FUN_1008c8963(long *param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  int local_3c;
  long local_38;
  int local_2c;
  int local_28;
  uint local_24;
  long local_20;
  undefined4 local_18;
  int local_14;
  long local_10;
  
  local_38 = 0;
  local_2c = 0;
  local_28 = 100;
  local_14 = 0;
  if (*(int *)((long)param_1 + 0x114) != 0) {
    return;
  }
  if (**(char **)(param_1[7] + 0x20) != '<') {
    return;
  }
  if (*(char *)(*(long *)(param_1[7] + 0x20) + 1) != '?') {
    return;
  }
  local_18 = (undefined4)param_1[0x22];
  *(undefined4 *)(param_1 + 0x22) = 2;
  param_1[0x27] = param_1[0x27] + 2;
  *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + 2;
  *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 2;
  if ((500 < *(long *)(param_1[7] + 0x20) - *(long *)(param_1[7] + 0x18)) &&
     (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 500)) {
    _xmlParserInputShrink(param_1[7]);
  }
  local_20 = FUN_1008c6418(param_1);
  if (local_20 == 0) {
    FUN_1008c3ec0(param_1,0x2e,"PI is not started correctly",0,0);
  }
  else {
    if ((*(int *)((long)param_1 + 0x114) == 0) && (**(char **)(param_1[7] + 0x20) == '>')) {
      param_1[0x27] = param_1[0x27] + 1;
      *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + 1;
      *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 1;
      if ((*param_1 != 0) &&
         ((*(int *)((long)param_1 + 0x14c) == 0 && (*(long *)(*param_1 + 0x98) != 0)))) {
        (**(code **)(*param_1 + 0x98))(param_1[1],local_20,0);
      }
      *(undefined4 *)(param_1 + 0x22) = local_18;
      return;
    }
    local_38 = (*(code *)_xmlMallocAtomic)((long)local_28);
    if (local_38 == 0) {
      FUN_1008c3d3c(param_1,0);
      *(undefined4 *)(param_1 + 0x22) = local_18;
      return;
    }
    local_24 = (uint)**(byte **)(param_1[7] + 0x20);
    if ((0xff < local_24) ||
       ((local_24 != 0x20 && (((local_24 < 9 || (10 < local_24)) && (local_24 != 0xd)))))) {
      FUN_1008c3ec0(param_1,0x41,"ParsePI: PI %s space expected\n",local_20,0);
    }
    FUN_1008c47ba(param_1);
    local_24 = FUN_1008c429b(param_1,&local_3c);
    while (0xff < (int)local_24) {
      if ((((int)local_24 < 0x100) || (0xd7ff < (int)local_24)) &&
         ((((int)local_24 < 0xe000 || (0xfffd < (int)local_24)) &&
          (((int)local_24 < 0x10000 || (0x10ffff < (int)local_24)))))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_1008c8f45;
LAB_1008c8f3b:
      if (local_24 == 0x3e) goto LAB_1008c8f45;
      lVar2 = local_38;
      if (local_28 <= local_2c + 5) {
        local_28 = local_28 << 1;
        local_10 = (*(code *)_xmlRealloc)(local_38,(long)local_28);
        lVar2 = local_10;
        if (local_10 == 0) {
          FUN_1008c3d3c(param_1,0);
          (*(code *)_xmlFree)(local_38);
          *(undefined4 *)(param_1 + 0x22) = local_18;
          return;
        }
      }
      local_38 = lVar2;
      local_14 = local_14 + 1;
      if (0x32 < local_14) {
        if ((*(int *)((long)param_1 + 0x1c4) == 0) &&
           (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa)) {
          _xmlParserInputGrow((xmlParserInputPtr)param_1[7],0xfa);
        }
        local_14 = 0;
      }
      if (local_3c == 1) {
        *(char *)(local_2c + local_38) = (char)local_24;
        local_2c = local_2c + 1;
      }
      else {
        iVar3 = _xmlCopyChar(local_3c,local_2c + local_38,local_24);
        local_2c = local_2c + iVar3;
      }
      if (**(char **)(param_1[7] + 0x20) == '\n') {
        *(int *)(param_1[7] + 0x34) = *(int *)(param_1[7] + 0x34) + 1;
        *(undefined4 *)(param_1[7] + 0x38) = 1;
      }
      else {
        *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 1;
      }
      *(undefined4 *)((long)param_1 + 0x114) = 0;
      *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + (long)local_3c;
      param_1[0x27] = param_1[0x27] + 1;
      local_24 = FUN_1008c429b(param_1,&local_3c);
      if (local_24 == 0) {
        if ((500 < *(long *)(param_1[7] + 0x20) - *(long *)(param_1[7] + 0x18)) &&
           (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 500)) {
          _xmlParserInputShrink(param_1[7]);
        }
        if ((*(int *)((long)param_1 + 0x1c4) == 0) &&
           (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa)) {
          _xmlParserInputGrow((xmlParserInputPtr)param_1[7],0xfa);
        }
        local_24 = FUN_1008c429b(param_1,&local_3c);
      }
    }
    if ((((int)local_24 < 9) || (10 < (int)local_24)) &&
       ((local_24 != 0xd && ((int)local_24 < 0x20)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1008c8f3b;
LAB_1008c8f45:
    *(undefined1 *)(local_2c + local_38) = 0;
    if (local_24 == 0x3e) {
      param_1[0x27] = param_1[0x27] + 1;
      *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + 1;
      *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 1;
      if (((*param_1 != 0) && (*(int *)((long)param_1 + 0x14c) == 0)) &&
         (*(long *)(*param_1 + 0x98) != 0)) {
        (**(code **)(*param_1 + 0x98))(param_1[1],local_20,local_38);
      }
    }
    else {
      FUN_1008c3ec0(param_1,0x2f,"ParsePI: PI %s never end ...\n",local_20,0);
    }
    (*(code *)_xmlFree)(local_38);
  }
  *(undefined4 *)(param_1 + 0x22) = local_18;
  return;
}

