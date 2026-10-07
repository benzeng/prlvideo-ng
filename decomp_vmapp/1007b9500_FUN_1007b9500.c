
undefined4 FUN_1007b9500(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  long *in_RAX;
  bool bVar4;
  long *local_38;
  
  local_38 = in_RAX;
  QMutex::lock();
  bVar4 = true;
  FUN_1007c2860(&local_38,param_1 + 0x90,param_2);
  uVar3 = 0;
  if (local_38 != (long *)0x0) {
    uVar3 = 0;
    lVar2 = local_38[2];
    if (lVar2 != 0) {
      QMutex::unlock();
      uVar3 = FUN_10079ca90(local_38[2]);
    }
    bVar4 = lVar2 == 0;
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

