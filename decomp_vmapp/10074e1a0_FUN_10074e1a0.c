
int FUN_10074e1a0(byte *param_1,undefined8 *param_2,int param_3,int param_4,long param_5,
                 uint param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  byte bVar5;
  byte bVar6;
  undefined1 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  byte *pbVar17;
  undefined8 *puVar18;
  ulong uVar19;
  size_t sVar20;
  byte *pbVar21;
  void *pvVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined1 *puVar27;
  long lVar28;
  undefined1 *puVar29;
  uint uVar30;
  size_t sVar31;
  ulong uVar32;
  bool bVar33;
  
  if (param_4 == 0) {
    bVar33 = true;
    if (param_3 == 1) {
      bVar33 = *param_1 != 0;
    }
    return (int)((uint)bVar33 << 0x1f) >> 0x1f;
  }
  lVar16 = (long)param_4;
  puVar1 = (undefined8 *)(lVar16 + -0xc + (long)param_2);
  puVar2 = (undefined8 *)(lVar16 + -8 + (long)param_2);
  puVar3 = (undefined8 *)(lVar16 + -5 + (long)param_2);
  puVar23 = param_2;
  pbVar21 = param_1;
LAB_10074e243:
  do {
    puVar14 = puVar23;
    bVar5 = *pbVar21;
    uVar30 = (uint)(bVar5 >> 4);
    sVar31 = (size_t)uVar30;
    pbVar13 = pbVar21 + 1;
    if (uVar30 == 0xf) {
      sVar31 = 0xf;
      pbVar17 = pbVar21;
      do {
        pbVar12 = pbVar13;
        pbVar21 = pbVar17 + 2;
        bVar6 = *pbVar12;
        sVar31 = sVar31 + bVar6;
        if (param_1 + (long)param_3 + -0xf <= pbVar21) break;
        pbVar13 = pbVar21;
        pbVar17 = pbVar12;
      } while (bVar6 == 0xff);
      if (((long)sVar31 < 0) || (pbVar13 = pbVar21, (long)(sVar31 + 2) < 2)) goto LAB_10074e699;
    }
    pbVar21 = pbVar13;
    puVar15 = (undefined8 *)((long)puVar14 + sVar31);
    if ((puVar1 < puVar15) ||
       (pbVar13 = pbVar21, puVar23 = puVar14, param_1 + (long)param_3 + -8 < pbVar21 + sVar31)) {
      if ((puVar15 <= (undefined8 *)((long)param_2 + lVar16)) &&
         (pbVar21 + sVar31 == param_1 + param_3)) {
        _memcpy(puVar14,pbVar21,sVar31);
        return (int)puVar15 - (int)param_2;
      }
LAB_10074e699:
      return ((int)param_1 - (int)pbVar21) + -1;
    }
    do {
      *puVar23 = *(undefined8 *)pbVar13;
      puVar23 = puVar23 + 1;
      pbVar13 = pbVar13 + 8;
    } while (puVar23 < puVar15);
    lVar28 = sVar31 - *(ushort *)(pbVar21 + sVar31);
    puVar25 = (undefined8 *)((long)puVar14 + lVar28);
    pbVar21 = pbVar21 + sVar31 + 2;
    if ((param_6 < 0x10000) && (puVar25 < (undefined8 *)((long)param_2 - (long)(int)param_6)))
    goto LAB_10074e699;
    uVar30 = bVar5 & 0xf;
    uVar19 = (ulong)uVar30;
    if (uVar30 == 0xf) {
      uVar19 = 0xf;
      do {
        if (param_1 + (long)param_3 + -5 < pbVar21) goto LAB_10074e699;
        bVar5 = *pbVar21;
        pbVar21 = pbVar21 + 1;
        uVar19 = uVar19 + bVar5;
      } while ((ulong)bVar5 == 0xff);
      if ((long)(uVar19 + sVar31) < (long)sVar31) goto LAB_10074e699;
    }
    lVar24 = uVar19 + 4 + sVar31;
    puVar26 = (undefined8 *)((long)puVar14 + lVar24);
    puVar23 = puVar26;
    if (puVar25 < param_2) {
      if (puVar3 < puVar26) goto LAB_10074e699;
      sVar20 = uVar19 + 4;
      uVar32 = (long)param_2 - (long)puVar25;
      pvVar22 = (void *)(((long)(int)param_6 - uVar32) + param_5);
      uVar19 = sVar20 - uVar32;
      if (sVar20 < uVar32 || uVar19 == 0) {
        _memmove(puVar15,pvVar22,sVar20);
      }
      else {
        _memcpy(puVar15,pvVar22,uVar32);
        puVar23 = (undefined8 *)((long)puVar14 + sVar31 + uVar32);
        if ((ulong)((long)puVar23 - (long)param_2) < uVar19) {
          puVar14 = param_2;
          if ((long)(sVar31 + uVar32) < lVar24) {
            do {
              *(undefined1 *)puVar23 = *(undefined1 *)puVar14;
              puVar23 = (undefined8 *)((long)puVar23 + 1);
              puVar14 = (undefined8 *)((long)puVar14 + 1);
            } while (puVar23 < puVar26);
          }
        }
        else {
          _memcpy(puVar23,param_2,uVar19);
          puVar23 = puVar26;
        }
      }
      goto LAB_10074e243;
    }
    lVar24 = (long)puVar15 - (long)puVar25;
    if (lVar24 < 8) {
      *(undefined1 *)((long)puVar14 + sVar31) = *(undefined1 *)((long)puVar14 + lVar28);
      *(undefined1 *)((long)puVar14 + sVar31 + 1) = *(undefined1 *)((long)puVar14 + lVar28 + 1);
      *(undefined1 *)((long)puVar14 + sVar31 + 2) = *(undefined1 *)((long)puVar14 + lVar28 + 2);
      *(undefined1 *)((long)puVar14 + sVar31 + 3) = *(undefined1 *)((long)puVar14 + lVar28 + 3);
      lVar8 = *(long *)(&DAT_100b4ac60 + lVar24 * 8);
      *(undefined4 *)((long)puVar14 + sVar31 + 4) = *(undefined4 *)((long)puVar14 + lVar28 + lVar8);
      puVar29 = (undefined1 *)((lVar28 + lVar8) - *(long *)(&DAT_100b4aca0 + lVar24 * 8));
    }
    else {
      *puVar15 = *puVar25;
      puVar29 = (undefined1 *)(lVar28 + 8);
    }
    puVar15 = (undefined8 *)((long)puVar14 + (long)puVar29);
    puVar25 = (undefined8 *)(sVar31 + 8 + (long)puVar14);
    if (puVar1 < puVar26) {
      if (puVar3 < puVar26) goto LAB_10074e699;
      puVar18 = puVar25;
      if (puVar25 < puVar2) {
        do {
          *puVar18 = *puVar15;
          puVar18 = puVar18 + 1;
          puVar15 = puVar15 + 1;
        } while (puVar18 < puVar2);
        puVar29 = (undefined1 *)((long)puVar2 + ((long)puVar29 - (long)puVar25));
        puVar15 = (undefined8 *)((long)puVar14 + (long)puVar29);
        puVar25 = puVar2;
      }
      if (puVar25 < puVar26) {
        lVar28 = uVar19 + sVar31;
        lVar24 = lVar28 - (long)puVar25;
        if ((undefined1 *)(lVar24 + (long)puVar14) != (undefined1 *)0xfffffffffffffffc) {
          puVar4 = (undefined1 *)(lVar24 + 4 + (long)puVar14);
          puVar27 = (undefined1 *)((ulong)puVar4 & 0xffffffffffffffe0);
          puVar26 = puVar25;
          if (puVar27 == (undefined1 *)0x0) {
            puVar27 = (undefined1 *)0x0;
          }
          else if (((undefined1 *)((long)puVar14 + 3) + (long)(lVar24 + (long)puVar15) < puVar25) ||
                  ((undefined8 *)(lVar28 + 3 + (long)puVar14) < puVar15)) {
            puVar15 = (undefined8 *)(puVar27 + (long)puVar29 + (long)puVar14);
            puVar26 = (undefined8 *)((long)puVar25 + (long)puVar27);
            puVar25 = puVar25 + 2;
            puVar18 = (undefined8 *)((long)puVar14 + (long)(puVar29 + 0x10));
            uVar19 = (ulong)puVar4 & 0xffffffffffffffe0;
            do {
              uVar9 = puVar18[-1];
              uVar10 = *puVar18;
              uVar11 = puVar18[1];
              puVar25[-2] = puVar18[-2];
              puVar25[-1] = uVar9;
              *puVar25 = uVar10;
              puVar25[1] = uVar11;
              puVar25 = puVar25 + 4;
              puVar18 = puVar18 + 4;
              uVar19 = uVar19 - 0x20;
            } while (uVar19 != 0);
          }
          else {
            puVar27 = (undefined1 *)0x0;
          }
          puVar25 = puVar26;
          if (puVar4 == puVar27) goto LAB_10074e243;
        }
        puVar29 = (undefined1 *)((long)puVar25 + -4);
        do {
          uVar7 = *(undefined1 *)puVar15;
          puVar15 = (undefined8 *)((long)puVar15 + 1);
          puVar29[4] = uVar7;
          puVar29 = puVar29 + 1;
        } while ((undefined1 *)((long)puVar14 + lVar28) != puVar29);
      }
      goto LAB_10074e243;
    }
    do {
      *puVar25 = *puVar15;
      puVar25 = puVar25 + 1;
      puVar15 = puVar15 + 1;
    } while (puVar25 < puVar26);
  } while( true );
}

