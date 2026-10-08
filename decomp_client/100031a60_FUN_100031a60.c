
void FUN_100031a60(long param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x20);
  FUN_10002cd90(pvVar1,param_1);
  *(void **)(param_1 + 0x10) = pvVar1;
  return;
}

