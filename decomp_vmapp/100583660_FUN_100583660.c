
void FUN_100583660(long *param_1)

{
  (**(code **)(*param_1 + 0xe8))();
                    /* WARNING: Could not recover jumptable at 0x00010058367e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf0))(param_1);
  return;
}

