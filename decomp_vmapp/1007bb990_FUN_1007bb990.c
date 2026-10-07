
undefined8 FUN_1007bb990(undefined8 param_1,long param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  long *local_38;
  
  QMutex::lock();
  bVar4 = true;
  if (*(int *)(param_2 + 0x40) == 1) {
    FUN_1007c2860(&local_38,param_2 + 0x90,param_3);
    if ((local_38 == (long *)0x0) || (local_38[2] == 0)) {
      FUN_100795ca0(param_1);
      if (local_38 == (long *)0x0) goto LAB_1007bba5f;
    }
    else {
      bVar4 = false;
      QMutex::unlock();
      uVar3 = 0;
      if (*param_4 != 0) {
        uVar3 = *(undefined8 *)(*param_4 + 0x10);
      }
      FUN_100792640(uVar3);
      FUN_10079e810(param_1,local_38[2],param_4);
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
LAB_1007bba5f:
  if (bVar4) {
    QMutex::unlock();
  }
  return param_1;
}

