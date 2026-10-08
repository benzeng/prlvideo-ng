
void FUN_100272080(long *param_1,undefined8 param_2,int param_3)

{
  void *pvVar1;
  
  FUN_100272010();
  if (DAT_102310a00 == (void *)0x0) {
    pvVar1 = operator_new(0x30);
    FUN_1007c99f0(pvVar1);
    DAT_102271eab = 1;
    DAT_102310a00 = pvVar1;
  }
  FUN_1007c9b10(DAT_102310a00,param_3 == 1);
  if (DAT_102310a00 == (void *)0x0) {
    pvVar1 = operator_new(0x30);
    FUN_1007c99f0(pvVar1);
    DAT_102271eab = 1;
    DAT_102310a00 = pvVar1;
  }
  FUN_1007ca550(DAT_102310a00);
                    /* WARNING: Could not recover jumptable at 0x000100272120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

