
undefined8 FUN_100744610(byte *param_1,uint param_2,undefined8 *param_3,uint *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  byte bVar18;
  ulong uVar19;
  byte *pbVar20;
  ulong uVar21;
  undefined8 *puVar22;
  byte *pbVar23;
  undefined1 *puVar24;
  
  puVar22 = param_3;
  if (param_2 != 0) {
    pbVar23 = param_1 + param_2;
    puVar24 = (undefined1 *)((ulong)*param_4 + (long)param_3);
    do {
      bVar18 = *param_1;
      if ((bVar18 & 0x80) == 0) {
        bVar18 = bVar18 + 1;
        uVar10 = (int)pbVar23 - (int)(param_1 + 1);
        uVar14 = (ulong)bVar18;
        if (uVar10 < bVar18) {
          return 0xffffffff;
        }
        uVar13 = (int)puVar24 - (int)puVar22;
        if (uVar13 < bVar18) {
          return 0xfffffffe;
        }
        if (((uVar13 < 0x10) || (uVar10 < 0x10)) || (0x10 < bVar18)) {
          _memcpy(puVar22,param_1 + 1,uVar14);
        }
        else {
          *puVar22 = *(undefined8 *)(param_1 + 1);
          puVar22[1] = *(undefined8 *)(param_1 + 9);
        }
        pbVar20 = param_1 + uVar14 + 1;
        puVar22 = (undefined8 *)((long)puVar22 + uVar14);
      }
      else {
        uVar10 = bVar18 >> 4 & 7;
        if (uVar10 == 7) {
          pbVar20 = param_1 + 3;
          if (pbVar23 < pbVar20) {
            return 0xffffffff;
          }
          bVar3 = param_1[2];
          uVar14 = (ulong)bVar3;
          if (puVar24 < (undefined1 *)((long)puVar22 + uVar14 * 4 + 0xc)) {
            return 0xfffffffe;
          }
          uVar13 = (uint)param_1[1] | (bVar18 & 0xf) << 8;
          uVar10 = uVar13 + 1;
          puVar17 = (undefined8 *)((long)puVar22 - (ulong)uVar10);
          if (puVar17 < param_3) {
            return 0xffffffff;
          }
          if (3 < uVar10) {
            uVar8 = uVar14 + 3;
            puVar12 = puVar22;
            if ((bVar3 + 3 & 7) != 0) {
              lVar15 = -(ulong)(uVar13 + 1);
              iVar11 = -((byte)(bVar3 + 3) & 7);
              puVar17 = puVar22;
              do {
                puVar12 = puVar17;
                *(undefined4 *)puVar12 = *(undefined4 *)(lVar15 + (long)puVar12);
                uVar8 = (ulong)((int)uVar8 - 1);
                iVar11 = iVar11 + 1;
                puVar17 = (undefined8 *)((long)puVar12 + 4);
              } while (iVar11 != 0);
              puVar17 = (undefined8 *)((long)puVar12 + lVar15 + 4);
              puVar12 = (undefined8 *)((long)puVar12 + 4);
            }
            if (6 < bVar3 + 2) {
              do {
                *(undefined4 *)puVar12 = *(undefined4 *)puVar17;
                *(undefined4 *)((long)puVar12 + 4) = *(undefined4 *)((long)puVar17 + 4);
                *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar17 + 1);
                *(undefined4 *)((long)puVar12 + 0xc) = *(undefined4 *)((long)puVar17 + 0xc);
                *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(puVar17 + 2);
                *(undefined4 *)((long)puVar12 + 0x14) = *(undefined4 *)((long)puVar17 + 0x14);
                *(undefined4 *)(puVar12 + 3) = *(undefined4 *)(puVar17 + 3);
                *(undefined4 *)((long)puVar12 + 0x1c) = *(undefined4 *)((long)puVar17 + 0x1c);
                puVar17 = puVar17 + 4;
                puVar12 = puVar12 + 4;
                uVar10 = (int)uVar8 - 8;
                uVar8 = (ulong)uVar10;
              } while (uVar10 != 0);
            }
            puVar22 = (undefined8 *)(uVar14 * 4 + 0xc + (long)puVar22);
            goto LAB_100744950;
          }
          uVar14 = uVar14 * 4 + 0xc;
        }
        else {
          pbVar20 = param_1 + 2;
          if (pbVar23 < pbVar20) {
            return 0xffffffff;
          }
          uVar14 = (ulong)(uVar10 + 4);
          if (puVar24 < (undefined1 *)((long)puVar22 + uVar14)) {
            return 0xfffffffe;
          }
          uVar10 = ((uint)param_1[1] | (bVar18 & 0xf) << 8) + 1;
          if ((undefined8 *)((long)puVar22 - (ulong)uVar10) < param_3) {
            return 0xffffffff;
          }
        }
        uVar8 = (ulong)uVar10;
        lVar15 = -uVar8;
        uVar19 = (ulong)((int)uVar14 - 1);
        uVar21 = uVar19 + 1 & 0x1ffffffe0;
        if ((uVar21 == 0) ||
           ((puVar22 <= (undefined8 *)((uVar19 - uVar8) + (long)puVar22) &&
            ((undefined1 *)((long)puVar22 - uVar8) <= (undefined1 *)((long)puVar22 + uVar19))))) {
          uVar21 = 0;
          puVar17 = puVar22;
        }
        else {
          lVar15 = uVar21 - uVar8;
          uVar14 = (ulong)(uint)((int)uVar14 - (int)uVar21);
          puVar17 = (undefined8 *)((long)puVar22 + uVar21);
          puVar12 = puVar22 + 2;
          uVar16 = uVar19 + 1 & 0xffffffffffffffe0;
          do {
            puVar2 = (undefined8 *)(-uVar8 + -0x10 + (long)puVar12);
            uVar5 = puVar2[1];
            puVar1 = (undefined8 *)(-uVar8 + (long)puVar12);
            uVar6 = *puVar1;
            uVar7 = puVar1[1];
            puVar12[-2] = *puVar2;
            puVar12[-1] = uVar5;
            *puVar12 = uVar6;
            puVar12[1] = uVar7;
            puVar12 = puVar12 + 4;
            uVar16 = uVar16 - 0x20;
          } while (uVar16 != 0);
        }
        puVar9 = (undefined1 *)((long)puVar22 + lVar15);
        if (uVar19 + 1 != uVar21) {
          uVar10 = (uint)uVar14;
          if ((uVar14 & 7) != 0) {
            iVar11 = -(uVar10 & 7);
            do {
              uVar4 = *puVar9;
              puVar9 = puVar9 + 1;
              *(undefined1 *)puVar17 = uVar4;
              puVar17 = (undefined8 *)((long)puVar17 + 1);
              uVar14 = (ulong)((int)uVar14 - 1);
              iVar11 = iVar11 + 1;
            } while (iVar11 != 0);
          }
          if (6 < uVar10 - 1) {
            do {
              *(undefined1 *)puVar17 = *puVar9;
              *(undefined1 *)((long)puVar17 + 1) = puVar9[1];
              *(undefined1 *)((long)puVar17 + 2) = puVar9[2];
              *(undefined1 *)((long)puVar17 + 3) = puVar9[3];
              *(undefined1 *)((long)puVar17 + 4) = puVar9[4];
              *(undefined1 *)((long)puVar17 + 5) = puVar9[5];
              *(undefined1 *)((long)puVar17 + 6) = puVar9[6];
              *(undefined1 *)((long)puVar17 + 7) = puVar9[7];
              puVar9 = puVar9 + 8;
              puVar17 = puVar17 + 1;
              uVar10 = (int)uVar14 - 8;
              uVar14 = (ulong)uVar10;
            } while (uVar10 != 0);
          }
        }
        puVar22 = (undefined8 *)(uVar19 + 1 + (long)puVar22);
      }
LAB_100744950:
      param_1 = pbVar20;
    } while (pbVar20 < pbVar23);
  }
  *param_4 = (int)puVar22 - (int)param_3;
  return 0;
}

