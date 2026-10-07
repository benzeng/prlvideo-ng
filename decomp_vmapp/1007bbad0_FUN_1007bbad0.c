
undefined8
FUN_1007bbad0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  long *local_38;
  
  QMutex::lock();
  bVar3 = true;
  if (*(int *)(param_2 + 0x40) == 1) {
    FUN_1007c2860(&local_38,param_2 + 0x90,param_3);
    if ((local_38 == (long *)0x0) || (local_38[2] == 0)) {
      FUN_100795ca0(param_1);
      if (local_38 == (long *)0x0) goto LAB_1007bbb8e;
    }
    else {
      bVar3 = false;
      QMutex::unlock();
      FUN_10079e8b0(param_1,local_38[2],param_4,param_5);
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
  else {
    FUN_100795ca0(param_1);
  }
LAB_1007bbb8e:
  if (bVar3) {
    QMutex::unlock();
  }
  return param_1;
}

