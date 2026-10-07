
undefined4 FUN_100790840(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  
  uVar4 = 0xffffffff;
  if ((((*param_1 != 0) && (lVar2 = *(long *)(*param_1 + 0x10), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x40) == 7)) && (*(int *)(lVar2 + 0x4c) == 5)) {
    plVar3 = *(long **)(lVar2 + 0x80);
    if (plVar3 != (long *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    uVar4 = 0xffffffff;
    if (*(int *)(lVar2 + 0xac) == 0x6c) {
      uVar4 = *(undefined4 *)(plVar3[2] + 0x5c);
    }
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  return uVar4;
}

