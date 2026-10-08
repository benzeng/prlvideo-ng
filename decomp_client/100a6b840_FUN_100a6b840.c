
void FUN_100a6b840(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  if (*(code **)(param_1 + 0x70) != (code *)0x0) {
    (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x78));
  }
  if ((1 < *(uint *)(param_1 + 0x4c)) && (uVar4 = *(uint *)(param_1 + 0x4c) - 1, uVar4 != 0)) {
    uVar5 = (ulong)uVar4;
    do {
      plVar2 = *(long **)(param_1 + 0x80 + uVar5 * 8);
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      uVar5 = uVar5 - 1;
    } while ((int)uVar5 != 0);
  }
  plVar2 = *(long **)(param_1 + 0x80);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  return;
}

