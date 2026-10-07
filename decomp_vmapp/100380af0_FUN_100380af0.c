
void FUN_100380af0(long param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_2 + 0x8515;
  if (*(int *)(param_1 + 0x14) != 0x8513) {
    iVar1 = *(int *)(param_1 + 0x14);
  }
  (*DAT_1011c5de8)(0x8d40,0x8d00,iVar1,*(undefined4 *)(param_1 + 0xc),param_3);
  uVar2 = 0;
  if ((*(byte *)(param_1 + 0xac) & 2) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0xc);
  }
                    /* WARNING: Could not recover jumptable at 0x000100380b5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1011c5de8)(0x8d40,0x8d20,iVar1,uVar2,param_3);
  return;
}

