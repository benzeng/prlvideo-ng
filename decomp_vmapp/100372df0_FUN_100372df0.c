
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100372df0(long param_1,int *param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  uint *puVar23;
  ulong uVar24;
  uint *puVar25;
  uint *puVar26;
  uint *puVar27;
  uint uVar28;
  ulong uVar29;
  uint *puVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  
  iVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar33 = (ulong)(uint)(*param_2 << 2);
  puVar27 = (uint *)(param_3 + uVar33 * 4);
  puVar26 = puVar27;
  if (*(uint *)*param_4 < 0xffff0200) {
    puVar26 = *(uint **)(param_1 + 0x12b0);
    if ((ulong)(*(long *)(param_1 + 0x12b8) - (long)puVar26 >> 2) < (ulong)(uVar2 << 4)) {
      FUN_100374a70((undefined8 *)(param_1 + 0x12b0));
      puVar26 = *(uint **)(param_1 + 0x12b0);
    }
    uVar21 = _UNK_100b3f6cc;
    uVar20 = _UNK_100b3f6c8;
    uVar19 = _UNK_100b3f6c4;
    uVar18 = DAT_100b3f6c0;
    iVar17 = _UNK_100b3d57c;
    iVar16 = _UNK_100b3d578;
    iVar15 = _UNK_100b3d574;
    iVar14 = _DAT_100b3d570;
    uVar13 = _UNK_100b3d56c;
    uVar12 = _UNK_100b3d568;
    uVar11 = _UNK_100b3d564;
    uVar10 = _DAT_100b3d560;
    uVar9 = _UNK_100b2ea3c;
    uVar8 = _UNK_100b2ea38;
    uVar7 = _UNK_100b2ea34;
    uVar28 = _DAT_100b2ea30;
    if ((uVar2 & 0x3fffffff) != 0) {
      uVar31 = (ulong)(uVar2 * 4);
      uVar24 = uVar31 * 4 - 4 >> 2;
      uVar32 = uVar24 + 1 & 0x7ffffffffffffffc;
      uVar22 = 0;
      puVar25 = puVar26;
      if ((uVar32 != 0) &&
         ((uVar22 = 0, (uint *)(param_3 + (uVar24 + uVar33) * 4) < puVar26 ||
          (puVar26 + uVar24 < (uint *)(param_3 + uVar33 * 4))))) {
        puVar27 = (uint *)(param_3 + (uVar33 + uVar32) * 4);
        puVar23 = (uint *)(param_3 + uVar33 * 4);
        uVar29 = (uVar31 * 4 - 4 >> 2) + 1 & 0xfffffffffffffffc;
        puVar30 = puVar26;
        do {
          uVar3 = *puVar23;
          uVar4 = puVar23[1];
          uVar5 = puVar23[2];
          uVar6 = puVar23[3];
          uVar34 = -(uint)(iVar14 < (int)(uVar3 & uVar10 ^ uVar18));
          uVar35 = -(uint)(iVar15 < (int)(uVar4 & uVar11 ^ uVar19));
          uVar36 = -(uint)(iVar16 < (int)(uVar5 & uVar12 ^ uVar20));
          uVar37 = -(uint)(iVar17 < (int)(uVar6 & uVar13 ^ uVar21));
          *puVar30 = ~uVar34 & uVar3 | (uVar3 & uVar18 | uVar28) & uVar34;
          puVar30[1] = ~uVar35 & uVar4 | (uVar4 & uVar19 | uVar7) & uVar35;
          puVar30[2] = ~uVar36 & uVar5 | (uVar5 & uVar20 | uVar8) & uVar36;
          puVar30[3] = ~uVar37 & uVar6 | (uVar6 & uVar21 | uVar9) & uVar37;
          puVar23 = puVar23 + 4;
          puVar30 = puVar30 + 4;
          uVar29 = uVar29 - 4;
          uVar22 = uVar32;
          puVar25 = puVar26 + uVar32;
        } while (uVar29 != 0);
      }
      if (uVar24 + 1 != uVar22) {
        do {
          uVar28 = *puVar27;
          if (0x3f800000 < (uVar28 & 0x7fffffff)) {
            uVar28 = uVar28 & 0x80000000 | 0x3f800000;
          }
          *puVar25 = uVar28;
          puVar27 = puVar27 + 1;
          puVar25 = puVar25 + 1;
        } while ((uint *)(param_3 + (uVar33 + uVar31) * 4) != puVar27);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100372fcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1011c6e18)(iVar1,uVar2,puVar26);
  return;
}

