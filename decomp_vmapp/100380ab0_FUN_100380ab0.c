
void FUN_100380ab0(long param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x14) == 0x8513) {
    iVar1 = param_2 + 0x8515;
  }
                    /* WARNING: Could not recover jumptable at 0x000100380ae6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1011c5de8)(0x8d40,param_4 + 0x8ce0,iVar1,*(undefined4 *)(param_1 + 0xc),param_3);
  return;
}

