
void FUN_100b94ef0(long param_1)

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
        FUN_100b93380();
      }
      if (*(long *)((long)pvVar1 + 0x20) != 0) {
        FUN_100ba2d40();
      }
      if (*(long *)((long)pvVar1 + 0x28) != 0) {
        FUN_100b92d80();
      }
      _free(pvVar1);
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
  }
  return;
}

