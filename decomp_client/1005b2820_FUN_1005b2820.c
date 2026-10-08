
void FUN_1005b2820(long param_1,int param_2)

{
  int *piVar1;
  void *pvVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  
  piVar1 = *(int **)(param_1 + 0x38);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (pvVar2 = *(void **)(param_1 + 0x38), pvVar2 != (void *)0x0)) {
      operator_delete(pvVar2);
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  uVar3 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  lVar4 = FUN_1005b87b0(uVar3);
  uVar5 = 0;
  if (lVar4 != 0) {
    uVar5 = (param_2 >> 0x1f) + 2U & 0xfffffffe;
  }
  uVar3 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  FUN_1005b8760(uVar3,uVar5);
  FUN_10083fee0(param_1,uVar5);
  return;
}

