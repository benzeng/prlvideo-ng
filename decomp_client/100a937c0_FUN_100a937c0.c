
undefined8 * FUN_100a937c0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *in_RAX;
  bool bVar3;
  long *local_38;
  
  local_38 = in_RAX;
  QMutex::lock();
  bVar3 = true;
  FUN_100a9ca20(&local_38,param_2 + 0x90,param_3);
  if (local_38 == (long *)0x0) {
    *param_1 = PTR_shared_null_1021e1288;
  }
  else {
    bVar3 = local_38[2] == 0;
    if (bVar3) {
      *param_1 = PTR_shared_null_1021e1288;
    }
    else {
      QMutex::unlock();
      FUN_100a775d0(param_1,local_38[2]);
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
  if (bVar3) {
    QMutex::unlock();
  }
  return param_1;
}

