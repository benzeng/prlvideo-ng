
void FUN_100a3e3c0(long param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000100a3e3d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100a3e3db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x38))();
  return;
}

