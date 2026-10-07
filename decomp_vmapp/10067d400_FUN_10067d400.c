
undefined8 FUN_10067d400(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010067d415. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    return uVar1;
  }
  FUN_1008e3970("","WinRegistry",0,"OA00005.02:");
  return 0x8158003;
}

