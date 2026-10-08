
undefined8 FUN_100d6c290(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100d6c2a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x48))();
    return uVar1;
  }
  FUN_100df99c0("","WinRegistry",0,"OA00005.05:");
  return 0x8158003;
}

