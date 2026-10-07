
undefined1 FUN_1007cd590(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 uVar3;
  long *local_20;
  
  FUN_10078f4f0(&local_20,9,0,&DAT_1011ccb98,1);
  uVar3 = FUN_1007cd270(param_1,&local_20,0);
  if (local_20 != (long *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_20 + 0x10))();
    }
  }
  return uVar3;
}

