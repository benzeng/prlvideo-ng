
void FUN_1000d22a0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((*(long *)(param_1 + 0x368) != 0) && (*(long *)(*(long *)(param_1 + 0x368) + 0x10) != 0)) {
    uVar4 = 0;
    FUN_1008e3970("","vm",0,"Waiting the screenshot file to be written.");
    if (*(long *)(param_1 + 0x368) != 0) {
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x368) + 0x10);
    }
    FUN_1000e95b0(uVar4);
    plVar2 = *(long **)(param_1 + 0x368);
    *(undefined8 *)(param_1 + 0x368) = 0;
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
  }
  FUN_1000d68b0(param_1 + 0x2b8);
  QFile::remove((QString *)(param_1 + 0x1d0));
  QFile::remove((QString *)(param_1 + 0x1d8));
  QFile::remove((QString *)(param_1 + 0x1e0));
  if (*(long *)(*(long *)(param_1 + 0x2b0) + 0x1940) != 0) {
    FUN_10008bf70();
    return;
  }
  return;
}

