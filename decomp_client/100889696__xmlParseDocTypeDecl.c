
void _xmlParseDocTypeDecl(long *param_1)

{
  int iVar1;
  long local_20;
  long local_18;
  long local_10;
  
  local_18 = 0;
  local_20 = 0;
  local_10 = 0;
  param_1[0x27] = param_1[0x27] + 9;
  *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + 9;
  *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 9;
  if (**(char **)(param_1[7] + 0x20) == '%') {
    _xmlParserHandlePEReference(param_1);
  }
  if (**(char **)(param_1[7] + 0x20) == '\0') {
    iVar1 = _xmlParserInputGrow((xmlParserInputPtr)param_1[7],0xfa);
    if (iVar1 < 1) {
      _xmlPopInput(param_1);
    }
  }
  _xmlSkipBlankChars(param_1);
  local_18 = _xmlParseName(param_1);
  if (local_18 == 0) {
    FUN_100877b3f(param_1,0x44,"xmlParseDocTypeDecl : no DOCTYPE name !\n");
  }
  param_1[0x2b] = local_18;
  _xmlSkipBlankChars(param_1);
  local_10 = _xmlParseExternalID(param_1,&local_20,1);
  if ((local_10 != 0) || (local_20 != 0)) {
    *(undefined4 *)((long)param_1 + 0x8c) = 1;
  }
  param_1[0x2c] = local_10;
  param_1[0x2d] = local_20;
  _xmlSkipBlankChars(param_1);
  if (((*param_1 != 0) && (*(long *)*param_1 != 0)) && (*(int *)((long)param_1 + 0x14c) == 0)) {
    (**(code **)*param_1)(param_1[1],local_18,local_20,local_10);
  }
  if (**(char **)(param_1[7] + 0x20) != '[') {
    if (**(char **)(param_1[7] + 0x20) != '>') {
      FUN_100877520(param_1,0x3d,0);
    }
    _xmlNextChar(param_1);
  }
  return;
}

