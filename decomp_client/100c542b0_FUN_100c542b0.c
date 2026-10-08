
long FUN_100c542b0(long *param_1,int param_2,uint param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 == (long *)0x0) {
    uVar2 = 0x43;
    uVar3 = 0x127;
LAB_100c542e4:
    FUN_100c62ee0(0x25,0x6e,uVar2,"dso_lib.c",uVar3);
    return -1;
  }
  if (param_2 == 3) {
    *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) | param_3;
  }
  else {
    if (param_2 != 2) {
      if (param_2 == 1) {
        return (long)*(int *)((long)param_1 + 0x14);
      }
      if ((*param_1 != 0) &&
         (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x28), UNRECOVERED_JUMPTABLE != (code *)0x0)
         ) {
                    /* WARNING: Could not recover jumptable at 0x000100c54316. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar1 = (*UNRECOVERED_JUMPTABLE)();
        return lVar1;
      }
      uVar2 = 0x6c;
      uVar3 = 0x13b;
      goto LAB_100c542e4;
    }
    *(uint *)((long)param_1 + 0x14) = param_3;
  }
  return 0;
}

