
undefined4
FUN_100ccd670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  long *plVar1;
  long lVar2;
  undefined1 local_29;
  long *local_28;
  
  FUN_100ccd530(&local_28,param_1,param_2,param_3);
  if (local_28 != (long *)0x0) {
    if (local_28[2] != 0) {
      param_5 = QString::toInt((bool *)(local_28[2] + 8),(int)&local_29);
    }
    LOCK();
    plVar1 = local_28 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_28 + 0x10))(local_28);
    }
  }
  return param_5;
}

