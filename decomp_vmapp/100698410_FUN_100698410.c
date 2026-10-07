
void FUN_100698410(long *param_1)

{
  (**(code **)(*param_1 + 0x100))();
  (**(code **)(*param_1 + 0x48))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000100698437. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x108))(param_1);
  return;
}

