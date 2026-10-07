
undefined4
FUN_100519800(long param_1,undefined8 param_2,long param_3,undefined4 param_4,undefined8 param_5,
             undefined8 param_6)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  long *local_38;
  
  plVar4 = operator_new(0x18);
  *(undefined4 *)(plVar4 + 1) = 1;
  plVar4[2] = param_3;
  *plVar4 = (long)&PTR_FUN_10111d538;
  local_38 = plVar4;
  uVar3 = FUN_100519910(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined4 *)(param_1 + 0x18),
                        &local_38,param_4,param_5,param_6,0,0,1);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  return uVar3;
}

