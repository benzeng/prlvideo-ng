
undefined8 FUN_10037eff0(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = *(uint *)(param_2 + 0x8354);
  iVar4 = 0x207;
  if (*(int *)(param_2 + 0x8350) - 1U < 8) {
    iVar4 = *(int *)(param_2 + 0x8350) + 0x1ff;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x100);
  uVar3 = 0;
  if (lVar1 != 0) {
    uVar2 = *(int *)(lVar1 + 8) - 0x1f;
    uVar3 = 0;
    if (uVar2 < 10) {
      uVar3 = *(uint *)(&DAT_100b3e180 + (long)(int)uVar2 * 4);
    }
    uVar5 = uVar5 & uVar3;
    uVar3 = uVar3 & *(uint *)(param_2 + 0x8358);
  }
  if (*(int *)(param_2 + 0x8554) == 0) {
    (*DAT_1011c6b08)(iVar4,uVar5,uVar3);
  }
  else {
    iVar6 = 0x207;
    if (*(int *)(param_2 + 0x8564) - 1U < 8) {
      iVar6 = *(int *)(param_2 + 0x8564) + 0x1ff;
    }
    (*DAT_1011c6b10)(0x404,iVar4,uVar5,uVar3);
    (*DAT_1011c6b10)(0x405,iVar6,uVar5,uVar3);
  }
  return 0;
}

