
void FUN_100292600(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x158) == 0) {
    uVar2 = (ulong)*(ushort *)(param_1 + -0x78);
    if (*(int *)(uVar2 * 0x80 + 0x470c +
                (ulong)*(ushort *)(param_1 + -0x7a) * 0x300 + *(long *)(param_1 + -0x68)) != 0) {
      lVar3 = *(long *)(param_1 + -0x68) + (ulong)*(ushort *)(param_1 + -0x7a) * 0x40;
      if (*(ushort *)(lVar3 + 0x4610 + uVar2 * 2) < 0x100) {
        uVar1 = param_2 >> 0xc & 0xf0;
        *(ushort *)(lVar3 + 0x4610 + uVar2 * 2) = (ushort)(uVar1 << 8) | (ushort)(uVar1 != 0) | 0x50
        ;
        FUN_10028e310(param_1 + -0x1068,0x80);
        return;
      }
    }
  }
  return;
}

