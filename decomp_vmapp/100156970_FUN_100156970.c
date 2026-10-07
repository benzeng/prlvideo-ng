
void FUN_100156970(long *param_1,undefined4 param_2)

{
  int iVar1;
  char *local_10;
  
  if (*(int *)((long)param_1 + 0x1c4) == 0) {
    if (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa) {
      FUN_100146394(param_1);
    }
  }
  if ((**(char **)(param_1[7] + 0x20) == '<') &&
     (*(char *)(*(long *)(param_1[7] + 0x20) + 1) == '/')) {
    param_1[0x27] = param_1[0x27] + 2;
    *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + 2;
    *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 2;
    if (**(char **)(param_1[7] + 0x20) == '%') {
      _xmlParserHandlePEReference(param_1);
    }
    if (**(char **)(param_1[7] + 0x20) == '\0') {
      iVar1 = _xmlParserInputGrow((xmlParserInputPtr)param_1[7],0xfa);
      if (iVar1 < 1) {
        _xmlPopInput(param_1);
      }
    }
    local_10 = (char *)FUN_100148a1f(param_1,param_1[0x24]);
    if (*(int *)((long)param_1 + 0x1c4) == 0) {
      if (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa) {
        FUN_100146394(param_1);
      }
    }
    _xmlSkipBlankChars(param_1);
    if (((((**(byte **)(param_1[7] + 0x20) < 9) || (10 < **(byte **)(param_1[7] + 0x20))) &&
         (**(char **)(param_1[7] + 0x20) != '\r')) && (**(byte **)(param_1[7] + 0x20) < 0x20)) ||
       (**(char **)(param_1[7] + 0x20) != '>')) {
      FUN_100143bf8(param_1,0x49,0);
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
      FUN_10014469f(param_1,0x4c,"Opening and ending tag mismatch: %s line %d and %s\n",
                    param_1[0x24],param_2,local_10);
    }
    if (((*param_1 != 0) && (*(long *)(*param_1 + 0x78) != 0)) &&
       (*(int *)((long)param_1 + 0x14c) == 0)) {
      (**(code **)(*param_1 + 0x78))(param_1[1],param_1[0x24]);
    }
    _namePop(param_1);
    FUN_10014626d(param_1);
  }
  else {
    FUN_100144217(param_1,0x4a,"xmlParseEndTag: \'</\' not found\n");
  }
  return;
}

