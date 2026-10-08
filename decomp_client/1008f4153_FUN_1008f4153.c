
void FUN_1008f4153(long *param_1)

{
  long lVar1;
  
  if (param_1[6] == 0) {
    lVar1 = (*(code *)_xmlMalloc)(0x50);
    param_1[6] = lVar1;
    if (param_1[6] == 0) {
      FUN_1008f21a1("allocating evaluation context");
      return;
    }
    *(undefined4 *)(param_1 + 5) = 0;
    *(undefined4 *)((long)param_1 + 0x2c) = 10;
    param_1[4] = 0;
  }
  while ((*(char *)*param_1 == ' ' ||
         (((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) || (*(char *)*param_1 == '\r'))))) {
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
  }
  if (*(char *)*param_1 == '/') {
    _xmlXPathRoot(param_1);
    FUN_1008f4004(param_1,0);
  }
  else {
    lVar1 = _xmlXPathParseName(param_1);
    if (lVar1 == 0) {
      _xmlXPathErr(param_1,7);
      return;
    }
    if (*(char *)*param_1 == '(') {
      FUN_1008f3e8c(param_1,lVar1);
      return;
    }
    FUN_1008f4004(param_1,lVar1);
  }
  while (((*(char *)*param_1 == ' ' || ((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)))) ||
         (*(char *)*param_1 == '\r'))) {
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
  }
  if (*(char *)*param_1 != '\0') {
    _xmlXPathErr(param_1,7);
  }
  return;
}

