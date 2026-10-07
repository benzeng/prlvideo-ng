
undefined8 FUN_100594af0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x70) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100594b01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x70) + 0x338))();
    return uVar1;
  }
  return 0xffffffff;
}

