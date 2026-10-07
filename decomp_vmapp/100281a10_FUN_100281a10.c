
undefined8 FUN_100281a10(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  bool bVar9;
  
  QMutex::lock();
  uVar7 = param_1 + 0x108U | 1;
  uVar6 = 0;
  cVar4 = FUN_10026b7f0(param_1 + 0x138,0,1);
  uVar8 = uVar7;
  if (cVar4 == '\0') {
    uVar8 = param_1 + 0x108U & 0xfffffffffffffffe;
    QMutex::unlock();
    QMutex::lock();
    plVar2 = *(long **)(param_1 + 0x18);
    if (plVar2 != (long *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    QMutex::unlock();
    uVar5 = CVmDevice::getIndex();
    cVar4 = FUN_1003f8ed0(uVar5);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    uVar6 = 0x80000434;
    if (cVar4 != '\0') {
      uVar6 = 0;
      bVar9 = uVar8 != 0;
      uVar8 = 0;
      if (bVar9) {
        QMutex::lock();
        uVar8 = uVar7;
      }
      FUN_10026b7f0(param_1 + 0x138,1,1);
    }
  }
  if ((uVar8 & 1) != 0) {
    QMutex::unlock();
  }
  return uVar6;
}

