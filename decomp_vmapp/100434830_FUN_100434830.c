
void FUN_100434830(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long lVar2;
  long *local_30;
  
  FUN_100791380(&local_30,param_2,0,param_3,param_4,param_5,1);
  FUN_1004348e0(param_1,&local_30,param_6);
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
  return;
}

