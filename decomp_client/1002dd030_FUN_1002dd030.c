
undefined8 FUN_1002dd030(long param_1)

{
  long lVar1;
  int *piVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x18);
  piVar2 = *(int **)(lVar1 + 0x70);
  uVar4 = 0;
  if (piVar2 != (int *)0x0) {
    uVar4 = 0;
    if (piVar2[1] != 0) {
      uVar4 = *(undefined8 *)(lVar1 + 0x78);
    }
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (pvVar3 = *(void **)(lVar1 + 0x70), pvVar3 != (void *)0x0)) {
      operator_delete(pvVar3);
    }
    *(undefined8 *)(lVar1 + 0x78) = 0;
    *(undefined8 *)(lVar1 + 0x70) = 0;
  }
  return uVar4;
}

