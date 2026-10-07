
undefined8 * FUN_100594a40(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  
  if (*(long **)(param_2 + 0x28) != (long *)0x0) {
    plVar2 = *(long **)(param_2 + 0x28);
    plVar5 = (long *)(param_2 + 0x28);
    do {
      while (plVar4 = plVar2, iVar3 = FUN_1007ea6f0(plVar4 + 4,param_3), -1 < iVar3) {
        plVar5 = plVar4;
        plVar2 = (long *)*plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_100594aa0;
      }
      plVar2 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
LAB_100594aa0:
    if ((plVar5 != (long *)(param_2 + 0x28)) &&
       (iVar3 = FUN_1007ea6f0(param_3,plVar5 + 4), -1 < iVar3)) {
      piVar1 = (int *)plVar5[7];
      *param_1 = piVar1;
      if (*piVar1 + 1U < 2) {
        return param_1;
      }
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      return param_1;
    }
  }
  *param_1 = PTR_shared_null_100ba20d0;
  return param_1;
}

