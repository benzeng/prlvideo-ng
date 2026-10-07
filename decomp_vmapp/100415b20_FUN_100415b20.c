
void FUN_100415b20(long param_1)

{
  *(undefined4 *)(param_1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x000100415b33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x118))();
  return;
}

