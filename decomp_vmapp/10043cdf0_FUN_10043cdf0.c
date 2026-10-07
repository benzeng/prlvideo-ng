
void FUN_10043cdf0(int *param_1,long *param_2,ulong param_3,uint param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  undefined4 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 *puVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  uint *puVar22;
  undefined4 *puVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  bool bVar27;
  uint local_64;
  undefined4 local_38;
  uint local_34;
  
  uVar3 = *(uint *)(param_2 + 1);
  uVar7 = *(uint *)((long)param_2 + 0xc);
  uVar24 = uVar7 + 4;
  if ((uVar24 <= uVar3) || (local_64 = 0, uVar3 - uVar7 == 4)) {
    lVar8 = *param_2;
    local_64 = (uint)*(byte *)(lVar8 + (ulong)(uVar7 + 2)) << 8 |
               (uint)*(byte *)(lVar8 + (ulong)(uVar7 + 1)) << 0x10 |
               (uint)*(byte *)(lVar8 + (ulong)uVar7) << 0x18 |
               (uint)*(byte *)(lVar8 + (ulong)(uVar7 + 3));
    *(uint *)((long)param_2 + 0xc) = uVar24;
    uVar7 = uVar24;
  }
  uVar24 = 4;
  if (uVar3 < uVar7 + 4) {
    uVar24 = uVar3 - uVar7;
  }
  if (uVar24 != 0) {
    _memcpy(&local_34,(void *)((ulong)uVar7 + *param_2),(ulong)uVar24);
    *(uint *)((long)param_2 + 0xc) = uVar24 + uVar7;
    uVar3 = local_34;
  }
  iVar5 = *param_1;
  uVar14 = (ulong)(param_1[1] * param_4);
  lVar8 = (long)iVar5;
  puVar16 = (uint *)(param_3 + uVar14 + lVar8 * 4);
  puVar22 = (uint *)((ulong)(((1 - param_1[1]) + param_1[3]) * param_4) + (long)puVar16);
  if (puVar16 < puVar22) {
    uVar21 = (ulong)param_4;
    lVar26 = 0;
    while( true ) {
      iVar6 = (1 - iVar5) + param_1[2];
      if (0 < iVar6) {
        lVar12 = uVar21 * lVar26 + uVar14;
        uVar10 = param_3 + 4 + lVar8 * 4 + lVar12;
        uVar13 = lVar12 + (long)((param_1[2] + 1) - iVar5) * 4 + param_3 + lVar8 * 4;
        if (uVar13 < uVar10) {
          uVar13 = uVar10;
        }
        uVar13 = (lVar26 * -uVar21 + (~param_3 - uVar14) + uVar13 + lVar8 * -4 >> 2) + 1;
        uVar19 = uVar13 & 0x7ffffffffffffff8;
        puVar9 = puVar16;
        uVar10 = 0;
        if (uVar19 != 0) {
          puVar9 = puVar16 + uVar19;
          uVar25 = 0;
          do {
            puVar1 = puVar16 + uVar25;
            *puVar1 = uVar3;
            puVar1[1] = uVar3;
            puVar1[2] = uVar3;
            puVar1[3] = uVar3;
            puVar1 = puVar16 + uVar25 + 4;
            *puVar1 = uVar3;
            puVar1[1] = uVar3;
            puVar1[2] = uVar3;
            puVar1[3] = uVar3;
            uVar25 = uVar25 + 8;
            uVar10 = uVar19;
          } while ((uVar13 & 0xfffffffffffffff8) != uVar25);
        }
        if (uVar13 != uVar10) {
          do {
            *puVar9 = uVar3;
            puVar9 = puVar9 + 1;
          } while (puVar9 < puVar16 + iVar6);
        }
      }
      puVar16 = (uint *)((long)puVar16 + uVar21);
      if (puVar22 <= puVar16) break;
      iVar5 = *param_1;
      lVar26 = lVar26 + 1;
    }
  }
  if (0 < (int)local_64) {
    uVar14 = (ulong)param_4;
    iVar5 = 0;
    do {
      uVar3 = *(uint *)(param_2 + 1);
      uVar7 = *(uint *)((long)param_2 + 0xc);
      uVar21 = (ulong)uVar7;
      uVar24 = uVar3 - uVar7;
      uVar4 = 4;
      if (uVar7 + 4 <= uVar3) {
        uVar24 = 4;
      }
      if (uVar24 != 0) {
        _memcpy(&local_38,(void *)(*param_2 + uVar21),(ulong)uVar24);
        uVar21 = (ulong)(uVar7 + uVar24);
        *(uint *)((long)param_2 + 0xc) = uVar7 + uVar24;
        uVar4 = local_38;
      }
      uVar7 = (uint)uVar21;
      uVar24 = uVar7 + 2;
      if ((uVar24 <= uVar3) || (uVar15 = 0, uVar3 - uVar7 == 2)) {
        uVar15 = (uint)CONCAT11(*(undefined1 *)(*param_2 + uVar21),
                                *(undefined1 *)(*param_2 + (ulong)(uVar7 + 1)));
        *(uint *)((long)param_2 + 0xc) = uVar24;
        uVar7 = uVar24;
      }
      uVar24 = uVar7 + 2;
      if ((uVar24 <= uVar3) || (uVar18 = 0, uVar3 - uVar7 == 2)) {
        uVar18 = (uint)CONCAT11(*(undefined1 *)(*param_2 + (ulong)uVar7),
                                *(undefined1 *)(*param_2 + (ulong)(uVar7 + 1)));
        *(uint *)((long)param_2 + 0xc) = uVar24;
        uVar7 = uVar24;
      }
      uVar24 = uVar7 + 2;
      if ((uVar24 <= uVar3) || (uVar21 = 0, uVar3 - uVar7 == 2)) {
        uVar21 = (ulong)CONCAT11(*(undefined1 *)(*param_2 + (ulong)uVar7),
                                 *(undefined1 *)(*param_2 + (ulong)(uVar7 + 1)));
        *(uint *)((long)param_2 + 0xc) = uVar24;
        uVar7 = uVar24;
      }
      if ((uVar7 + 2 <= uVar3) || (uVar24 = 0, uVar3 - uVar7 == 2)) {
        uVar24 = (uint)CONCAT11(*(undefined1 *)(*param_2 + (ulong)uVar7),
                                *(undefined1 *)(*param_2 + (ulong)(uVar7 + 1)));
        *(uint *)((long)param_2 + 0xc) = uVar7 + 2;
      }
      uVar10 = (ulong)((uVar18 + param_1[1]) * param_4);
      lVar8 = (long)(int)(uVar15 + *param_1);
      puVar23 = (undefined4 *)(param_3 + uVar10 + lVar8 * 4);
      puVar17 = (undefined4 *)((ulong)(uVar24 * param_4) + (long)puVar23);
      if (puVar23 < puVar17) {
        lVar26 = 0;
        while( true ) {
          lVar12 = uVar14 * lVar26 + uVar10;
          uVar13 = param_3 + (lVar8 + uVar21) * 4 + lVar12;
          uVar19 = lVar12 + param_3 + 4 + lVar8 * 4;
          if (uVar19 < uVar13) {
            uVar19 = uVar13;
          }
          if ((int)uVar21 != 0) {
            uVar19 = (lVar26 * -uVar14 + (~param_3 - uVar10) + uVar19 + lVar8 * -4 >> 2) + 1;
            uVar25 = uVar19 & 0x7ffffffffffffff8;
            uVar13 = 0;
            puVar11 = puVar23;
            if (uVar25 != 0) {
              puVar11 = puVar23 + uVar25;
              uVar20 = 0;
              do {
                puVar2 = puVar23 + uVar20;
                *puVar2 = uVar4;
                puVar2[1] = uVar4;
                puVar2[2] = uVar4;
                puVar2[3] = uVar4;
                puVar2 = puVar23 + uVar20 + 4;
                *puVar2 = uVar4;
                puVar2[1] = uVar4;
                puVar2[2] = uVar4;
                puVar2[3] = uVar4;
                uVar20 = uVar20 + 8;
                uVar13 = uVar25;
              } while ((uVar19 & 0xfffffffffffffff8) != uVar20);
            }
            if (uVar19 != uVar13) {
              do {
                *puVar11 = uVar4;
                puVar11 = puVar11 + 1;
              } while (puVar11 < puVar23 + uVar21);
            }
          }
          puVar23 = (undefined4 *)((long)puVar23 + uVar14);
          if (puVar17 <= puVar23) break;
          lVar26 = lVar26 + 1;
        }
      }
      bVar27 = iVar5 != local_64 - 1;
      iVar5 = iVar5 + 1;
    } while (bVar27);
  }
  return;
}

