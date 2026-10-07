
void FUN_10036b3b0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_100bbc080;
  (*DAT_1011c5b10)(2,param_1 + 0x4b);
  (*DAT_1011c5b88)(1,(long)param_1 + 0x234);
  pvVar1 = (void *)param_1[0x48];
  if (pvVar1 != (void *)0x0) {
    if ((void *)param_1[0x49] != pvVar1) {
      param_1[0x49] = pvVar1;
    }
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}

