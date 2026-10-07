
void FUN_1000b4130(long param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001000b4142. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x1810 + (ulong)param_2 * 8) + 0xf8))();
  return;
}

