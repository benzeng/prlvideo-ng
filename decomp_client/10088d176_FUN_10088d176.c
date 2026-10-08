
void FUN_10088d176(long *param_1,long param_2,undefined8 param_3,undefined4 param_4,int param_5,
                  int param_6)

{
  int iVar1;
  char *local_10;
  
  if ((*(int *)((long)param_1 + 0x1c4) == 0) &&
     (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa)) {
    FUN_100879cbc(param_1);
  }
  if ((**(char **)(param_1[7] + 0x20) != '<') ||
     (*(char *)(*(long *)(param_1[7] + 0x20) + 1) != '/')) {
    FUN_100877520(param_1,0x4a,0);
    return;
  }
  param_1[0x27] = param_1[0x27] + 2;
  *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + 2;
  *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 2;
  if (**(char **)(param_1[7] + 0x20) == '%') {
    _xmlParserHandlePEReference(param_1);
  }
  if ((**(char **)(param_1[7] + 0x20) == '\0') &&
     (iVar1 = _xmlParserInputGrow((xmlParserInputPtr)param_1[7],0xfa), iVar1 < 1)) {
    _xmlPopInput(param_1);
  }
  if ((param_6 < 1) ||
     (iVar1 = _xmlStrncmp(*(xmlChar **)(param_1[7] + 0x20),(xmlChar *)param_1[0x24],param_6),
     iVar1 != 0)) {
    if (param_2 == 0) {
      local_10 = (char *)FUN_10087c347(param_1,param_1[0x24]);
    }
    else {
      local_10 = (char *)FUN_10088af70(param_1,param_1[0x24],param_2);
    }
  }
  else {
    if (*(char *)(*(long *)(param_1[7] + 0x20) + (long)param_6) == '>') {
      *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + (long)param_6 + 1;
      goto LAB_10088d4f8;
    }
    *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + (long)param_6;
    local_10 = (char *)0x1;
  }
  if ((*(int *)((long)param_1 + 0x1c4) == 0) &&
     (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa)) {
    FUN_100879cbc(param_1);
  }
  _xmlSkipBlankChars(param_1);
  if (((((**(byte **)(param_1[7] + 0x20) < 9) || (10 < **(byte **)(param_1[7] + 0x20))) &&
       (**(char **)(param_1[7] + 0x20) != '\r')) && (**(byte **)(param_1[7] + 0x20) < 0x20)) ||
     (**(char **)(param_1[7] + 0x20) != '>')) {
    FUN_100877520(param_1,0x49,0);
  }
  else {
    *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 1;
    *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + 1;
    param_1[0x27] = param_1[0x27] + 1;
    if (**(char **)(param_1[7] + 0x20) == '\0') {
      _xmlParserInputGrow((xmlParserInputPtr)param_1[7],0xfa);
    }
  }
  if (local_10 != (char *)0x1) {
    if (local_10 == (char *)0x0) {
      local_10 = "unparseable";
    }
    FUN_100877fc7(param_1,0x4c,"Opening and ending tag mismatch: %s line %d and %s\n",param_1[0x24],
                  param_4,local_10);
  }
LAB_10088d4f8:
  if (((*param_1 != 0) && (*(long *)(*param_1 + 0xf0) != 0)) &&
     (*(int *)((long)param_1 + 0x14c) == 0)) {
    (**(code **)(*param_1 + 0xf0))(param_1[1],param_1[0x24],param_2,param_3);
  }
  FUN_100879b95(param_1);
  if (param_5 != 0) {
    FUN_100878f14(param_1,param_5);
  }
  return;
}

