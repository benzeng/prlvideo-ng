
void FUN_10075b1e0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  void *pvVar1;
  
  if (DAT_1023109d8 == (void *)0x0) {
    pvVar1 = operator_new(0x18);
    FUN_100785b00(pvVar1);
    DAT_10226c7e0 = 1;
    DAT_1023109d8 = pvVar1;
  }
  FUN_100785c90(DAT_1023109d8,param_2,param_3);
  return;
}

