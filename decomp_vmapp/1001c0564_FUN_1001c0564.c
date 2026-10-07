
void FUN_1001c0564(long *param_1,long param_2)

{
  int iVar1;
  xmlXPathObjectPtr obj;
  long local_38;
  
  local_38 = param_2;
  if (param_2 == 0) {
    local_38 = _xmlXPathParseName(param_1);
  }
  if (local_38 == 0) {
    _xmlXPathErr(param_1,7);
    return;
  }
  do {
    if (local_38 == 0) {
      return;
    }
    FUN_1001bfee2(param_1,local_38);
    if ((int)param_1[2] != 0) {
      return;
    }
    if (param_1[4] != 0) {
      if (*(int *)param_1[4] == 1) {
        if (*(int **)(param_1[4] + 8) != (int *)0x0) {
          iVar1 = **(int **)(param_1[4] + 8);
          goto joined_r0x0001001c063c;
        }
      }
      else if ((*(int *)param_1[4] == 7) && (*(int **)(param_1[4] + 0x28) != (int *)0x0)) {
        iVar1 = **(int **)(param_1[4] + 0x28);
joined_r0x0001001c063c:
        if (0 < iVar1) {
          return;
        }
      }
      while (obj = (xmlXPathObjectPtr)_valuePop(param_1), obj != (xmlXPathObjectPtr)0x0) {
        _xmlXPathFreeObject(obj);
      }
    }
    while ((*(char *)*param_1 == ' ' ||
           (((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) || (*(char *)*param_1 == '\r')))))
    {
      if (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
      }
    }
    local_38 = _xmlXPathParseName(param_1);
  } while( true );
}

