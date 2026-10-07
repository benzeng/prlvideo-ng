
undefined1 FUN_10079cab0(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined1 uVar4;
  
  if (*(int *)(param_1 + 0x68) == 1) {
    lVar3 = QThread::currentThread();
    if (lVar3 == param_1) {
      QMutex::lock();
      if ((*(int *)(param_1 + 0xa8) == 3) || (*(int *)(param_1 + 0xa0) == 1)) {
        if (*(long *)(param_1 + 0x308) == 0) {
          uVar4 = 0;
        }
        else if (*(long *)(*(long *)(param_1 + 0x308) + 0x10) == 0) {
          uVar4 = 0;
        }
        else {
          lVar3 = *(long *)(param_1 + 800);
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          plVar2 = (long *)*param_2;
          *param_2 = lVar3;
          uVar4 = 1;
          if (plVar2 != (long *)0x0) {
            LOCK();
            plVar1 = plVar2 + 1;
            lVar3 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)(*plVar2 + 0x10))();
            }
          }
        }
      }
      else {
        uVar4 = 0;
      }
      QMutex::unlock();
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

