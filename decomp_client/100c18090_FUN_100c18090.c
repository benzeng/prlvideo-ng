
void FUN_100c18090(long param_1,int *param_2)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  uint *puVar11;
  ulong uVar12;
  int iVar13;
  int *piVar14;
  
  puVar11 = (uint *)(param_1 + 0xc0);
  iVar13 = 0;
  piVar14 = param_2;
  do {
    uVar12 = CONCAT44(0,*puVar11);
    iVar10 = 0;
    if (uVar12 != 0) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar12;
      uVar8 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x10001)) % auVar2,0);
      lVar9 = 1;
      uVar6 = 0x10001;
      lVar7 = 0;
      while (lVar5 = lVar9, uVar4 = uVar8, uVar4 != 0) {
        uVar8 = (long)uVar12 % (long)uVar4;
        lVar9 = lVar7 - ((long)uVar6 / (long)uVar12) * lVar5;
        uVar6 = uVar12;
        lVar7 = lVar5;
        uVar12 = uVar4;
      }
      iVar10 = (int)lVar5 + 0x10001;
      if (-1 < lVar5) {
        iVar10 = (int)lVar5;
      }
    }
    *piVar14 = iVar10;
    piVar14[1] = -puVar11[2] & 0xffff;
    piVar14[2] = -puVar11[1] & 0xffff;
    uVar12 = CONCAT44(0,puVar11[3]);
    iVar10 = 0;
    if (uVar12 != 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar12;
      uVar8 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x10001)) % auVar3,0);
      lVar9 = 1;
      uVar6 = 0x10001;
      lVar7 = 0;
      while (lVar5 = lVar9, uVar4 = uVar8, uVar4 != 0) {
        uVar8 = (long)uVar12 % (long)uVar4;
        lVar9 = lVar7 - ((long)uVar6 / (long)uVar12) * lVar5;
        uVar6 = uVar12;
        lVar7 = lVar5;
        uVar12 = uVar4;
      }
      iVar10 = (int)lVar5 + 0x10001;
      if (-1 < lVar5) {
        iVar10 = (int)lVar5;
      }
    }
    piVar14[3] = iVar10;
    if (iVar13 == 8) break;
    piVar14[4] = puVar11[-2];
    puVar1 = puVar11 + -1;
    puVar11 = puVar11 + -6;
    piVar14[5] = *puVar1;
    piVar14 = piVar14 + 6;
    iVar13 = iVar13 + 1;
  } while (iVar13 < 9);
  iVar13 = param_2[1];
  param_2[1] = param_2[2];
  param_2[2] = iVar13;
  iVar13 = param_2[0x31];
  param_2[0x31] = param_2[0x32];
  param_2[0x32] = iVar13;
  return;
}

