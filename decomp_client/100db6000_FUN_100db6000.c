
void FUN_100db6000(long param_1)

{
  if (*(code **)(param_1 + 0x48) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100db600e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x48))();
    return;
  }
  return;
}

