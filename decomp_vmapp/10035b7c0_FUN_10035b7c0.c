
void FUN_10035b7c0(long param_1,int param_2,undefined4 param_3)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  *(undefined4 *)(param_1 + 0x28) = 1;
  if ((param_2 - 3U < 3) && (*(int *)(param_1 + 8) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010035b7f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1011c56e0)(0x8914);
    return;
  }
  return;
}

