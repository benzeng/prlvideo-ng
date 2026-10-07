
undefined4
FUN_1000a0ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             long *param_5)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  long *local_38;
  
  QMutex::lock();
  lVar2 = DAT_1011cc7e0;
  if (DAT_1011cc7e0 == 0) {
    QMutex::unlock();
    uVar3 = 0x80034001;
  }
  else {
    DAT_1011cc7e8 = DAT_1011cc7e8 + 1;
    QMutex::unlock();
    local_38 = (long *)*param_5;
    if (local_38 != (long *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    uVar3 = FUN_100484260(lVar2,param_2,param_3,param_4,&local_38);
    if (local_38 != (long *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
    FUN_10003b2b0(&DAT_1011cc7d0);
  }
  return uVar3;
}

