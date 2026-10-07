
void FUN_10033dd20(undefined4 *param_1,undefined4 param_2,uint param_3,void *param_4)

{
  void *pvVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  pvVar1 = operator_new__((ulong)param_3 << 2);
  *(void **)(param_1 + 2) = pvVar1;
  if (param_3 != 0) {
    _memcpy(pvVar1,param_4,(ulong)(param_3 - 1) * 4 + 4);
  }
  return;
}

