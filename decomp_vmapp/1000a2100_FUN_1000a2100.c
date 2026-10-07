
void FUN_1000a2100(long param_1)

{
  void *pvVar1;
  
  FUN_10052f420();
  FUN_10052f880();
  FUN_10002f4b0();
  pvVar1 = *(void **)(param_1 + 0x10960);
  if (pvVar1 != (void *)0x0) {
    FUN_10002e050(pvVar1);
    operator_delete(pvVar1);
  }
  *(undefined8 *)(param_1 + 0x10960) = 0;
  if (*(long **)(param_1 + 0x10830) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10830) + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x10830) = 0;
  pvVar1 = *(void **)(param_1 + 0x1808);
  if (pvVar1 != (void *)0x0) {
    FUN_100106570(pvVar1);
    operator_delete(pvVar1);
  }
  *(undefined8 *)(param_1 + 0x1808) = 0;
  pvVar1 = *(void **)(param_1 + 0x10980);
  if (pvVar1 != (void *)0x0) {
    FUN_10005b510(pvVar1);
    operator_delete(pvVar1);
  }
  *(undefined8 *)(param_1 + 0x10980) = 0;
  return;
}

