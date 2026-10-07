
undefined8 FUN_1002d7180(long *param_1)

{
  undefined8 uVar1;
  
  if ((long *)*param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001002d7190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(long *)*param_1 + 0x60))();
    return uVar1;
  }
  return 0xe00002bc;
}

