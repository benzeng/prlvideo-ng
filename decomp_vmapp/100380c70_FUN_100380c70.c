
void FUN_100380c70(long param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar4 = 0x821a;
  if ((*(byte *)(param_1 + 0xac) & 2) == 0) {
    (*DAT_1011c75b0)(0x8d40,0x8d20,0,0);
    uVar4 = 0x8d00;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 < 0x8c18) {
    if (iVar1 < 0x8513) {
      if (iVar1 - 0xde0U < 2) goto LAB_100380d90;
      if (iVar1 != 0x806f) {
        if (iVar1 != 0x84f5) {
          return;
        }
        goto LAB_100380d90;
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
    goto LAB_100380d90;
  }
  if (param_3 == 1) {
    UNRECOVERED_JUMPTABLE = DAT_1011c5e18;
    iVar2 = *(int *)(param_1 + 0xc);
    iVar3 = param_4;
    if (iVar1 == 0x8513) {
      UNRECOVERED_JUMPTABLE = DAT_1011c5de8;
      iVar2 = param_2 + 0x8515;
      iVar3 = *(int *)(param_1 + 0xc);
      param_2 = param_4;
    }
                    /* WARNING: Could not recover jumptable at 0x000100380d85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(0x8d40,uVar4,iVar2,iVar3,param_2,UNRECOVERED_JUMPTABLE);
    return;
  }
LAB_100380d90:
                    /* WARNING: Could not recover jumptable at 0x000100380dad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1011c75b0)(0x8d40,uVar4,*(undefined4 *)(param_1 + 0xc),param_4);
  return;
}

