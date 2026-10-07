
undefined8 FUN_1002719c0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  
  QMutex::lock();
  QMutex::lock();
  plVar2 = *(long **)(param_1 + 0x80);
  if (plVar2 != (long *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  QMutex::unlock();
  uVar4 = CVmDevice::getIndex();
  FUN_1008e3970("","LocalDevices",0,"[Floppy%d] Disconnecting",uVar4);
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
  FUN_10025b310(param_1 + 0x68,0);
  if (*(int *)(DAT_1011c3698 + 0x1948) == 2) {
    FUN_1004074c0(param_1 + 0xd8,*(undefined8 *)(param_1 + 0x90));
  }
  else if (*(long **)(param_1 + 0x90) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x90) + 8))();
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  QMutex::unlock();
  return 0;
}

