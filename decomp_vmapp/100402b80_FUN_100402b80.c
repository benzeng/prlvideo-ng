
void FUN_100402b80(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  int *piVar3;
  
  lVar2 = *(long *)(param_2 + 0xa0);
  if (lVar2 != 0) {
    if ((*(byte *)(lVar2 + 8) & 1) != 0) {
      *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + *(int *)(lVar2 + 0x50);
    }
    *(undefined4 *)(param_2 + 0xac) = 0;
    LOCK();
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
    UNLOCK();
    if (*(long *)(param_1 + 0x160) == 0) {
      (**(code **)(**(long **)(param_1 + 0x38) + 0x100))
                (*(long **)(param_1 + 0x38),*(undefined8 *)(param_2 + 0xa0));
    }
    else {
      FUN_100405340(*(long *)(param_1 + 0x160),*(undefined8 *)(param_2 + 0xa0));
    }
    *(undefined8 *)(param_2 + 0xa0) = 0;
  }
  piVar3 = (int *)(param_2 + 0x98);
  LOCK();
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (*piVar3 == 0) {
    FUN_1003fee10(param_2);
  }
  if (*(int *)(param_2 + 0xac) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x98) + 0xf0);
    *plVar1 = *plVar1 + 1;
  }
  return;
}

