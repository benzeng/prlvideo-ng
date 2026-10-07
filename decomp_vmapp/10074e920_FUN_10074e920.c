
int FUN_10074e920(byte *param_1,undefined8 *param_2,int param_3,int param_4)

{
  ushort *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  byte *pbVar19;
  uint uVar20;
  undefined1 *puVar21;
  undefined8 *puVar22;
  size_t sVar23;
  byte *pbVar24;
  undefined8 *puVar25;
  long lVar26;
  undefined1 *puVar27;
  ulong uVar28;
  undefined8 *puVar29;
  bool bVar30;
  
  if (param_4 == 0) {
    bVar30 = true;
    if (param_3 == 1) {
      bVar30 = *param_1 != 0;
    }
    return (int)((uint)bVar30 << 0x1f) >> 0x1f;
  }
  lVar16 = (long)param_4;
  puVar2 = (undefined8 *)(lVar16 + -0xc + (long)param_2);
  puVar3 = (undefined8 *)(lVar16 + -8 + (long)param_2);
  puVar13 = param_2;
  pbVar24 = param_1;
LAB_10074ebb0:
  do {
    puVar14 = puVar13;
    bVar6 = *pbVar24;
    uVar20 = (uint)(bVar6 >> 4);
    sVar23 = (size_t)uVar20;
    pbVar12 = pbVar24 + 1;
    pbVar19 = pbVar24;
    pbVar24 = pbVar24 + 1;
    if (uVar20 == 0xf) {
      do {
        pbVar15 = pbVar12;
        pbVar24 = pbVar19 + 2;
        bVar7 = *pbVar15;
        sVar23 = sVar23 + bVar7;
        if (param_1 + (long)param_3 + -0xf <= pbVar24) break;
        pbVar12 = pbVar24;
        pbVar19 = pbVar15;
      } while (bVar7 == 0xff);
      if (((long)sVar23 < 0) || ((long)(sVar23 + 2) < 2)) goto LAB_10074ec3c;
    }
    puVar25 = (undefined8 *)((long)puVar14 + sVar23);
    if ((puVar2 < puVar25) ||
       (pbVar12 = pbVar24, puVar13 = puVar14, param_1 + (long)param_3 + -8 < pbVar24 + sVar23)) {
      if ((puVar25 <= (undefined8 *)((long)param_2 + lVar16)) &&
         (pbVar24 + sVar23 == param_1 + param_3)) {
        _memcpy(puVar14,pbVar24,sVar23);
        return (int)puVar25 - (int)param_2;
      }
LAB_10074ec3c:
      return ((int)param_1 - (int)pbVar24) + -1;
    }
    do {
      *puVar13 = *(undefined8 *)pbVar12;
      puVar13 = puVar13 + 1;
      pbVar12 = pbVar12 + 8;
    } while (puVar13 < puVar25);
    puVar1 = (ushort *)(pbVar24 + sVar23);
    pbVar24 = pbVar24 + sVar23 + 2;
    uVar20 = bVar6 & 0xf;
    uVar28 = (ulong)uVar20;
    if (uVar20 == 0xf) {
      uVar28 = 0xf;
      do {
        if (param_1 + (long)param_3 + -5 < pbVar24) goto LAB_10074ec3c;
        bVar6 = *pbVar24;
        pbVar24 = pbVar24 + 1;
        uVar28 = uVar28 + bVar6;
      } while ((ulong)bVar6 == 0xff);
      if ((long)(uVar28 + sVar23) < (long)sVar23) goto LAB_10074ec3c;
    }
    lVar26 = sVar23 - *puVar1;
    puVar13 = (undefined8 *)(sVar23 + 4 + uVar28 + (long)puVar14);
    lVar17 = (long)puVar25 - ((long)puVar14 + lVar26);
    if (lVar17 < 8) {
      *(undefined1 *)((long)puVar14 + sVar23) = *(undefined1 *)((long)puVar14 + lVar26);
      *(undefined1 *)((long)puVar14 + sVar23 + 1) = *(undefined1 *)((long)puVar14 + lVar26 + 1);
      *(undefined1 *)((long)puVar14 + sVar23 + 2) = *(undefined1 *)((long)puVar14 + lVar26 + 2);
      *(undefined1 *)((long)puVar14 + sVar23 + 3) = *(undefined1 *)((long)puVar14 + lVar26 + 3);
      lVar8 = *(long *)(&DAT_100b4ac60 + lVar17 * 8);
      *(undefined4 *)((long)puVar14 + sVar23 + 4) = *(undefined4 *)((long)puVar14 + lVar26 + lVar8);
      puVar27 = (undefined1 *)((lVar26 + lVar8) - *(long *)(&DAT_100b4aca0 + lVar17 * 8));
    }
    else {
      *puVar25 = *(undefined8 *)((long)puVar14 + lVar26);
      puVar27 = (undefined1 *)(lVar26 + 8);
    }
    puVar25 = (undefined8 *)((long)puVar14 + (long)puVar27);
    puVar29 = (undefined8 *)(sVar23 + 8 + (long)puVar14);
    if (puVar13 <= puVar2) {
      do {
        *puVar29 = *puVar25;
        puVar29 = puVar29 + 1;
        puVar25 = puVar25 + 1;
      } while (puVar29 < puVar13);
      goto LAB_10074ebb0;
    }
    if ((undefined8 *)(lVar16 + -5 + (long)param_2) < puVar13) goto LAB_10074ec3c;
    puVar18 = puVar29;
    if (puVar29 < puVar3) {
      do {
        *puVar18 = *puVar25;
        puVar18 = puVar18 + 1;
        puVar25 = puVar25 + 1;
      } while (puVar18 < puVar3);
      puVar27 = (undefined1 *)((long)puVar3 + ((long)puVar27 - (long)puVar29));
      puVar25 = (undefined8 *)((long)puVar14 + (long)puVar27);
      puVar29 = puVar3;
    }
  } while (puVar13 <= puVar29);
  lVar26 = uVar28 + sVar23;
  lVar17 = lVar26 - (long)puVar29;
  puVar18 = puVar29;
  if ((undefined1 *)(lVar17 + (long)puVar14) != (undefined1 *)0xfffffffffffffffc) {
    puVar4 = (undefined1 *)(lVar17 + 4 + (long)puVar14);
    puVar21 = (undefined1 *)((ulong)puVar4 & 0xffffffffffffffe0);
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = (undefined1 *)0x0;
    }
    else if (((undefined8 *)((long)puVar25 + (long)((long)puVar14 + lVar17 + 3)) < puVar29) ||
            ((undefined8 *)(lVar26 + 3 + (long)puVar14) < puVar25)) {
      puVar25 = (undefined8 *)(puVar21 + (long)puVar27 + (long)puVar14);
      puVar18 = (undefined8 *)((long)puVar29 + (long)puVar21);
      puVar29 = puVar29 + 2;
      puVar22 = (undefined8 *)((long)puVar14 + (long)(puVar27 + 0x10));
      uVar28 = (ulong)puVar4 & 0xffffffffffffffe0;
      do {
        uVar9 = puVar22[-1];
        uVar10 = *puVar22;
        uVar11 = puVar22[1];
        puVar29[-2] = puVar22[-2];
        puVar29[-1] = uVar9;
        *puVar29 = uVar10;
        puVar29[1] = uVar11;
        puVar29 = puVar29 + 4;
        puVar22 = puVar22 + 4;
        uVar28 = uVar28 - 0x20;
      } while (uVar28 != 0);
    }
    else {
      puVar21 = (undefined1 *)0x0;
    }
    if (puVar4 == puVar21) goto LAB_10074ebb0;
  }
  puVar27 = (undefined1 *)((long)puVar18 + -4);
  do {
    uVar5 = *(undefined1 *)puVar25;
    puVar25 = (undefined8 *)((long)puVar25 + 1);
    puVar27[4] = uVar5;
    puVar27 = puVar27 + 1;
  } while ((undefined1 *)((long)puVar14 + lVar26) != puVar27);
  goto LAB_10074ebb0;
}

