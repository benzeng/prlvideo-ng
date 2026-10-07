
void FUN_1002a5c80(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  bool bVar4;
  
  iVar2 = *(int *)(param_1 + 0x14);
  uVar1 = iVar2 - 1;
  *(uint *)(param_1 + 0x14) = uVar1;
  while (iVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + 0x18 + (ulong)uVar1 * 0x10);
    if ((0xafffffff < uVar3) && (bVar4 = uVar3 < 0x100000000, uVar3 = uVar3 - 0x50000000, bVar4)) {
      uVar3 = 0xffffffffffffffff;
    }
    FUN_10008c640(DAT_1011c3688,uVar3,0x1000,0,1,1);
    iVar2 = *(int *)(param_1 + 0x14);
    uVar1 = iVar2 - 1;
    *(uint *)(param_1 + 0x14) = uVar1;
  }
  return;
}

