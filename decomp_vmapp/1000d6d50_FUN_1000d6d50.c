
ulong FUN_1000d6d50(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  sbyte sVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  
  lVar3 = *(long *)(param_1 + 0x18);
  uVar6 = *(uint *)(lVar3 + 8);
  uVar11 = uVar6 - 4 & 0xfffffffc;
  if (uVar11 < 4) {
    uVar4 = 0;
    uVar11 = 4;
  }
  else {
    uVar4 = 0;
    uVar12 = 1;
    do {
      uVar2 = *(uint *)(lVar3 + 4 + (ulong)(uVar12 - 1) * 4);
      iVar8 = uVar2 + (int)uVar4 + (uVar2 >> 0x18) + (uVar2 >> 0xe) + (uVar2 >> 7 & 0x1fe00) +
              (uVar2 & 0xff00) * 0x100;
      uVar1 = uVar2 * 0x1010000 + 0x3432383 + iVar8;
      uVar4 = (ulong)((uVar1 >> 0xb) + 0x3432383 + iVar8 + uVar2 * 0x1010000 + uVar1 * 0x10000);
      uVar7 = (ulong)uVar12;
      uVar12 = uVar12 + 1;
    } while (uVar7 << 2 < (ulong)uVar11);
    uVar11 = uVar11 + 4;
  }
  uVar12 = uVar6 - uVar11;
  if ((uVar6 != uVar11) && (uVar12 < 4)) {
    uVar7 = (ulong)uVar11;
    if (uVar12 == 4) {
      uVar6 = *(uint *)(lVar3 + uVar7);
      iVar9 = (uVar6 >> 0x18) + uVar6 + (uVar6 >> 0xe) + (uVar6 >> 7 & 0x1fe00) +
              (uVar6 & 0xff00) * 0x100;
      iVar8 = uVar6 * 0x1010000 + 0x3432383 + iVar9;
      uVar6 = (int)uVar4 + 0x3432383 + iVar9 + uVar6 * 0x1010000;
      uVar4 = (ulong)((uVar6 >> 0xb) + uVar6 * 0x10001);
    }
    else {
      iVar8 = 0x2020101;
      uVar10 = 0;
      do {
        if (uVar10 < 2) {
          sVar5 = 0x18;
          if (uVar10 != 0) {
            sVar5 = 8;
          }
          iVar8 = iVar8 + ((uint)*(byte *)(uVar7 + lVar3 + uVar10) << sVar5);
        }
        else if (uVar10 == 2) {
          iVar8 = iVar8 + (uint)*(byte *)(uVar7 + 2 + lVar3) * 0x20000;
        }
        uVar10 = uVar10 + 1;
      } while (uVar12 != (uint)uVar10);
    }
    uVar6 = (int)uVar4 * 0x80000 + (int)(uVar4 >> 7) + iVar8;
    uVar6 = (uVar6 + (int)uVar4 + (uVar6 * 0x10000 | uVar6 >> 0x10)) * 0x10001;
    uVar4 = (ulong)((uVar6 >> 0xb) + uVar6);
  }
  return uVar4;
}

