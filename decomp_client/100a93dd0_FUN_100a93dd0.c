
undefined1 FUN_100a93dd0(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 uVar2;
  long lVar3;
  bool bVar4;
  long *local_38;
  
  QMutex::lock();
  bVar4 = true;
  lVar3 = QThread::currentThread();
  if ((lVar3 == param_1) || (*(int *)(param_1 + 0x40) == 1)) {
    FUN_100a9ca20(&local_38,param_1 + 0x90,param_2);
    if (local_38 == (long *)0x0) {
      uVar2 = 0;
    }
    else {
      bVar4 = local_38[2] == 0;
      if (bVar4) {
        uVar2 = 0;
      }
      else {
        QMutex::unlock();
        uVar2 = FUN_100a78b70(local_38[2],param_3,param_4);
      }
      LOCK();
      plVar1 = local_38 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  else {
    uVar2 = 0;
  }
  if (bVar4) {
    QMutex::unlock();
  }
  return uVar2;
}

