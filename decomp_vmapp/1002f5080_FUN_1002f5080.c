
undefined8 FUN_1002f5080(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001002f5091. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x28) + 0x108))();
    return uVar1;
  }
  return 0;
}

