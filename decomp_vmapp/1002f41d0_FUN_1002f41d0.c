
void FUN_1002f41d0(long *param_1)

{
  long lVar1;
  
  (**(code **)(*param_1 + 0x20))();
  lVar1 = 0;
  do {
    if ((long *)param_1[lVar1 + 6] != (long *)0x0) {
      (**(code **)(*(long *)param_1[lVar1 + 6] + 0x48))();
      (**(code **)(*(long *)param_1[lVar1 + 6] + 0x18))();
      param_1[lVar1 + 6] = 0;
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x100);
  if (*(int *)(param_1[1] + 0x1c) != 0) {
    if (0 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s] About to do hard reset",param_1[1] + 0x838);
    }
    if ((long *)param_1[5] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001002f426c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1[5] + 200))();
      return;
    }
  }
  return;
}

