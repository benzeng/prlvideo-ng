
void FUN_1000bcfb0(undefined8 param_1,long *param_2,uint param_3)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  long *local_28;
  long *local_20;
  
  if (0x1f < param_3) {
    param_2 = (long *)*param_2;
    piVar2 = (int *)param_2[2];
    if ((*piVar2 == 1) && (piVar2[1] == 0xe)) {
      if (piVar2[2] == 3) {
        if (param_2 != (long *)0x0) {
          LOCK();
          *(int *)(param_2 + 1) = (int)param_2[1] + 1;
          UNLOCK();
        }
        local_28 = param_2;
        FUN_1000bc8e0(param_1,&local_28);
        if (param_2 == (long *)0x0) {
          return;
        }
        LOCK();
        plVar1 = param_2 + 1;
        iVar3 = (int)*plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
      }
      else {
        if (piVar2[2] != 0) {
          return;
        }
        if (param_2 != (long *)0x0) {
          LOCK();
          *(int *)(param_2 + 1) = (int)param_2[1] + 1;
          UNLOCK();
        }
        local_20 = param_2;
        FUN_1000baf10(param_1,&local_20);
        if (param_2 == (long *)0x0) {
          return;
        }
        LOCK();
        plVar1 = param_2 + 1;
        iVar3 = (int)*plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
      }
      if (iVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001000bd051. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_2 + 0x10))(param_2);
        return;
      }
    }
  }
  return;
}

