
void FUN_100619580(long *param_1)

{
  (**(code **)param_1[2])();
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001006195a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1);
    return;
  }
  return;
}

