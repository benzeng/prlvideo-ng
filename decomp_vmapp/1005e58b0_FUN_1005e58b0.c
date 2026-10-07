
undefined8 FUN_1005e58b0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  QMutex::lock();
  (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined1 *)(param_1 + 0xc) = 0;
  plVar2 = (long *)param_1[0xd];
  param_1[0xd] = 0;
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
  FUN_1005f29c0(param_1 + 4,param_1[5]);
  param_1[6] = 0;
  param_1[4] = (long)(param_1 + 5);
  param_1[5] = 0;
  QMutex::unlock();
  return 0;
}

