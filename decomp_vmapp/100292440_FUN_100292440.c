
int FUN_100292440(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  undefined4 uVar5;
  undefined1 local_68 [24];
  undefined4 local_50;
  int local_38;
  undefined1 local_34;
  
  local_50 = 8;
  local_34 = 0;
  local_38 = 0;
  FUN_100258290(param_1 + 0x48,local_68,*(undefined8 *)(param_1 + 0x40));
  if (local_38 < 0) {
    QMutex::lock();
    plVar2 = *(long **)(param_1 + 0x80);
    if (plVar2 == (long *)0x0) {
      QMutex::unlock();
    }
    else {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      QMutex::unlock();
    }
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
    local_38 = -0x7ffffbcc;
    if (cVar4 != '\0') {
      local_38 = 0;
      local_34 = 1;
      FUN_100258290(param_1 + 0x48,local_68,*(undefined8 *)(param_1 + 0x40));
    }
  }
  return local_38;
}

