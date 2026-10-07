
int FUN_10074b3c0(byte *param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  long lVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined1 *puVar21;
  undefined8 *puVar22;
  ulong uVar23;
  int iVar24;
  uint uVar25;
  undefined1 *puVar26;
  size_t sVar27;
  
  if (param_3 == 0) {
    iVar24 = 1;
    if (*param_1 != 0) {
      iVar24 = -1;
    }
  }
  else {
    lVar10 = (long)param_3;
    puVar1 = (undefined8 *)(lVar10 + -8 + (long)param_2);
    pbVar11 = param_1;
    puVar18 = param_2;
LAB_10074b5e0:
    puVar19 = puVar18;
    bVar4 = *pbVar11;
    uVar25 = (uint)(bVar4 >> 4);
    sVar27 = (size_t)uVar25;
    pbVar14 = pbVar11 + 1;
    if (uVar25 == 0xf) {
      sVar27 = 0xf;
      pbVar17 = pbVar11 + 1;
      do {
        pbVar14 = pbVar11 + 2;
        bVar5 = *pbVar17;
        sVar27 = sVar27 + bVar5;
        pbVar11 = pbVar17;
        pbVar17 = pbVar14;
      } while ((ulong)bVar5 == 0xff);
    }
    pbVar11 = pbVar14;
    puVar16 = (undefined8 *)((long)puVar19 + sVar27);
    pbVar14 = pbVar11;
    puVar18 = puVar19;
    if (puVar16 <= puVar1) {
      do {
        *puVar18 = *(undefined8 *)pbVar14;
        puVar18 = puVar18 + 1;
        pbVar14 = pbVar14 + 8;
      } while (puVar18 < puVar16);
      lVar20 = sVar27 - *(ushort *)(pbVar11 + sVar27);
      pbVar11 = pbVar11 + sVar27 + 2;
      uVar25 = bVar4 & 0xf;
      uVar23 = (ulong)uVar25;
      if (uVar25 == 0xf) {
        uVar23 = 0xf;
        do {
          bVar4 = *pbVar11;
          pbVar11 = pbVar11 + 1;
          uVar23 = uVar23 + bVar4;
        } while ((ulong)bVar4 == 0xff);
      }
      puVar18 = (undefined8 *)(sVar27 + 4 + uVar23 + (long)puVar19);
      lVar15 = (long)puVar16 - ((long)puVar19 + lVar20);
      if (lVar15 < 8) {
        *(undefined1 *)((long)puVar19 + sVar27) = *(undefined1 *)((long)puVar19 + lVar20);
        *(undefined1 *)((long)puVar19 + sVar27 + 1) = *(undefined1 *)((long)puVar19 + lVar20 + 1);
        *(undefined1 *)((long)puVar19 + sVar27 + 2) = *(undefined1 *)((long)puVar19 + lVar20 + 2);
        *(undefined1 *)((long)puVar19 + sVar27 + 3) = *(undefined1 *)((long)puVar19 + lVar20 + 3);
        lVar6 = *(long *)(&DAT_100b4ac60 + lVar15 * 8);
        *(undefined4 *)((long)puVar19 + sVar27 + 4) =
             *(undefined4 *)((long)puVar19 + lVar20 + lVar6);
        puVar21 = (undefined1 *)((lVar20 + lVar6) - *(long *)(&DAT_100b4aca0 + lVar15 * 8));
      }
      else {
        *puVar16 = *(undefined8 *)((long)puVar19 + lVar20);
        puVar21 = (undefined1 *)(lVar20 + 8);
      }
      puVar16 = (undefined8 *)((long)puVar19 + (long)puVar21);
      puVar12 = (undefined8 *)(sVar27 + 8 + (long)puVar19);
      if ((undefined8 *)(lVar10 + -0xc + (long)param_2) < puVar18) {
        if ((undefined8 *)(lVar10 + -5 + (long)param_2) < puVar18) goto LAB_10074b637;
        puVar13 = puVar12;
        if (puVar12 < puVar1) {
          do {
            *puVar13 = *puVar16;
            puVar13 = puVar13 + 1;
            puVar16 = puVar16 + 1;
          } while (puVar13 < puVar1);
          puVar21 = (undefined1 *)((long)puVar1 + ((long)puVar21 - (long)puVar12));
          puVar16 = (undefined8 *)((long)puVar19 + (long)puVar21);
          puVar12 = puVar1;
        }
        if (puVar12 < puVar18) {
          lVar15 = uVar23 + sVar27;
          lVar20 = lVar15 - (long)puVar12;
          puVar13 = puVar12;
          if ((undefined1 *)(lVar20 + (long)puVar19) != (undefined1 *)0xfffffffffffffffc) {
            puVar2 = (undefined1 *)(lVar20 + 4 + (long)puVar19);
            puVar26 = (undefined1 *)((ulong)puVar2 & 0xffffffffffffffe0);
            if (puVar26 == (undefined1 *)0x0) {
              puVar26 = (undefined1 *)0x0;
            }
            else if (((undefined8 *)((long)puVar16 + (long)((long)puVar19 + lVar20 + 3)) < puVar12)
                    || ((undefined8 *)(lVar15 + 3 + (long)puVar19) < puVar16)) {
              puVar16 = (undefined8 *)(puVar26 + (long)puVar21 + (long)puVar19);
              puVar13 = (undefined8 *)((long)puVar12 + (long)puVar26);
              puVar12 = puVar12 + 2;
              puVar22 = (undefined8 *)((long)puVar19 + (long)(puVar21 + 0x10));
              uVar23 = (ulong)puVar2 & 0xffffffffffffffe0;
              do {
                uVar7 = puVar22[-1];
                uVar8 = *puVar22;
                uVar9 = puVar22[1];
                puVar12[-2] = puVar22[-2];
                puVar12[-1] = uVar7;
                *puVar12 = uVar8;
                puVar12[1] = uVar9;
                puVar12 = puVar12 + 4;
                puVar22 = puVar22 + 4;
                uVar23 = uVar23 - 0x20;
              } while (uVar23 != 0);
            }
            else {
              puVar26 = (undefined1 *)0x0;
            }
            if (puVar2 == puVar26) goto LAB_10074b5e0;
          }
          puVar21 = (undefined1 *)((long)puVar13 + -4);
          do {
            uVar3 = *(undefined1 *)puVar16;
            puVar16 = (undefined8 *)((long)puVar16 + 1);
            puVar21[4] = uVar3;
            puVar21 = puVar21 + 1;
          } while ((undefined1 *)((long)puVar19 + lVar15) != puVar21);
        }
      }
      else {
        do {
          *puVar12 = *puVar16;
          puVar12 = puVar12 + 1;
          puVar16 = puVar16 + 1;
        } while (puVar12 < puVar18);
      }
      goto LAB_10074b5e0;
    }
    if (puVar16 == (undefined8 *)((long)param_2 + lVar10)) {
      _memcpy(puVar19,pbVar11,sVar27);
      return ((int)pbVar11 + (int)sVar27) - (int)param_1;
    }
LAB_10074b637:
    iVar24 = ((int)param_1 - (int)pbVar11) + -1;
  }
  return iVar24;
}

