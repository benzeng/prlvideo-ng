
int FUN_10074acf0(byte *param_1,undefined8 *param_2,int param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  uint uVar19;
  size_t sVar20;
  undefined1 *puVar21;
  byte *pbVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined1 *puVar25;
  long lVar26;
  ulong uVar27;
  undefined8 *puVar28;
  bool bVar29;
  
  if (param_4 == 0) {
    bVar29 = true;
    if (param_3 == 1) {
      bVar29 = *param_1 != 0;
    }
    return (int)((uint)bVar29 << 0x1f) >> 0x1f;
  }
  lVar15 = (long)param_4;
  puVar1 = (undefined8 *)(lVar15 + -0xc + (long)param_2);
  puVar2 = (undefined8 *)(lVar15 + -8 + (long)param_2);
  puVar11 = param_2;
  pbVar22 = param_1;
LAB_10074af50:
  do {
    puVar12 = puVar11;
    bVar5 = *pbVar22;
    uVar19 = (uint)(bVar5 >> 4);
    sVar20 = (size_t)uVar19;
    pbVar14 = pbVar22 + 1;
    pbVar18 = pbVar22;
    pbVar22 = pbVar22 + 1;
    if (uVar19 == 0xf) {
      do {
        pbVar13 = pbVar14;
        pbVar22 = pbVar18 + 2;
        bVar6 = *pbVar13;
        sVar20 = sVar20 + bVar6;
        if (param_1 + (long)param_3 + -0xf <= pbVar22) break;
        pbVar14 = pbVar22;
        pbVar18 = pbVar13;
      } while (bVar6 == 0xff);
      if (((long)sVar20 < 0) || ((long)(sVar20 + 2) < 2)) goto LAB_10074b036;
    }
    puVar24 = (undefined8 *)((long)puVar12 + sVar20);
    if ((puVar1 < puVar24) ||
       (pbVar14 = pbVar22, puVar11 = puVar12, param_1 + (long)param_3 + -8 < pbVar22 + sVar20)) {
      if ((puVar24 <= (undefined8 *)((long)param_2 + lVar15)) &&
         (pbVar22 + sVar20 == param_1 + param_3)) {
        _memcpy(puVar12,pbVar22,sVar20);
        return (int)puVar24 - (int)param_2;
      }
LAB_10074b036:
      return ((int)param_1 - (int)pbVar22) + -1;
    }
    do {
      *puVar11 = *(undefined8 *)pbVar14;
      puVar11 = puVar11 + 1;
      pbVar14 = pbVar14 + 8;
    } while (puVar11 < puVar24);
    lVar26 = sVar20 - *(ushort *)(pbVar22 + sVar20);
    puVar28 = (undefined8 *)((long)puVar12 + lVar26);
    pbVar22 = pbVar22 + sVar20 + 2;
    if (puVar28 < param_2) goto LAB_10074b036;
    uVar19 = bVar5 & 0xf;
    uVar27 = (ulong)uVar19;
    if (uVar19 == 0xf) {
      uVar27 = 0xf;
      do {
        if (param_1 + (long)param_3 + -5 < pbVar22) goto LAB_10074b036;
        bVar5 = *pbVar22;
        pbVar22 = pbVar22 + 1;
        uVar27 = uVar27 + bVar5;
      } while ((ulong)bVar5 == 0xff);
      if ((long)(uVar27 + sVar20) < (long)sVar20) goto LAB_10074b036;
    }
    puVar11 = (undefined8 *)(sVar20 + 4 + uVar27 + (long)puVar12);
    lVar23 = (long)puVar24 - (long)puVar28;
    if (lVar23 < 8) {
      *(undefined1 *)((long)puVar12 + sVar20) = *(undefined1 *)((long)puVar12 + lVar26);
      *(undefined1 *)((long)puVar12 + sVar20 + 1) = *(undefined1 *)((long)puVar12 + lVar26 + 1);
      *(undefined1 *)((long)puVar12 + sVar20 + 2) = *(undefined1 *)((long)puVar12 + lVar26 + 2);
      *(undefined1 *)((long)puVar12 + sVar20 + 3) = *(undefined1 *)((long)puVar12 + lVar26 + 3);
      lVar7 = *(long *)(&DAT_100b4ac60 + lVar23 * 8);
      *(undefined4 *)((long)puVar12 + sVar20 + 4) = *(undefined4 *)((long)puVar12 + lVar26 + lVar7);
      puVar25 = (undefined1 *)((lVar26 + lVar7) - *(long *)(&DAT_100b4aca0 + lVar23 * 8));
    }
    else {
      *puVar24 = *puVar28;
      puVar25 = (undefined1 *)(lVar26 + 8);
    }
    puVar24 = (undefined8 *)((long)puVar12 + (long)puVar25);
    puVar28 = (undefined8 *)(sVar20 + 8 + (long)puVar12);
    if (puVar11 <= puVar1) {
      do {
        *puVar28 = *puVar24;
        puVar28 = puVar28 + 1;
        puVar24 = puVar24 + 1;
      } while (puVar28 < puVar11);
      goto LAB_10074af50;
    }
    if ((undefined8 *)(lVar15 + -5 + (long)param_2) < puVar11) goto LAB_10074b036;
    puVar16 = puVar28;
    if (puVar28 < puVar2) {
      do {
        *puVar16 = *puVar24;
        puVar16 = puVar16 + 1;
        puVar24 = puVar24 + 1;
      } while (puVar16 < puVar2);
      puVar25 = (undefined1 *)((long)puVar2 + ((long)puVar25 - (long)puVar28));
      puVar24 = (undefined8 *)((long)puVar12 + (long)puVar25);
      puVar28 = puVar2;
    }
  } while (puVar11 <= puVar28);
  lVar23 = uVar27 + sVar20;
  lVar26 = lVar23 - (long)puVar28;
  puVar16 = puVar28;
  if ((undefined1 *)(lVar26 + (long)puVar12) != (undefined1 *)0xfffffffffffffffc) {
    puVar3 = (undefined1 *)(lVar26 + 4 + (long)puVar12);
    puVar21 = (undefined1 *)((ulong)puVar3 & 0xffffffffffffffe0);
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = (undefined1 *)0x0;
    }
    else if (((undefined8 *)((long)puVar24 + (long)((long)puVar12 + lVar26 + 3)) < puVar28) ||
            ((undefined8 *)(lVar23 + 3 + (long)puVar12) < puVar24)) {
      puVar24 = (undefined8 *)(puVar21 + (long)puVar25 + (long)puVar12);
      puVar16 = (undefined8 *)((long)puVar28 + (long)puVar21);
      puVar28 = puVar28 + 2;
      puVar17 = (undefined8 *)((long)puVar12 + (long)(puVar25 + 0x10));
      uVar27 = (ulong)puVar3 & 0xffffffffffffffe0;
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
        uVar27 = uVar27 - 0x20;
      } while (uVar27 != 0);
    }
    else {
      puVar21 = (undefined1 *)0x0;
    }
    if (puVar3 == puVar21) goto LAB_10074af50;
  }
  puVar25 = (undefined1 *)((long)puVar16 + -4);
  do {
    uVar4 = *(undefined1 *)puVar24;
    puVar24 = (undefined8 *)((long)puVar24 + 1);
    puVar25[4] = uVar4;
    puVar25 = puVar25 + 1;
  } while ((undefined1 *)((long)puVar12 + lVar23) != puVar25);
  goto LAB_10074af50;
}

