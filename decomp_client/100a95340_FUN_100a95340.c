
bool FUN_100a95340(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *in_RAX;
  bool bVar3;
  bool bVar4;
  long *local_38;
  
  local_38 = in_RAX;
  QMutex::lock();
  bVar4 = true;
  FUN_100a9ca20(&local_38,param_1 + 0x90,param_2);
  if (local_38 == (long *)0x0) {
    bVar3 = false;
  }
  else {
    bVar4 = local_38[2] == 0;
    if (!bVar4) {
      QMutex::unlock();
      FUN_100a77260(local_38[2]);
    }
    bVar3 = !bVar4;
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
  return bVar3;
}

