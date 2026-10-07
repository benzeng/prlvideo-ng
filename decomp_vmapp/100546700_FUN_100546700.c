
void FUN_100546700(long param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  uint *puVar13;
  int iVar14;
  uint *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  uVar1 = *(ulong *)(param_1 + 0x40);
  if (uVar1 != 0) {
    uVar10 = (*(ulong *)(param_1 + 0x10) >> 0xc) + 0x1f >> 5;
    iVar9 = (int)uVar10;
    if (iVar9 != 0) {
      uVar12 = (ulong)(iVar9 - 1);
      lVar18 = (uVar12 + 1) - (uVar10 & 7);
      lVar16 = 0;
      if ((lVar18 != 0) &&
         ((param_2 + uVar12 * 4 < uVar1 || (lVar16 = 0, uVar1 + uVar12 * 4 < param_2)))) {
        puVar15 = (uint *)(uVar1 + 0x10);
        puVar13 = (uint *)(param_2 + 0x10);
        lVar17 = ((ulong)(iVar9 - 1) + 1) - (uVar10 & 7);
        do {
          uVar2 = puVar13[-3];
          uVar3 = puVar13[-2];
          uVar4 = puVar13[-1];
          uVar5 = *puVar13;
          uVar6 = puVar13[1];
          uVar7 = puVar13[2];
          uVar8 = puVar13[3];
          puVar15[-4] = puVar13[-4] ^ 0xffffffff;
          puVar15[-3] = uVar2 ^ 0xffffffff;
          puVar15[-2] = uVar3 ^ 0xffffffff;
          puVar15[-1] = uVar4 ^ 0xffffffff;
          *puVar15 = uVar5 ^ 0xffffffff;
          puVar15[1] = uVar6 ^ 0xffffffff;
          puVar15[2] = uVar7 ^ 0xffffffff;
          puVar15[3] = uVar8 ^ 0xffffffff;
          puVar15 = puVar15 + 8;
          puVar13 = puVar13 + 8;
          lVar17 = lVar17 + -8;
          lVar16 = lVar18;
        } while (lVar17 != 0);
      }
      if (uVar12 + 1 != lVar16) {
        iVar14 = (int)lVar16;
        if ((iVar9 - iVar14 & 3U) != 0) {
          iVar11 = -((byte)((char)uVar10 - (char)lVar16) & 3);
          do {
            *(uint *)(uVar1 + lVar16 * 4) = ~*(uint *)(param_2 + lVar16 * 4);
            lVar16 = lVar16 + 1;
            iVar11 = iVar11 + 1;
          } while (iVar11 != 0);
        }
        if (2 < (uint)((iVar9 + -1) - iVar14)) {
          puVar15 = (uint *)(param_2 + 0xc + lVar16 * 4);
          puVar13 = (uint *)(uVar1 + 0xc + lVar16 * 4);
          iVar9 = (iVar9 + 3) - ((int)lVar16 + 3);
          do {
            puVar13[-3] = ~puVar15[-3];
            puVar13[-2] = ~puVar15[-2];
            puVar13[-1] = ~puVar15[-1];
            *puVar13 = ~*puVar15;
            puVar15 = puVar15 + 4;
            puVar13 = puVar13 + 4;
            iVar9 = iVar9 + -4;
          } while (iVar9 != 0);
        }
      }
    }
  }
  return;
}

