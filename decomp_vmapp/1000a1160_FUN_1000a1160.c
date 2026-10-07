
undefined4 FUN_1000a1160(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  long *local_28;
  
  QMutex::lock();
  lVar2 = DAT_1011cc7e0;
  if (DAT_1011cc7e0 == 0) {
    QMutex::unlock();
    uVar3 = 0x80034001;
  }
  else {
    DAT_1011cc7e8 = DAT_1011cc7e8 + 1;
    QMutex::unlock();
    local_28 = (long *)*param_2;
    if (local_28 != (long *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
    }
    uVar3 = FUN_100488690(lVar2,&local_28);
    if (local_28 != (long *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
    FUN_10003b2b0(&DAT_1011cc7d0);
  }
  return uVar3;
}

