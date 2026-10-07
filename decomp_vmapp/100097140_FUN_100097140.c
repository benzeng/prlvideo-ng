
undefined8 FUN_100097140(long param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  
  QMutex::lock();
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 == (long *)0x0) {
    QMutex::unlock();
    plVar4 = (long *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
    UNLOCK();
    QMutex::unlock();
    plVar4 = (long *)plVar1[2];
  }
  uVar3 = (**(code **)(*plVar4 + 0x68))();
  if ((0xf < uVar3) || ((0xb000U >> (uVar3 & 0x1f) & 1) == 0)) {
    FUN_10025ab50(param_1);
  }
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar4 = plVar1 + 1;
    lVar2 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  return 0;
}

