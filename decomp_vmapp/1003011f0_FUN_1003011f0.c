
void FUN_1003011f0(long param_1,uint param_2,undefined4 param_3)

{
  if (param_2 < 0x10) {
    *(undefined4 *)(param_1 + 0x180 + (ulong)param_2 * 0x2c) = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x000100301215. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1011c5760)(param_2,param_3);
  return;
}

