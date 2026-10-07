
void FUN_10035b760(long param_1)

{
  (*DAT_1011c5b50)(1,param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    (*DAT_1011c7540)();
  }
  if (*(int *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010035b7af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1011c7458)(1,param_1 + 0x18);
    return;
  }
  return;
}

