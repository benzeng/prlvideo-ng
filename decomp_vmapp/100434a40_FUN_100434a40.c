
undefined4
FUN_100434a40(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  long *local_28;
  
  uVar3 = 1;
  FUN_100791610(&local_28,param_3,param_7);
  uVar3 = FUN_100433970(param_1,param_2,&local_28,1,param_5,param_6,uVar3);
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
  return uVar3;
}

