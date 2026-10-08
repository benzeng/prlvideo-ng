
void FUN_100aa7e10(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *local_30;
  long *local_28;
  
  lVar2 = 0;
  FUN_100a68d20(&local_28,0xb,0,&DAT_1023117c8,1);
  if (local_28 != (long *)0x0) {
    lVar2 = local_28[2];
  }
  FUN_100a6ab60(lVar2,param_2);
  FUN_100aa4070(&local_30,param_1,&local_28,1);
  if (local_30 != (long *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  if (local_28 != (long *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  return;
}

