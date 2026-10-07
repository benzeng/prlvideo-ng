
void FUN_10085c770(long *param_1)

{
  if (*(code **)(*param_1 + 0xe8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010085c784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xe8))();
    return;
  }
  FUN_10085f620();
  return;
}

