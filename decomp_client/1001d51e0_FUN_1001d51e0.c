
void FUN_1001d51e0(undefined8 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  void *pvVar1;
  
  if (DAT_102310920 == (void *)0x0) {
    pvVar1 = operator_new(0x50);
    FUN_1001d1080(pvVar1);
    DAT_10226c778 = 1;
    DAT_102310920 = pvVar1;
  }
  FUN_1001d12b0(DAT_102310920,param_2,param_3,param_4);
  return;
}

