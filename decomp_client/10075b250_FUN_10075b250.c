
void FUN_10075b250(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  void *pvVar2;
  
  if (DAT_1023109d8 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_100785b00(pvVar2);
    DAT_10226c7e0 = 1;
    DAT_1023109d8 = pvVar2;
  }
  pvVar2 = DAT_1023109d8;
  uVar1 = FUN_100786710(param_3);
  FUN_100785c90(pvVar2,param_2,uVar1);
  return;
}

