
undefined8 FUN_100c33df0(ulong *param_1,ulong *param_2,ulong *param_3)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
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
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  undefined8 *puVar24;
  int iVar25;
  uint *puVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  long *plVar30;
  ulong *puVar31;
  uint *puVar32;
  uint *puVar33;
  ulong uVar34;
  long lVar35;
  undefined8 *puVar36;
  long lVar37;
  
  puVar31 = param_3;
  if ((int)param_2[1] < (int)param_3[1]) {
    puVar31 = param_2;
    param_2 = param_3;
  }
  if ((*(int *)((long)param_1 + 0xc) < (int)param_2[1]) && (lVar22 = FUN_100c26b00(), lVar22 == 0))
  {
    return 0;
  }
  iVar25 = (int)puVar31[1];
  uVar27 = (ulong)iVar25;
  iVar21 = 0;
  if (0 < (long)uVar27) {
    uVar2 = *param_2;
    uVar28 = *puVar31;
    uVar29 = *param_1;
    uVar34 = 0;
    if (iVar25 == 0) {
LAB_100c33ef0:
      do {
        *(ulong *)(uVar29 + uVar34 * 8) =
             *(ulong *)(uVar28 + uVar34 * 8) ^ *(ulong *)(uVar2 + uVar34 * 8);
        uVar34 = uVar34 + 1;
      } while ((long)uVar34 < (long)uVar27);
    }
    else {
      uVar34 = 0;
      if ((uVar27 & 0xfffffffffffffffc) != 0) {
        uVar23 = (uVar29 - 8) + uVar27 * 8;
        uVar34 = 0;
        if ((uVar23 < uVar2 || uVar2 + (uVar27 - 1) * 8 < uVar29) &&
           (uVar28 + (uVar27 - 1) * 8 < uVar29 || uVar23 < uVar28)) {
          puVar33 = (uint *)(uVar29 + 0x10);
          puVar32 = (uint *)(uVar28 + 0x10);
          puVar26 = (uint *)(uVar2 + 0x10);
          uVar23 = uVar27 & 0xfffffffffffffffc;
          do {
            uVar4 = puVar26[-3];
            uVar5 = puVar26[-2];
            uVar6 = puVar26[-1];
            uVar7 = *puVar26;
            uVar8 = puVar26[1];
            uVar9 = puVar26[2];
            uVar10 = puVar26[3];
            uVar11 = puVar32[-3];
            uVar12 = puVar32[-2];
            uVar13 = puVar32[-1];
            uVar14 = *puVar32;
            uVar15 = puVar32[1];
            uVar16 = puVar32[2];
            uVar17 = puVar32[3];
            puVar33[-4] = puVar32[-4] ^ puVar26[-4];
            puVar33[-3] = uVar11 ^ uVar4;
            puVar33[-2] = uVar12 ^ uVar5;
            puVar33[-1] = uVar13 ^ uVar6;
            *puVar33 = uVar14 ^ uVar7;
            puVar33[1] = uVar15 ^ uVar8;
            puVar33[2] = uVar16 ^ uVar9;
            puVar33[3] = uVar17 ^ uVar10;
            puVar33 = puVar33 + 8;
            puVar32 = puVar32 + 8;
            puVar26 = puVar26 + 8;
            uVar23 = uVar23 - 4;
            uVar34 = uVar27 & 0xfffffffffffffffc;
          } while (uVar23 != 0);
        }
      }
      if (uVar27 != uVar34) goto LAB_100c33ef0;
    }
    iVar21 = 1;
    if (1 < iVar25) {
      iVar21 = iVar25;
    }
  }
  iVar25 = (int)param_2[1];
  lVar22 = (long)iVar25;
  if (iVar21 < iVar25) {
    uVar27 = *param_2;
    uVar2 = *param_1;
    lVar35 = (long)iVar21;
    lVar1 = lVar22 + -1;
    lVar37 = lVar35;
    if (lVar1 - lVar35 != -1) {
      uVar28 = lVar22 - lVar35;
      uVar29 = uVar28 & 0xfffffffffffffffc;
      if ((uVar29 != 0) &&
         ((uVar27 + lVar1 * 8 < uVar2 + lVar35 * 8 || (uVar2 + lVar1 * 8 < uVar27 + lVar35 * 8)))) {
        lVar37 = (uVar28 & 0xfffffffffffffffc) + lVar35;
        puVar24 = (undefined8 *)(uVar2 + 0x10 + lVar35 * 8);
        puVar36 = (undefined8 *)(uVar27 + 0x10 + lVar35 * 8);
        do {
          uVar18 = puVar36[-1];
          uVar19 = *puVar36;
          uVar20 = puVar36[1];
          puVar24[-2] = puVar36[-2];
          puVar24[-1] = uVar18;
          *puVar24 = uVar19;
          puVar24[1] = uVar20;
          puVar24 = puVar24 + 4;
          puVar36 = puVar36 + 4;
          uVar29 = uVar29 - 4;
        } while (uVar29 != 0);
      }
      if (uVar28 + lVar35 == lVar37) goto LAB_100c33fc0;
    }
    do {
      *(undefined8 *)(uVar2 + lVar37 * 8) = *(undefined8 *)(uVar27 + lVar37 * 8);
      lVar37 = lVar37 + 1;
    } while (lVar37 < lVar22);
  }
LAB_100c33fc0:
  *(int *)(param_1 + 1) = iVar25;
  if (0 < iVar25) {
    plVar30 = (long *)((*param_1 - 8) + lVar22 * 8);
    do {
      iVar21 = iVar25;
      if (*plVar30 != 0) break;
      plVar30 = plVar30 + -1;
      iVar21 = iVar25 + -1;
      bVar3 = 1 < iVar25;
      iVar25 = iVar21;
    } while (bVar3);
    *(int *)(param_1 + 1) = iVar21;
  }
  return 1;
}

