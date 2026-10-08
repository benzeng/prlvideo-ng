
void FUN_1001d5140(undefined8 param_1,undefined4 *param_2)

{
  void *pvVar1;
  
  pvVar1 = DAT_102310920;
  if (param_2 != (undefined4 *)0x0) {
    if (DAT_102310920 == (void *)0x0) {
      pvVar1 = operator_new(0x50);
      FUN_1001d1080(pvVar1);
      DAT_10226c778 = 1;
      DAT_102310920 = pvVar1;
    }
    pvVar1 = DAT_102310920;
    *param_2 = *(undefined4 *)((long)DAT_102310920 + 0x10);
  }
  if (pvVar1 == (void *)0x0) {
    pvVar1 = operator_new(0x50);
    FUN_1001d1080(pvVar1);
    DAT_10226c778 = 1;
    DAT_102310920 = pvVar1;
  }
  FUN_1001d1200(pvVar1);
  return;
}

