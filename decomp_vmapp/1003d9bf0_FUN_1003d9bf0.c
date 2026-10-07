
undefined8 FUN_1003d9bf0(uint *param_1,int *param_2,long param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  
  uVar15 = param_1[3];
  uVar8 = *(uint *)(&DAT_100b3f714 + (ulong)*param_1 * 8) >> 0x18;
  iVar1 = param_2[2];
  iVar2 = *param_2;
  iVar3 = *param_4;
  iVar14 = param_4[1];
  iVar9 = param_2[3] - param_2[1];
  uVar12 = (ulong)(iVar2 * uVar8 + param_2[1] * uVar15);
  uVar16 = (ulong)*(uint *)(param_3 + 0xc);
  uVar10 = iVar1 - iVar2;
  iVar4 = param_4[2];
  uVar19 = iVar4 - iVar3;
  iVar17 = param_4[3];
  uVar6 = iVar17 - iVar14;
  puVar18 = (undefined4 *)
            ((ulong)(iVar3 * uVar8 + *(uint *)(param_3 + 0xc) * iVar14) + *(long *)(param_3 + 0x10))
  ;
  lVar5 = *(long *)(param_1 + 4);
  if (uVar8 == 1) {
    if (iVar17 != iVar14) {
      uVar8 = 0;
      while( true ) {
        if (iVar4 != iVar3) {
          lVar7 = (int)((ulong)((uVar8 * 2 + 1) * iVar9) / (ulong)uVar6 >> 1) * uVar15 + uVar12;
          bVar23 = (iVar4 - iVar3 & 1U) != 0;
          puVar13 = puVar18;
          if (bVar23) {
            *(undefined1 *)puVar18 =
                 *(undefined1 *)(lVar5 + ((ulong)uVar10 / (ulong)uVar19 >> 1) + lVar7);
            puVar13 = (undefined4 *)((long)puVar18 + 1);
          }
          uVar15 = (uint)bVar23;
          if (iVar4 + -1 != iVar3) {
            iVar17 = (iVar4 - iVar3) - uVar15;
            iVar14 = 0;
            do {
              *(undefined1 *)puVar13 =
                   *(undefined1 *)
                    (lVar5 + ((ulong)((uVar15 * 2 + 1) * (iVar1 - iVar2) + iVar14) / (ulong)uVar19
                             >> 1) + lVar7);
              *(undefined1 *)((long)puVar13 + 1) =
                   *(undefined1 *)
                    (lVar5 + ((ulong)((uVar15 * 2 + 3) * (iVar1 - iVar2) + iVar14) / (ulong)uVar19
                             >> 1) + lVar7);
              iVar14 = iVar14 + iVar1 * 4 + iVar2 * -4;
              puVar13 = (undefined4 *)((long)puVar13 + 2);
              iVar17 = iVar17 + -2;
            } while (iVar17 != 0);
          }
          uVar16 = (ulong)*(uint *)(param_3 + 0xc);
        }
        uVar8 = uVar8 + 1;
        if (uVar8 == uVar6) break;
        puVar18 = (undefined4 *)((long)puVar18 + uVar16);
        uVar15 = param_1[3];
      }
    }
  }
  else if (uVar8 == 2) {
    if (iVar17 != iVar14) {
      uVar8 = 0;
      do {
        if (iVar4 != iVar3) {
          lVar7 = (int)((ulong)((uVar8 * 2 + 1) * iVar9) / (ulong)uVar6 >> 1) * uVar15 + uVar12 +
                  lVar5;
          bVar23 = (iVar4 - iVar3 & 1U) != 0;
          puVar13 = puVar18;
          if (bVar23) {
            *(undefined2 *)puVar18 = *(undefined2 *)(lVar7 + (ulong)(uVar10 / uVar19 & 0xfffffffe));
            puVar13 = (undefined4 *)((long)puVar18 + 2);
          }
          uVar11 = (uint)bVar23;
          if (iVar4 + -1 != iVar3) {
            iVar14 = (iVar4 - iVar3) - uVar11;
            iVar17 = 0;
            do {
              *(undefined2 *)puVar13 =
                   *(undefined2 *)
                    (lVar7 + (ulong)(((uVar11 * 2 + 1) * (iVar1 - iVar2) + iVar17) / uVar19 &
                                    0xfffffffe));
              *(undefined2 *)((long)puVar13 + 2) =
                   *(undefined2 *)
                    (lVar7 + (ulong)(((uVar11 * 2 + 3) * (iVar1 - iVar2) + iVar17) / uVar19 &
                                    0xfffffffe));
              iVar17 = iVar17 + iVar1 * 4 + iVar2 * -4;
              puVar13 = puVar13 + 1;
              iVar14 = iVar14 + -2;
            } while (iVar14 != 0);
          }
        }
        puVar18 = (undefined4 *)((long)puVar18 + uVar16);
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar6);
    }
  }
  else if (uVar8 == 4) {
    if (iVar17 != iVar14) {
      uVar8 = 0;
      while( true ) {
        if (iVar4 != iVar3) {
          lVar7 = (int)((ulong)((uVar8 * 2 + 1) * iVar9) / (ulong)uVar6 >> 1) * uVar15 + uVar12 +
                  lVar5;
          bVar23 = (iVar4 - iVar3 & 1U) != 0;
          puVar13 = puVar18;
          if (bVar23) {
            *puVar18 = *(undefined4 *)(lVar7 + ((ulong)uVar10 / (ulong)uVar19 >> 1) * 4);
            puVar13 = puVar18 + 1;
          }
          uVar15 = (uint)bVar23;
          if (iVar4 + -1 != iVar3) {
            iVar17 = (iVar4 - iVar3) - uVar15;
            iVar14 = 0;
            do {
              *puVar13 = *(undefined4 *)
                          (lVar7 + ((ulong)((uVar15 * 2 + 1) * (iVar1 - iVar2) + iVar14) /
                                    (ulong)uVar19 >> 1) * 4);
              puVar13[1] = *(undefined4 *)
                            (lVar7 + ((ulong)((uVar15 * 2 + 3) * (iVar1 - iVar2) + iVar14) /
                                      (ulong)uVar19 >> 1) * 4);
              iVar14 = iVar14 + iVar1 * 4 + iVar2 * -4;
              puVar13 = puVar13 + 2;
              iVar17 = iVar17 + -2;
            } while (iVar17 != 0);
          }
          uVar16 = (ulong)*(uint *)(param_3 + 0xc);
        }
        uVar8 = uVar8 + 1;
        if (uVar8 == uVar6) break;
        puVar18 = (undefined4 *)((long)puVar18 + uVar16);
        uVar15 = param_1[3];
      }
    }
  }
  else if (iVar17 != iVar14) {
    uVar11 = 0;
    while( true ) {
      if (iVar4 != iVar3) {
        uVar22 = 0;
        uVar21 = uVar10;
        uVar20 = uVar19;
        do {
          _memcpy((undefined1 *)((ulong)uVar22 + (long)puVar18),
                  (void *)((ulong)((int)((ulong)uVar21 / (ulong)uVar19 >> 1) * uVar8) +
                           (int)((ulong)((uVar11 * 2 + 1) * iVar9) / (ulong)uVar6 >> 1) * uVar15 +
                           uVar12 + lVar5),(ulong)uVar8);
          uVar22 = uVar22 + uVar8;
          uVar21 = uVar21 + iVar1 * 2 + iVar2 * -2;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
        uVar16 = (ulong)*(uint *)(param_3 + 0xc);
      }
      uVar11 = uVar11 + 1;
      if (uVar11 == uVar6) break;
      puVar18 = (undefined4 *)((long)puVar18 + uVar16);
      uVar15 = param_1[3];
    }
  }
  return 1;
}

