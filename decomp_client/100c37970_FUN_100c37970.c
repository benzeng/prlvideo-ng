
void FUN_100c37970(long *param_1)

{
  if (*(code **)(*param_1 + 0xe8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100c37984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xe8))();
    return;
  }
  FUN_100c3a820();
  return;
}

