
int FUN_10074b050(byte *param_1,undefined8 *param_2,int param_3,int param_4,int param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  uint uVar19;
  size_t sVar20;
  undefined1 *puVar21;
  byte *pbVar22;
  ulong uVar23;
  undefined1 *puVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  bool bVar30;
  
  lVar11 = (long)param_5;
  lVar1 = lVar11 + -0xc;
  lVar26 = (long)param_4;
  if (lVar1 < param_4) {
    lVar26 = lVar1;
  }
  if (param_5 == 0) {
    bVar30 = true;
    if (param_3 == 1) {
      bVar30 = *param_1 != 0;
    }
    return (int)((uint)bVar30 << 0x1f) >> 0x1f;
  }
  puVar2 = (undefined8 *)(lVar11 + -8 + (long)param_2);
  puVar12 = param_2;
  pbVar22 = param_1;
LAB_10074b2c0:
  do {
    puVar13 = puVar12;
    bVar5 = *pbVar22;
    uVar19 = (uint)(bVar5 >> 4);
    sVar20 = (size_t)uVar19;
    pbVar15 = pbVar22 + 1;
    pbVar18 = pbVar22;
    pbVar22 = pbVar22 + 1;
    if (uVar19 == 0xf) {
      do {
        pbVar14 = pbVar15;
        pbVar22 = pbVar18 + 2;
        bVar6 = *pbVar14;
        sVar20 = sVar20 + bVar6;
        if (param_1 + (long)param_3 + -0xf <= pbVar22) break;
        pbVar15 = pbVar22;
        pbVar18 = pbVar14;
      } while (bVar6 == 0xff);
      if (((long)sVar20 < 0) || ((long)(sVar20 + 2) < 2)) goto LAB_10074b3a6;
    }
    puVar29 = (undefined8 *)((long)puVar13 + sVar20);
    if (((undefined8 *)(lVar26 + (long)param_2) < puVar29) ||
       (pbVar15 = pbVar22, puVar12 = puVar13, param_1 + (long)param_3 + -8 < pbVar22 + sVar20)) {
      if ((puVar29 <= (undefined8 *)((long)param_2 + lVar11)) &&
         (pbVar22 + sVar20 <= param_1 + param_3)) {
        _memcpy(puVar13,pbVar22,sVar20);
        return (int)puVar29 - (int)param_2;
      }
LAB_10074b3a6:
      return ((int)param_1 - (int)pbVar22) + -1;
    }
    do {
      *puVar12 = *(undefined8 *)pbVar15;
      puVar12 = puVar12 + 1;
      pbVar15 = pbVar15 + 8;
    } while (puVar12 < puVar29);
    lVar25 = sVar20 - *(ushort *)(pbVar22 + sVar20);
    puVar28 = (undefined8 *)((long)puVar13 + lVar25);
    pbVar22 = pbVar22 + sVar20 + 2;
    if (puVar28 < param_2) goto LAB_10074b3a6;
    uVar19 = bVar5 & 0xf;
    uVar23 = (ulong)uVar19;
    if (uVar19 == 0xf) {
      uVar23 = 0xf;
      do {
        if (param_1 + (long)param_3 + -5 < pbVar22) goto LAB_10074b3a6;
        bVar5 = *pbVar22;
        pbVar22 = pbVar22 + 1;
        uVar23 = uVar23 + bVar5;
      } while ((ulong)bVar5 == 0xff);
      if ((long)(uVar23 + sVar20) < (long)sVar20) goto LAB_10074b3a6;
    }
    puVar12 = (undefined8 *)(sVar20 + 4 + uVar23 + (long)puVar13);
    lVar27 = (long)puVar29 - (long)puVar28;
    if (lVar27 < 8) {
      *(undefined1 *)((long)puVar13 + sVar20) = *(undefined1 *)((long)puVar13 + lVar25);
      *(undefined1 *)((long)puVar13 + sVar20 + 1) = *(undefined1 *)((long)puVar13 + lVar25 + 1);
      *(undefined1 *)((long)puVar13 + sVar20 + 2) = *(undefined1 *)((long)puVar13 + lVar25 + 2);
      *(undefined1 *)((long)puVar13 + sVar20 + 3) = *(undefined1 *)((long)puVar13 + lVar25 + 3);
      lVar7 = *(long *)(&DAT_100b4ac60 + lVar27 * 8);
      *(undefined4 *)((long)puVar13 + sVar20 + 4) = *(undefined4 *)((long)puVar13 + lVar25 + lVar7);
      puVar24 = (undefined1 *)((lVar25 + lVar7) - *(long *)(&DAT_100b4aca0 + lVar27 * 8));
    }
    else {
      *puVar29 = *puVar28;
      puVar24 = (undefined1 *)(lVar25 + 8);
    }
    puVar29 = (undefined8 *)((long)puVar13 + (long)puVar24);
    puVar28 = (undefined8 *)(sVar20 + 8 + (long)puVar13);
    if (puVar12 <= (undefined8 *)(lVar1 + (long)param_2)) {
      do {
        *puVar28 = *puVar29;
        puVar28 = puVar28 + 1;
        puVar29 = puVar29 + 1;
      } while (puVar28 < puVar12);
      goto LAB_10074b2c0;
    }
    if ((undefined8 *)(lVar11 + -5 + (long)param_2) < puVar12) goto LAB_10074b3a6;
    puVar16 = puVar28;
    if (puVar28 < puVar2) {
      do {
        *puVar16 = *puVar29;
        puVar16 = puVar16 + 1;
        puVar29 = puVar29 + 1;
      } while (puVar16 < puVar2);
      puVar24 = (undefined1 *)((long)puVar2 + ((long)puVar24 - (long)puVar28));
      puVar29 = (undefined8 *)((long)puVar13 + (long)puVar24);
      puVar28 = puVar2;
    }
  } while (puVar12 <= puVar28);
  lVar27 = uVar23 + sVar20;
  lVar25 = lVar27 - (long)puVar28;
  puVar16 = puVar28;
  if ((undefined1 *)(lVar25 + (long)puVar13) != (undefined1 *)0xfffffffffffffffc) {
    puVar3 = (undefined1 *)(lVar25 + 4 + (long)puVar13);
    puVar21 = (undefined1 *)((ulong)puVar3 & 0xffffffffffffffe0);
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = (undefined1 *)0x0;
    }
    else if (((undefined8 *)((long)puVar29 + (long)((long)puVar13 + lVar25 + 3)) < puVar28) ||
            ((undefined8 *)(lVar27 + 3 + (long)puVar13) < puVar29)) {
      puVar29 = (undefined8 *)(puVar21 + (long)puVar24 + (long)puVar13);
      puVar16 = (undefined8 *)((long)puVar28 + (long)puVar21);
      puVar28 = puVar28 + 2;
      puVar17 = (undefined8 *)((long)puVar13 + (long)(puVar24 + 0x10));
      uVar23 = (ulong)puVar3 & 0xffffffffffffffe0;
      do {
        uVar8 = puVar17[-1];
        uVar9 = *puVar17;
        uVar10 = puVar17[1];
        puVar28[-2] = puVar17[-2];
        puVar28[-1] = uVar8;
        *puVar28 = uVar9;
        puVar28[1] = uVar10;
        puVar28 = puVar28 + 4;
        puVar17 = puVar17 + 4;
        uVar23 = uVar23 - 0x20;
      } while (uVar23 != 0);
    }
    else {
      puVar21 = (undefined1 *)0x0;
    }
    if (puVar3 == puVar21) goto LAB_10074b2c0;
  }
  puVar24 = (undefined1 *)((long)puVar16 + -4);
  do {
    uVar4 = *(undefined1 *)puVar29;
    puVar29 = (undefined8 *)((long)puVar29 + 1);
    puVar24[4] = uVar4;
    puVar24 = puVar24 + 1;
  } while ((undefined1 *)((long)puVar13 + lVar27) != puVar24);
  goto LAB_10074b2c0;
}

