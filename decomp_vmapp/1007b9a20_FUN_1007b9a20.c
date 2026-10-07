
undefined1 FUN_1007b9a20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 uVar3;
  long *local_30;
  
  QMutex::lock();
  FUN_1007c2860(&local_30,param_1 + 0x90,param_2);
  if (local_30 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    if (local_30[2] == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_10079cce0(local_30[2],param_3);
    }
    LOCK();
    plVar1 = local_30 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_30 + 0x10))(local_30);
    }
  }
  QMutex::unlock();
  return uVar3;
}

