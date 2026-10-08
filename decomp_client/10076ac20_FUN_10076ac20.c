
void FUN_10076ac20(long param_1)

{
  if (((*(long *)(param_1 + 0x20) != 0) && (*(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) &&
     (*(long **)(param_1 + 0x28) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010076ac40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x28) + 0x20))();
    return;
  }
  return;
}

