
void FUN_100416d80(long param_1,uint param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x18 + (ulong)param_2 * 4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x000100416d96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x38))();
  return;
}

