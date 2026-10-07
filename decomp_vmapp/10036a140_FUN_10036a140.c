
void FUN_10036a140(long param_1)

{
  (*DAT_1011c5b88)(1,param_1);
  (*DAT_1011c5b10)(1,param_1 + 4);
  if (*(int *)(param_1 + 0x224) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010036a194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1011c7968)(1,param_1 + 0x224);
    return;
  }
  return;
}

