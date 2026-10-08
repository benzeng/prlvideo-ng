
undefined1 FUN_100a93ae0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 uVar3;
  long *in_RAX;
  bool bVar4;
  long *local_38;
  
  local_38 = in_RAX;
  QMutex::lock();
  bVar4 = true;
  FUN_100a9ca20(&local_38,param_1 + 0x90,param_2);
  if (local_38 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    bVar4 = local_38[2] == 0;
    if (bVar4) {
      uVar3 = 0;
    }
    else {
      QMutex::unlock();
      uVar3 = FUN_100a77760(local_38[2],param_3);
    }
    LOCK();
    plVar1 = local_38 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_38 + 0x10))(local_38);
    }
  }
  if (bVar4) {
    QMutex::unlock();
  }
  return uVar3;
}

