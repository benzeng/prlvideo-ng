
void FUN_1004ded90(long *param_1)

{
  FUN_1004da310();
  FUN_1004dedc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001004dedb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x208))(param_1);
  return;
}

