
void FUN_10060b5f0(long param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  ___bzero(param_1 + 0x220,0xd8);
  iVar1 = *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x2c) = iVar1;
  *(undefined4 *)(param_1 + 0x220) = 5;
  uVar6 = (ulong)*(uint *)(param_1 + 0x48);
  uVar5 = ((*(uint *)(param_1 + 0x4c) * uVar6) / 0x1900000000) * 0x800000 + 0x800000;
  uVar3 = 0x20000000;
  if (uVar5 < 0x20000001) {
    uVar3 = uVar5;
  }
  *(ulong *)(param_1 + 0x2ec) = uVar3;
  *(ulong *)(param_1 + 0x24c) = uVar3;
  iVar2 = (int)(uVar3 / uVar6);
  *(int *)(param_1 + 0x54) = iVar1 + 1 + iVar2;
  *(int *)(param_1 + 0x50) = (*(int *)(param_1 + 0x50) + -1) - iVar2;
  lVar4 = (iVar1 + 1) * uVar6;
  *(long *)(param_1 + 0x244) = lVar4;
  *(long *)(param_1 + 0x2e4) = lVar4;
  *(long *)(param_1 + 0x2dc) = lVar4;
  *(undefined4 *)(param_1 + 0x2fc) = param_2;
  *(undefined4 *)(param_1 + 0x2f4) = 0x18000;
  *(undefined4 *)(param_1 + 0x2d4) = 0x4a4e4c78;
  *(undefined4 *)(param_1 + 0x2d8) = 0x12345678;
  *(undefined4 *)(param_1 + 0x2f8) = 0x84cab8f;
  return;
}

