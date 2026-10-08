
void FUN_1005b2dd0(long param_1,int param_2)

{
  int *piVar1;
  void *pvVar2;
  undefined8 uVar3;
  
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
  if ((param_2 < 0) && (param_2 != -0x7ffffd8b)) {
    *(int *)(param_1 + 0x7c) = param_2;
    FUN_1005b2e70(param_1);
  }
  else {
    uVar3 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
    FUN_1005b8760(uVar3,2);
    FUN_10083fee0(param_1,2);
  }
  return;
}

