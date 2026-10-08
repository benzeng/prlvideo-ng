
void FUN_100ab06a0(long param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_100aaf5d0(pvVar3);
    LOCK();
    piVar1 = (int *)((long)pvVar3 + 0x78);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FUN_100aaf5b0(pvVar3);
      operator_delete(pvVar3);
      return;
    }
  }
  return;
}

