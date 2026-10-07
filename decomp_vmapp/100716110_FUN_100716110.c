
void FUN_100716110(long param_1)

{
  void *pvVar1;
  
  if (param_1 != 0) {
    if (*(void **)(param_1 + 0x40) != (void *)0x0) {
      _free(*(void **)(param_1 + 0x40));
    }
    if (*(void **)(param_1 + 0x10) != (void *)0x0) {
      _free(*(void **)(param_1 + 0x10));
    }
    if (*(void **)(param_1 + 0x18) != (void *)0x0) {
      _free(*(void **)(param_1 + 0x18));
    }
    if (*(void **)(param_1 + 0x20) != (void *)0x0) {
      _free(*(void **)(param_1 + 0x20));
    }
    pvVar1 = *(void **)(param_1 + 0x48);
    if (pvVar1 != (void *)0x0) {
      if (*(long *)((long)pvVar1 + 0x30) != 0) {
        FUN_1007145a0();
      }
      if (*(long *)((long)pvVar1 + 0x20) != 0) {
        FUN_100723f60();
      }
      if (*(long *)((long)pvVar1 + 0x28) != 0) {
        FUN_100713fa0();
      }
      _free(pvVar1);
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
  }
  return;
}

