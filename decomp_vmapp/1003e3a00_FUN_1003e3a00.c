
undefined8 FUN_1003e3a00(long *param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (param_3 < param_2) {
    param_2 = param_3;
  }
  *(uint *)((long)param_1 + 0xcc) = param_2;
  if (param_2 != 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001003e3a1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x260))();
  return uVar1;
}

