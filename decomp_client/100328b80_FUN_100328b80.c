
undefined8 FUN_100328b80(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x48) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100328b91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x48) + 0x120))();
    return uVar1;
  }
  return 0;
}

