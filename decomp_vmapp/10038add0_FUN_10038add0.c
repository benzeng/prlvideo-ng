
void FUN_10038add0(long param_1,long param_2,int param_3,undefined4 param_4)

{
  ulong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  iVar2 = param_3 + 0x8515;
  if (*(int *)(param_2 + 0x14) != 0x8513) {
    iVar2 = *(int *)(param_2 + 0x14);
  }
  if ((*(byte *)(param_2 + 0xac) & 1) == 0) {
    (*DAT_1011c5de8)(0x8d40,0x8ce0,iVar2,*(undefined4 *)(param_2 + 0xc),param_4);
    (*DAT_1011c5de8)(0x8d40,0x8d00,0xde1,0,0);
    (*DAT_1011c5de8)(0x8d40,0x8d20,0xde1,0,0);
    (*DAT_1011c5c00)(0x8ce0);
    uVar4 = 0x8ce0;
  }
  else {
    (*DAT_1011c5de8)(0x8d40,0x8d00,iVar2,*(undefined4 *)(param_2 + 0xc),param_4);
    uVar3 = 0;
    if ((*(byte *)(param_2 + 0xac) & 2) != 0) {
      uVar3 = *(undefined4 *)(param_2 + 0xc);
    }
    (*DAT_1011c5de8)(0x8d40,0x8d20,iVar2,uVar3,param_4);
    (*DAT_1011c5de8)(0x8d40,0x8ce0,0xde1,0,0);
    (*DAT_1011c5c00)(0);
    uVar4 = 0;
  }
  (*DAT_1011c68d8)(uVar4);
  puVar1 = *(ulong **)(param_1 + 0xd8);
  *puVar1 = *puVar1 | *(ulong *)(*(long *)puVar1[1] + 0x3010);
  return;
}

