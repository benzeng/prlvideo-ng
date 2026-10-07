
long * FUN_1004cf050(long *param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  undefined4 local_2c;
  
  local_2c = param_3;
  QMutex::lock();
  plVar3 = (long *)(param_2 + 0x20);
  lVar2 = FUN_1004d5060(plVar3,&local_2c);
  if (lVar2 == *plVar3) {
    bVar4 = true;
    *param_1 = 0;
  }
  else {
    plVar1 = *(long **)(lVar2 + 0x10);
    if (plVar1 != (long *)0x0) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    FUN_1004d5130(plVar3,lVar2);
    *(long *)(DAT_1011cc978 + 0xf0) = *(long *)(DAT_1011cc978 + 0xf0) + -1;
    bVar4 = false;
    QMutex::unlock();
    *param_1 = (long)plVar1;
    if (plVar1 != (long *)0x0) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
      LOCK();
      plVar3 = plVar1 + 1;
      lVar2 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (bVar4) {
    QMutex::unlock();
  }
  return param_1;
}

