
void FUN_100380b60(long param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  param_5 = param_5 + 0x8ce0;
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 < 0x8c18) {
    if (iVar1 < 0x8513) {
      if (iVar1 - 0xde0U < 2) goto LAB_100380c47;
      if (iVar1 != 0x806f) {
        if (iVar1 != 0x84f5) {
          return;
        }
        goto LAB_100380c47;
      }
    }
    else if (iVar1 != 0x8513) {
      return;
    }
  }
  else if (iVar1 < 0x8c1a) {
    if (iVar1 != 0x8c18) {
      return;
    }
  }
  else if (iVar1 < 0x9100) {
    if ((iVar1 != 0x8c1a) && (iVar1 != 0x9009)) {
      return;
    }
  }
  else if (iVar1 != 0x9102) {
    if (iVar1 != 0x9100) {
      return;
    }
    goto LAB_100380c47;
  }
  if (param_3 == 1) {
    if (iVar1 == 0x8513) {
                    /* WARNING: Could not recover jumptable at 0x000100380c1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_1011c5de8)(0x8d40,param_5,param_2 + 0x8515,*(undefined4 *)(param_1 + 0xc),param_4);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000100380c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1011c5e18)(0x8d40,param_5,*(undefined4 *)(param_1 + 0xc),param_4,param_2);
    return;
  }
LAB_100380c47:
                    /* WARNING: Could not recover jumptable at 0x000100380c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1011c75b0)(0x8d40,param_5,*(undefined4 *)(param_1 + 0xc),param_4);
  return;
}

