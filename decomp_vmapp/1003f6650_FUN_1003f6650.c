
void FUN_1003f6650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *local_40;
  long *local_38;
  
  FUN_1003f6300(&local_38,param_1,param_2);
  plVar2 = local_38;
  if ((local_38 == (long *)0x0) || (local_38[2] == 0)) {
    FUN_1003f6160(&local_40,param_1,param_2);
    if (local_40 != (long *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    local_38 = local_40;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    plVar2 = (long *)0x0;
    lVar3 = 0;
    if (local_40 == (long *)0x0) goto LAB_1003f6705;
    LOCK();
    plVar2 = local_40 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    plVar2 = local_40;
    if ((int)lVar3 == 1) {
      (**(code **)(*local_40 + 0x10))(local_40);
    }
  }
  lVar3 = plVar2[2];
LAB_1003f6705:
  FUN_1003f7f40(lVar3,param_3,param_4);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001003f6738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}

