
undefined4 FUN_1000a1680(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  long *local_30;
  
  QMutex::lock();
  lVar2 = DAT_1011cc7e0;
  if (DAT_1011cc7e0 == 0) {
    QMutex::unlock();
    uVar3 = 0x80034001;
  }
  else {
    DAT_1011cc7e8 = DAT_1011cc7e8 + 1;
    QMutex::unlock();
    local_30 = (long *)*param_3;
    if (local_30 != (long *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    uVar3 = FUN_100493130(lVar2,param_2,&local_30);
    if (local_30 != (long *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_30 + 0x10))();
      }
    }
    FUN_10003b2b0(&DAT_1011cc7d0);
  }
  return uVar3;
}

