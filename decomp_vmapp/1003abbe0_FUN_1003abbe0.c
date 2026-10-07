
bool FUN_1003abbe0(long param_1)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  
  bVar8 = 0xf;
  uVar9 = 0;
  uVar10 = 0;
  uVar6 = 0;
  uVar5 = 0;
  bVar3 = 0;
  for (lVar4 = **(long **)(param_1 + 8); lVar4 != 0; lVar4 = **(long **)(lVar4 + 0x20)) {
    bVar3 = bVar3 | *(byte *)(lVar4 + 0x7c);
    bVar8 = bVar8 & *(byte *)(lVar4 + 0x7c);
    uVar5 = uVar5 + *(int *)(lVar4 + 0x88);
    uVar6 = uVar6 + *(int *)(lVar4 + 0x8c);
    uVar10 = uVar10 + *(int *)(lVar4 + 0x90);
    uVar9 = uVar9 + *(int *)(lVar4 + 0x94);
  }
  if (bVar8 == 0) {
    bVar8 = bVar3;
  }
  if ((7 < bVar8 - 1) || ((0x8bU >> (bVar8 - 1 & 0x1f) & 1) == 0)) {
    bVar3 = bVar8 & 2;
    bVar1 = false;
    if ((bVar8 & 2) == 0) {
      uVar5 = 0xffffffff;
    }
    if ((bVar8 & 1) != 0) {
      if (uVar5 == uVar6) {
        bVar1 = true;
        uVar5 = uVar6;
      }
      else {
        bVar1 = uVar5 <= uVar6;
        bVar7 = 0;
        if (bVar1) {
          uVar6 = uVar5;
          bVar7 = bVar3;
        }
        uVar5 = uVar6;
        bVar1 = !bVar1;
        bVar3 = bVar7;
      }
    }
    uVar6 = uVar5;
    bVar2 = bVar1;
    bVar7 = bVar3;
    if (((bVar8 & 4) != 0) && (uVar6 = uVar10, uVar5 != uVar10)) {
      bVar2 = false;
      bVar7 = 0;
      if (uVar5 <= uVar10) {
        uVar6 = uVar5;
        bVar2 = bVar1;
        bVar7 = bVar3;
      }
    }
    bVar1 = false;
    bVar3 = bVar7;
    if ((bVar8 & 8) != 0) {
      if (uVar6 == uVar9) {
        bVar1 = true;
      }
      else {
        bVar3 = 0;
        bVar1 = false;
        if (uVar6 <= uVar9) {
          bVar3 = bVar7;
          bVar1 = bVar2;
        }
        bVar2 = bVar1;
        bVar1 = uVar6 > uVar9;
      }
    }
    bVar8 = 8;
    if ((!bVar1) && (bVar8 = 2, bVar3 == 0)) {
      return bVar2;
    }
  }
  return (bool)bVar8;
}

