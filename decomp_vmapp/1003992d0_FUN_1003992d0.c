
void FUN_1003992d0(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if ((iVar1 != 0x84f5) && (iVar1 != 0x8c2a)) {
    uVar2 = *(uint *)(param_1 + 0x2c);
    uVar3 = *(int *)(param_1 + 0x10) - 1;
    if ((uVar2 & 1) != 0) {
      uVar2 = *(uint *)(param_1 + 0x24);
      if (uVar3 <= *(uint *)(param_1 + 0x24)) {
        uVar2 = uVar3;
      }
      (*DAT_1011c6cd8)(iVar1,0x813c,uVar2);
      uVar2 = *(uint *)(param_1 + 0x2c);
    }
    if ((uVar2 & 2) != 0) {
      if (*(uint *)(param_1 + 0x28) < uVar3) {
        uVar3 = *(uint *)(param_1 + 0x28);
      }
      (*DAT_1011c6cd8)(iVar1,0x813d,uVar3);
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}

