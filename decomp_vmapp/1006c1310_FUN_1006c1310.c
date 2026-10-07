
uint FUN_1006c1310(long param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (uint)*(byte *)(param_1 + 6) * 0x100 +
          (((param_2 & 0xff00) << 8 | param_2 << 0x18) >> 0x10) +
          (param_2 >> 0x18 | (param_2 & 0xff0000) >> 8) + (uint)*(ushort *)(param_1 + 8);
  cVar1 = (char)*(ushort *)(param_1 + 8);
  if ((cVar1 != -2) || ((*(byte *)(param_1 + 9) & 0xc0) != 0x80)) {
    iVar2 = iVar2 + (uint)*(ushort *)(param_1 + 10);
  }
  iVar2 = (uint)*(ushort *)(param_1 + 0x18) +
          (uint)*(ushort *)(param_1 + 0x16) +
          (uint)*(ushort *)(param_1 + 0x14) +
          (uint)*(ushort *)(param_1 + 0x12) +
          (uint)*(ushort *)(param_1 + 0x10) +
          (uint)*(ushort *)(param_1 + 0xe) + (uint)*(ushort *)(param_1 + 0xc) + iVar2;
  if ((cVar1 != -2) || ((*(byte *)(param_1 + 9) & 0xc0) != 0x80)) {
    iVar2 = iVar2 + (uint)*(ushort *)(param_1 + 0x1a);
  }
  uVar3 = (uint)*(ushort *)(param_1 + 0x26) +
          (uint)*(ushort *)(param_1 + 0x24) +
          (uint)*(ushort *)(param_1 + 0x22) +
          (uint)*(ushort *)(param_1 + 0x20) +
          (uint)*(ushort *)(param_1 + 0x1e) + (uint)*(ushort *)(param_1 + 0x1c) + iVar2;
  return (uVar3 * 0x10000 | uVar3 >> 0x10) + uVar3 >> 0x10;
}

