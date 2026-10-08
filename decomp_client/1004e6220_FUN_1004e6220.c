
void FUN_1004e6220(long param_1)

{
  if (((*(long *)(param_1 + 0x88) != 0) && (*(int *)(*(long *)(param_1 + 0x88) + 4) != 0)) &&
     (*(long **)(param_1 + 0x90) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001004e6246. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x90) + 0x20))();
    return;
  }
  return;
}

