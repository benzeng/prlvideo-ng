
void FUN_1000a2040(long param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x48);
  FUN_100026980(pvVar1,param_1);
  *(void **)(param_1 + 0x10830) = pvVar1;
  pvVar1 = operator_new(8);
  FUN_10002dff0(pvVar1,param_1);
  *(void **)(param_1 + 0x10960) = pvVar1;
  pvVar1 = operator_new(8);
  FUN_10005b4b0(pvVar1,param_1);
  *(void **)(param_1 + 0x10980) = pvVar1;
  FUN_10002f440(param_1);
  pvVar1 = operator_new(1);
  FUN_1001064f0(pvVar1);
  *(void **)(param_1 + 0x1808) = pvVar1;
  FUN_10052f7f0();
  FUN_10052f390();
  return;
}

