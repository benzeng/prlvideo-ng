
undefined8 FUN_1003e3870(long *param_1)

{
  undefined8 uVar1;
  
  if (*(int *)((long)param_1 + 0x8c) != 0) {
    return 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x0001003e3888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0xa0))();
  return uVar1;
}

