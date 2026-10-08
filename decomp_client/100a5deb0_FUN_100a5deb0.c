
void FUN_100a5deb0(undefined8 param_1,long *param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *local_20;
  
  if (7 < param_3) {
    param_2 = (long *)*param_2;
    uVar2 = ((uint *)param_2[2])[1];
    if (((uVar2 <= param_3) && (7 < uVar2)) && ((*(uint *)param_2[2] | 2) == 3)) {
      if (param_2 != (long *)0x0) {
        LOCK();
        *(int *)(param_2 + 1) = (int)param_2[1] + 1;
        UNLOCK();
      }
      local_20 = param_2;
      FUN_100a5df60(param_1,&local_20);
      if (param_2 != (long *)0x0) {
        LOCK();
        plVar1 = param_2 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000100a5df1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_2 + 0x10))(param_2);
          return;
        }
      }
    }
  }
  return;
}

