
undefined8 FUN_100573160(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x11d8) == '\0') {
    if (*(long **)(param_1 + 0x11c8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010057317f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(**(long **)(param_1 + 0x11c8) + 0x18))();
      return uVar1;
    }
    FUN_1008e3970("","vdisk",0,"Try to commit at uninitialized manager");
    uVar1 = 0x80000007;
  }
  return uVar1;
}

