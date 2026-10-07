
undefined4 FUN_1004cedf0(long *param_1,undefined4 *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  long *local_30;
  
  FUN_1004cef90(&local_30,*param_1 + 0x48,*param_2);
  uVar3 = 0xf0000012;
  if (local_30 != (long *)0x0) {
    uVar3 = FUN_1004d86e0(local_30,param_2,param_3);
    LOCK();
    plVar1 = local_30 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_30 + 0x10))(local_30);
    }
  }
  return uVar3;
}

