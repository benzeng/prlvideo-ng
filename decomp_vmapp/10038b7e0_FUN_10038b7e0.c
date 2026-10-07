
void FUN_10038b7e0(long param_1,long param_2,int param_3,int param_4)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if ((*(byte *)(param_2 + 0xac) & 1) != 0) {
    uVar5 = 0x821a;
    if ((*(byte *)(param_2 + 0xac) & 2) == 0) {
      (*DAT_1011c75b0)(0x8d40,0x8d20,0,0);
      uVar5 = 0x8d00;
    }
    iVar1 = *(int *)(param_2 + 0x14);
    if (iVar1 < 0x8c18) {
      if (iVar1 < 0x8513) {
        if (1 < iVar1 - 0xde0U) {
          if (iVar1 == 0x806f) goto LAB_10038b999;
          if (iVar1 != 0x84f5) goto LAB_10038ba49;
        }
LAB_10038ba35:
        (*DAT_1011c75b0)(0x8d40,uVar5,*(undefined4 *)(param_2 + 0xc),param_4);
      }
      else {
        if (iVar1 != 0x8513) goto LAB_10038ba49;
LAB_10038b999:
        if (iVar1 == 0x8513) {
          puVar4 = &DAT_1011c5de8;
          iVar1 = param_3 + 0x8515;
          iVar3 = *(int *)(param_2 + 0xc);
          param_3 = param_4;
        }
        else {
          puVar4 = &DAT_1011c5e18;
          iVar1 = *(int *)(param_2 + 0xc);
          iVar3 = param_4;
        }
        (*(code *)*puVar4)(0x8d40,uVar5,iVar1,iVar3,param_3);
      }
    }
    else if (iVar1 < 0x8c1a) {
      if (iVar1 == 0x8c18) goto LAB_10038b999;
    }
    else if (iVar1 < 0x9100) {
      if ((iVar1 == 0x8c1a) || (iVar1 == 0x9009)) goto LAB_10038b999;
    }
    else {
      if (iVar1 == 0x9102) goto LAB_10038b999;
      if (iVar1 == 0x9100) goto LAB_10038ba35;
    }
LAB_10038ba49:
    (*DAT_1011c75b0)(0x8d40,0x8ce0,0,0);
    (*DAT_1011c5c00)(0);
    uVar5 = 0;
    goto LAB_10038ba74;
  }
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 < 0x8c18) {
    if (iVar1 < 0x8513) {
      if (1 < iVar1 - 0xde0U) {
        if (iVar1 == 0x806f) goto LAB_10038b943;
        if (iVar1 != 0x84f5) goto LAB_10038b9fa;
      }
LAB_10038b9e1:
      (*DAT_1011c75b0)(0x8d40,0x8ce0,*(undefined4 *)(param_2 + 0xc),param_4);
    }
    else {
      if (iVar1 != 0x8513) goto LAB_10038b9fa;
LAB_10038b943:
      if (iVar1 == 0x8513) {
        puVar4 = &DAT_1011c5de8;
        iVar1 = param_3 + 0x8515;
        iVar3 = *(int *)(param_2 + 0xc);
        param_3 = param_4;
      }
      else {
        puVar4 = &DAT_1011c5e18;
        iVar1 = *(int *)(param_2 + 0xc);
        iVar3 = param_4;
      }
      (*(code *)*puVar4)(0x8d40,0x8ce0,iVar1,iVar3,param_3);
    }
  }
  else if (iVar1 < 0x8c1a) {
    if (iVar1 == 0x8c18) goto LAB_10038b943;
  }
  else if (iVar1 < 0x9100) {
    if ((iVar1 == 0x8c1a) || (iVar1 == 0x9009)) goto LAB_10038b943;
  }
  else {
    if (iVar1 == 0x9102) goto LAB_10038b943;
    if (iVar1 == 0x9100) goto LAB_10038b9e1;
  }
LAB_10038b9fa:
  (*DAT_1011c75b0)(0x8d40,0x821a,0,0);
  (*DAT_1011c5c00)(0x8ce0);
  uVar5 = 0x8ce0;
LAB_10038ba74:
  (*DAT_1011c68d8)(uVar5);
  pbVar2 = *(byte **)(param_1 + 0xd8);
  *(uint *)(pbVar2 + 0xc) = *(uint *)(pbVar2 + 0xc) | 1;
  *pbVar2 = *pbVar2 | 8;
  return;
}

