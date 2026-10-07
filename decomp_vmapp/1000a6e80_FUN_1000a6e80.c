
void FUN_1000a6e80(long param_1,undefined8 param_2,undefined4 param_3)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x48);
  FUN_100762470(pvVar1);
  *(void **)(param_1 + 0x1910) = pvVar1;
  FUN_100762530(pvVar1,param_2,param_3);
  FUN_100762800(*(undefined8 *)(param_1 + 0x1910),*(undefined8 *)(param_1 + 0xb78));
  DAT_1011ccc18 = FUN_1000b2c10;
  return;
}

