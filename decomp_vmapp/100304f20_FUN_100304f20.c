
void FUN_100304f20(long param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0x8804) {
    *(undefined4 *)(param_1 + 0x25ec) = param_3;
  }
  else {
    if (param_2 != 0x8620) {
      return;
    }
    *(undefined4 *)(param_1 + 0x25e8) = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x000100304f57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)DAT_1011c4a88[0x1d8])(*DAT_1011c4a88,param_2,param_3,(code *)DAT_1011c4a88[0x1d8]);
  return;
}

