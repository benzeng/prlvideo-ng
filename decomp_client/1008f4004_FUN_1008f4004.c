
void FUN_1008f4004(long *param_1,long param_2)

{
  undefined8 uVar1;
  int local_c;
  
  if (((param_2 == 0) && (*(char *)*param_1 == '/')) && (*(char *)(*param_1 + 1) != '1')) {
    FUN_1008f2239(param_1,0x76d,"warning: ChildSeq not starting by /1\n",0);
  }
  if (param_2 != 0) {
    uVar1 = _xmlXPathNewString(param_2);
    _valuePush(param_1,uVar1);
    (*(code *)_xmlFree)(param_2);
    _xmlXPathIdFunction(param_1,1);
    if ((int)param_1[2] != 0) {
      return;
    }
  }
  while (*(char *)*param_1 == '/') {
    local_c = 0;
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
    while ((0x2f < *(byte *)*param_1 && (*(byte *)*param_1 < 0x3a))) {
      local_c = local_c * 10 + (uint)*(byte *)*param_1 + -0x30;
      if (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
      }
    }
    FUN_1008f3715(param_1,local_c);
  }
  return;
}

