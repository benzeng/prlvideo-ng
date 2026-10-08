
void FUN_100abd230(long param_1,long *param_2,uint param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *local_20;
  
  if (param_3 < 4) {
    return;
  }
  param_2 = (long *)*param_2;
  iVar2 = *(int *)param_2[2];
  if (iVar2 < 6) {
    if (iVar2 == 1) {
      iVar2 = ((int *)param_2[2])[1];
      if (iVar2 == 2) {
        *(undefined1 *)(param_1 + 0x50) = 0;
        return;
      }
      if (iVar2 != 1) {
        return;
      }
      *(undefined1 *)(param_1 + 0x50) = 1;
      return;
    }
    if (iVar2 != 4) {
      return;
    }
  }
  else if ((iVar2 != 6) && (iVar2 != 0x13)) {
    return;
  }
  if (param_2 != (long *)0x0) {
    LOCK();
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    UNLOCK();
  }
  local_20 = param_2;
  FUN_100abd300(param_1,&local_20);
  if (param_2 != (long *)0x0) {
    LOCK();
    plVar1 = param_2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000100abd2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x10))(param_2);
      return;
    }
  }
  return;
}

