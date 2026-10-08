
void FUN_100abd390(long param_1,long *param_2,uint param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  undefined8 uVar6;
  
  if (param_3 < 4) {
    return;
  }
  lVar3 = *param_2;
  piVar5 = *(int **)(lVar3 + 0x10);
  iVar2 = *piVar5;
  if (iVar2 == 0x13) {
    if (lVar3 == 0) {
      piVar5 = (int *)0x0;
    }
    uVar6 = 0;
    if (*(long *)(param_1 + 0x38) != 0) {
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10);
    }
    FUN_100ac0dc0(uVar6,piVar5 + 1,(ulong)param_3 - 4);
    return;
  }
  if (iVar2 == 6) {
    uVar6 = 0;
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
    }
    FUN_100abf970(uVar6);
    plVar4 = *(long **)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
  }
  else {
    if (iVar2 != 4) {
      return;
    }
    if (*(char *)(param_1 + 0x51) == '\0') {
      return;
    }
    if (lVar3 == 0) {
      piVar5 = (int *)0x0;
    }
    FUN_100abd460(param_1,piVar5 + 1);
  }
  FUN_100abdc80(param_1);
  return;
}

