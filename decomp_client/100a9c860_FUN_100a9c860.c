
undefined1 FUN_100a9c860(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined1 uVar4;
  
  if (*(int *)(param_1 + 0x30) == 2) {
    QMutex::lock();
    plVar1 = *(long **)(param_1 + 0xe8);
    if (plVar1 == (long *)0x0) {
      QMutex::unlock();
      uVar4 = 1;
    }
    else {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
      QMutex::unlock();
      plVar2 = (long *)plVar1[2];
      uVar4 = 1;
      if (plVar2 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar2 + 0x10))
                          (plVar2,*(undefined8 *)(param_1 + 0x28),param_3,param_4);
      }
      LOCK();
      plVar2 = plVar1 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

