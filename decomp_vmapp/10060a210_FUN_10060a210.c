
ulong FUN_10060a210(long param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0x112) << 3;
  *(undefined4 *)(param_1 + 0x120) = 0;
  if ((uint)uVar2 < *(uint *)(param_1 + 0x34)) {
    uVar3 = (uint)*(ushort *)(param_1 + 0x30) * 8 - 0xa0;
    uVar1 = (*(uint *)(param_1 + 0x34) - (uint)uVar2) + -0xa1 +
            (uint)*(ushort *)(param_1 + 0x30) * 8;
    uVar2 = (ulong)uVar1 / (ulong)uVar3;
    *(uint *)(param_1 + 0x120) = uVar1 - uVar1 % uVar3;
  }
  return uVar2;
}

