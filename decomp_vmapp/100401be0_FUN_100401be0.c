
void FUN_100401be0(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x160);
  if (pvVar1 != (void *)0x0) {
    FUN_100405d70(pvVar1);
    operator_delete(pvVar1);
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_1003fcbb0();
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}

