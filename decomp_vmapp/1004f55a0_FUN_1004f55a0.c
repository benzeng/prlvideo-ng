
uint FUN_1004f55a0(long *param_1)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = *param_1;
  lVar3 = (long)*(int *)(lVar2 + 4);
  uVar1 = *(ushort *)(lVar2 + *(long *)(lVar2 + 0x10));
  uVar4 = (uint)uVar1;
  if ((lVar3 != 1) &&
     (uVar4 = (uint)*(ushort *)(*(long *)(lVar2 + 0x10) + 2 + lVar2) + (uint)uVar1 * 0x100,
     2 < *(int *)(lVar2 + 4))) {
    lVar2 = lVar2 + *(long *)(lVar2 + 0x10);
    lVar5 = 3;
    do {
      uVar4 = (uint)*(ushort *)(lVar2 + -2 + lVar5 * 2) * 0x100 +
              ((uVar4 & 0xffff) >> 1 | (uVar4 & 0xffff) << 0xf);
      if (lVar5 < lVar3) {
        uVar4 = uVar4 + *(ushort *)(lVar2 + lVar5 * 2);
      }
      lVar6 = lVar5 + 1;
      lVar5 = lVar5 + 2;
    } while (lVar6 < lVar3);
  }
  return uVar4 & 0xffff;
}

