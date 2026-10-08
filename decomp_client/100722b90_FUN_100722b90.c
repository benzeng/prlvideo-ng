
undefined8 FUN_100722b90(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100722ba1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x118))();
    return uVar1;
  }
  return 0;
}

