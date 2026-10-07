
int FUN_10074c880(byte *param_1,undefined8 *param_2,int param_3,int param_4,long param_5,
                 uint param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  byte bVar8;
  byte bVar9;
  undefined1 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  byte *pbVar24;
  ulong uVar25;
  size_t sVar26;
  int iVar27;
  void *pvVar28;
  undefined8 *puVar29;
  long lVar30;
  long lVar31;
  undefined1 *puVar32;
  long lVar33;
  undefined1 *puVar34;
  ulong uVar35;
  undefined8 *puVar36;
  uint uVar37;
  size_t sVar38;
  bool bVar39;
  
  iVar27 = (int)param_2;
  iVar15 = (int)param_1;
  if (param_6 == 0) {
    if (param_4 != 0) {
      pbVar1 = param_1 + param_3;
      lVar31 = (long)param_4;
      pbVar2 = param_1 + (long)param_3 + -8;
      puVar3 = (undefined8 *)(lVar31 + -0xc + (long)param_2);
      puVar4 = (undefined8 *)(lVar31 + -8 + (long)param_2);
      pbVar5 = param_1 + (long)param_3 + -5;
      pbVar6 = param_1 + (long)param_3 + -0xf;
      puVar36 = param_2;
LAB_10074cb60:
      do {
        puVar29 = puVar36;
        bVar8 = *param_1;
        uVar37 = (uint)(bVar8 >> 4);
        sVar38 = (size_t)uVar37;
        pbVar17 = param_1 + 1;
        pbVar24 = param_1;
        if (uVar37 == 0xf) {
          do {
            pbVar16 = pbVar17;
            param_1 = pbVar24 + 2;
            bVar9 = *pbVar16;
            sVar38 = sVar38 + bVar9;
            if (pbVar6 <= param_1) break;
            pbVar17 = param_1;
            pbVar24 = pbVar16;
          } while (bVar9 == 0xff);
          if (((long)sVar38 < 0) || (pbVar17 = param_1, (long)(sVar38 + 2) < 2)) goto LAB_10074d641;
        }
        param_1 = pbVar17;
        puVar18 = (undefined8 *)((long)puVar29 + sVar38);
        if ((puVar3 < puVar18) || (pbVar17 = param_1, puVar36 = puVar29, pbVar2 < param_1 + sVar38))
        {
          if ((puVar18 <= (undefined8 *)((long)param_2 + lVar31)) && (param_1 + sVar38 == pbVar1)) {
            _memcpy(puVar29,param_1,sVar38);
            return (int)puVar18 - iVar27;
          }
          goto LAB_10074d641;
        }
        do {
          *puVar36 = *(undefined8 *)pbVar17;
          puVar36 = puVar36 + 1;
          pbVar17 = pbVar17 + 8;
        } while (puVar36 < puVar18);
        lVar21 = sVar38 - *(ushort *)(param_1 + sVar38);
        puVar19 = (undefined8 *)((long)puVar29 + lVar21);
        param_1 = param_1 + sVar38 + 2;
        if (puVar19 < param_2) goto LAB_10074d641;
        uVar37 = bVar8 & 0xf;
        uVar25 = (ulong)uVar37;
        if (uVar37 == 0xf) {
          uVar25 = 0xf;
          do {
            if (pbVar5 < param_1) goto LAB_10074d641;
            bVar8 = *param_1;
            param_1 = param_1 + 1;
            uVar25 = uVar25 + bVar8;
          } while ((ulong)bVar8 == 0xff);
          if ((long)(uVar25 + sVar38) < (long)sVar38) goto LAB_10074d641;
        }
        puVar36 = (undefined8 *)(uVar25 + 4 + sVar38 + (long)puVar29);
        lVar33 = (long)puVar18 - (long)puVar19;
        if (lVar33 < 8) {
          *(undefined1 *)((long)puVar29 + sVar38) = *(undefined1 *)((long)puVar29 + lVar21);
          *(undefined1 *)((long)puVar29 + sVar38 + 1) = *(undefined1 *)((long)puVar29 + lVar21 + 1);
          *(undefined1 *)((long)puVar29 + sVar38 + 2) = *(undefined1 *)((long)puVar29 + lVar21 + 2);
          *(undefined1 *)((long)puVar29 + sVar38 + 3) = *(undefined1 *)((long)puVar29 + lVar21 + 3);
          lVar30 = *(long *)(&DAT_100b4ac60 + lVar33 * 8);
          *(undefined4 *)((long)puVar29 + sVar38 + 4) =
               *(undefined4 *)((long)puVar29 + lVar21 + lVar30);
          puVar34 = (undefined1 *)((lVar21 + lVar30) - *(long *)(&DAT_100b4aca0 + lVar33 * 8));
        }
        else {
          *puVar18 = *puVar19;
          puVar34 = (undefined1 *)(lVar21 + 8);
        }
        puVar19 = (undefined8 *)((long)puVar29 + (long)puVar34);
        puVar18 = (undefined8 *)(sVar38 + 8 + (long)puVar29);
        if (puVar36 <= puVar3) {
          do {
            *puVar18 = *puVar19;
            puVar18 = puVar18 + 1;
            puVar19 = puVar19 + 1;
          } while (puVar18 < puVar36);
          goto LAB_10074cb60;
        }
        if ((undefined8 *)(lVar31 + -5 + (long)param_2) < puVar36) goto LAB_10074d641;
        puVar20 = puVar18;
        if (puVar18 < puVar4) {
          do {
            *puVar20 = *puVar19;
            puVar20 = puVar20 + 1;
            puVar19 = puVar19 + 1;
          } while (puVar20 < puVar4);
          puVar34 = (undefined1 *)((long)puVar4 + ((long)puVar34 - (long)puVar18));
          puVar19 = (undefined8 *)((long)puVar29 + (long)puVar34);
          puVar18 = puVar4;
        }
      } while (puVar36 <= puVar18);
      lVar33 = uVar25 + sVar38;
      lVar21 = lVar33 - (long)puVar18;
      puVar20 = puVar18;
      if ((undefined1 *)(lVar21 + (long)puVar29) != (undefined1 *)0xfffffffffffffffc) {
        puVar7 = (undefined1 *)(lVar21 + 4 + (long)puVar29);
        puVar32 = (undefined1 *)((ulong)puVar7 & 0xffffffffffffffe0);
        if (puVar32 == (undefined1 *)0x0) {
          puVar32 = (undefined1 *)0x0;
        }
        else if (((undefined1 *)((long)puVar29 + 3) + (long)(lVar21 + (long)puVar19) < puVar18) ||
                ((undefined8 *)(lVar33 + 3 + (long)puVar29) < puVar19)) {
          puVar19 = (undefined8 *)(puVar32 + (long)puVar34 + (long)puVar29);
          puVar20 = (undefined8 *)((long)puVar18 + (long)puVar32);
          puVar18 = puVar18 + 2;
          puVar23 = (undefined8 *)((long)puVar29 + (long)(puVar34 + 0x10));
          uVar25 = (ulong)puVar7 & 0xffffffffffffffe0;
          do {
            uVar12 = puVar23[-1];
            uVar13 = *puVar23;
            uVar14 = puVar23[1];
            puVar18[-2] = puVar23[-2];
            puVar18[-1] = uVar12;
            *puVar18 = uVar13;
            puVar18[1] = uVar14;
            puVar18 = puVar18 + 4;
            puVar23 = puVar23 + 4;
            uVar25 = uVar25 - 0x20;
          } while (uVar25 != 0);
        }
        else {
          puVar32 = (undefined1 *)0x0;
        }
        if (puVar7 == puVar32) goto LAB_10074cb60;
      }
      puVar34 = (undefined1 *)((long)puVar20 + -4);
      do {
        uVar10 = *(undefined1 *)puVar19;
        puVar19 = (undefined8 *)((long)puVar19 + 1);
        puVar34[4] = uVar10;
        puVar34 = puVar34 + 1;
      } while ((undefined1 *)((long)puVar29 + lVar33) != puVar34);
      goto LAB_10074cb60;
    }
  }
  else {
    lVar31 = (long)(int)param_6;
    if ((undefined8 *)(param_5 + lVar31) == param_2) {
      if ((int)param_6 < 0xffff) {
        if (param_4 != 0) {
          pbVar1 = param_1 + param_3;
          lVar21 = (long)param_4;
          pbVar2 = param_1 + (long)param_3 + -8;
          puVar3 = (undefined8 *)(lVar21 + -0xc + (long)param_2);
          puVar4 = (undefined8 *)(lVar21 + -8 + (long)param_2);
          pbVar5 = param_1 + (long)param_3 + -5;
          pbVar6 = param_1 + (long)param_3 + -0xf;
          puVar36 = param_2;
LAB_10074d510:
          do {
            puVar29 = puVar36;
            bVar8 = *param_1;
            uVar37 = (uint)(bVar8 >> 4);
            sVar38 = (size_t)uVar37;
            pbVar17 = param_1;
            pbVar24 = param_1 + 1;
            param_1 = param_1 + 1;
            if (uVar37 == 0xf) {
              do {
                param_1 = pbVar17 + 2;
                bVar9 = *pbVar24;
                sVar38 = sVar38 + bVar9;
                if (pbVar6 <= param_1) break;
                pbVar17 = pbVar24;
                pbVar24 = param_1;
              } while (bVar9 == 0xff);
              if (((long)sVar38 < 0) || ((long)(sVar38 + 2) < 2)) goto LAB_10074d641;
            }
            puVar18 = (undefined8 *)((long)puVar29 + sVar38);
            if ((puVar3 < puVar18) ||
               (pbVar17 = param_1, puVar36 = puVar29, pbVar2 < param_1 + sVar38)) {
              if ((puVar18 <= (undefined8 *)((long)param_2 + lVar21)) &&
                 (param_1 + sVar38 == pbVar1)) goto LAB_10074d62d;
              goto LAB_10074d641;
            }
            do {
              *puVar36 = *(undefined8 *)pbVar17;
              puVar36 = puVar36 + 1;
              pbVar17 = pbVar17 + 8;
            } while (puVar36 < puVar18);
            lVar33 = sVar38 - *(ushort *)(param_1 + sVar38);
            puVar19 = (undefined8 *)((long)puVar29 + lVar33);
            param_1 = param_1 + sVar38 + 2;
            if (puVar19 < (undefined8 *)((long)param_2 - lVar31)) goto LAB_10074d641;
            uVar37 = bVar8 & 0xf;
            uVar25 = (ulong)uVar37;
            if (uVar37 == 0xf) {
              uVar25 = 0xf;
              do {
                if (pbVar5 < param_1) goto LAB_10074d641;
                bVar8 = *param_1;
                param_1 = param_1 + 1;
                uVar25 = uVar25 + bVar8;
              } while ((ulong)bVar8 == 0xff);
              if ((long)(uVar25 + sVar38) < (long)sVar38) goto LAB_10074d641;
            }
            puVar36 = (undefined8 *)(uVar25 + 4 + sVar38 + (long)puVar29);
            lVar30 = (long)puVar18 - (long)puVar19;
            if (lVar30 < 8) {
              *(undefined1 *)((long)puVar29 + sVar38) = *(undefined1 *)((long)puVar29 + lVar33);
              *(undefined1 *)((long)puVar29 + sVar38 + 1) =
                   *(undefined1 *)((long)puVar29 + lVar33 + 1);
              *(undefined1 *)((long)puVar29 + sVar38 + 2) =
                   *(undefined1 *)((long)puVar29 + lVar33 + 2);
              *(undefined1 *)((long)puVar29 + sVar38 + 3) =
                   *(undefined1 *)((long)puVar29 + lVar33 + 3);
              lVar11 = *(long *)(&DAT_100b4ac60 + lVar30 * 8);
              *(undefined4 *)((long)puVar29 + sVar38 + 4) =
                   *(undefined4 *)((long)puVar29 + lVar33 + lVar11);
              puVar34 = (undefined1 *)((lVar33 + lVar11) - *(long *)(&DAT_100b4aca0 + lVar30 * 8));
            }
            else {
              *puVar18 = *puVar19;
              puVar34 = (undefined1 *)(lVar33 + 8);
            }
            puVar18 = (undefined8 *)((long)puVar29 + (long)puVar34);
            puVar19 = (undefined8 *)(sVar38 + 8 + (long)puVar29);
            if (puVar36 <= puVar3) {
              do {
                *puVar19 = *puVar18;
                puVar19 = puVar19 + 1;
                puVar18 = puVar18 + 1;
              } while (puVar19 < puVar36);
              goto LAB_10074d510;
            }
            if ((undefined8 *)(lVar21 + -5 + (long)param_2) < puVar36) goto LAB_10074d641;
            puVar20 = puVar19;
            if (puVar19 < puVar4) {
              do {
                *puVar20 = *puVar18;
                puVar20 = puVar20 + 1;
                puVar18 = puVar18 + 1;
              } while (puVar20 < puVar4);
              puVar34 = (undefined1 *)((long)puVar4 + ((long)puVar34 - (long)puVar19));
              puVar18 = (undefined8 *)((long)puVar29 + (long)puVar34);
              puVar19 = puVar4;
            }
          } while (puVar36 <= puVar19);
          lVar30 = uVar25 + sVar38;
          lVar33 = lVar30 - (long)puVar19;
          puVar20 = puVar19;
          if ((undefined1 *)(lVar33 + (long)puVar29) != (undefined1 *)0xfffffffffffffffc) {
            puVar7 = (undefined1 *)(lVar33 + 4 + (long)puVar29);
            puVar32 = (undefined1 *)((ulong)puVar7 & 0xffffffffffffffe0);
            if (puVar32 == (undefined1 *)0x0) {
              puVar32 = (undefined1 *)0x0;
            }
            else if (((undefined1 *)((long)puVar29 + 3) + (long)(lVar33 + (long)puVar18) < puVar19)
                    || ((undefined8 *)(lVar30 + 3 + (long)puVar29) < puVar18)) {
              puVar18 = (undefined8 *)(puVar32 + (long)puVar34 + (long)puVar29);
              puVar20 = (undefined8 *)((long)puVar19 + (long)puVar32);
              puVar19 = puVar19 + 2;
              puVar23 = (undefined8 *)((long)puVar29 + (long)(puVar34 + 0x10));
              uVar25 = (ulong)puVar7 & 0xffffffffffffffe0;
              do {
                uVar12 = puVar23[-1];
                uVar13 = *puVar23;
                uVar14 = puVar23[1];
                puVar19[-2] = puVar23[-2];
                puVar19[-1] = uVar12;
                *puVar19 = uVar13;
                puVar19[1] = uVar14;
                puVar19 = puVar19 + 4;
                puVar23 = puVar23 + 4;
                uVar25 = uVar25 - 0x20;
              } while (uVar25 != 0);
            }
            else {
              puVar32 = (undefined1 *)0x0;
            }
            if (puVar7 == puVar32) goto LAB_10074d510;
          }
          puVar34 = (undefined1 *)((long)puVar20 + -4);
          do {
            uVar10 = *(undefined1 *)puVar18;
            puVar18 = (undefined8 *)((long)puVar18 + 1);
            puVar34[4] = uVar10;
            puVar34 = puVar34 + 1;
          } while ((undefined1 *)((long)puVar29 + lVar30) != puVar34);
          goto LAB_10074d510;
        }
      }
      else if (param_4 != 0) {
        pbVar1 = param_1 + param_3;
        lVar31 = (long)param_4;
        pbVar2 = param_1 + (long)param_3 + -8;
        puVar3 = (undefined8 *)(lVar31 + -0xc + (long)param_2);
        puVar4 = (undefined8 *)(lVar31 + -8 + (long)param_2);
        pbVar5 = param_1 + (long)param_3 + -5;
        pbVar6 = param_1 + (long)param_3 + -0xf;
        puVar36 = param_2;
LAB_10074d210:
        do {
          puVar29 = puVar36;
          bVar8 = *param_1;
          uVar37 = (uint)(bVar8 >> 4);
          sVar38 = (size_t)uVar37;
          pbVar17 = param_1 + 1;
          pbVar24 = param_1;
          if (uVar37 == 0xf) {
            do {
              pbVar16 = pbVar17;
              param_1 = pbVar24 + 2;
              bVar9 = *pbVar16;
              sVar38 = sVar38 + bVar9;
              if (pbVar6 <= param_1) break;
              pbVar17 = param_1;
              pbVar24 = pbVar16;
            } while (bVar9 == 0xff);
            if (((long)sVar38 < 0) || (pbVar17 = param_1, (long)(sVar38 + 2) < 2))
            goto LAB_10074d641;
          }
          param_1 = pbVar17;
          puVar18 = (undefined8 *)((long)puVar29 + sVar38);
          if ((puVar3 < puVar18) ||
             (pbVar17 = param_1, puVar36 = puVar29, pbVar2 < param_1 + sVar38)) goto LAB_10074d613;
          do {
            *puVar36 = *(undefined8 *)pbVar17;
            puVar36 = puVar36 + 1;
            pbVar17 = pbVar17 + 8;
          } while (puVar36 < puVar18);
          lVar21 = sVar38 - *(ushort *)(param_1 + sVar38);
          puVar19 = (undefined8 *)((long)puVar29 + lVar21);
          param_1 = param_1 + sVar38 + 2;
          if (puVar19 < param_2 + -0x2000) goto LAB_10074d641;
          uVar37 = bVar8 & 0xf;
          uVar25 = (ulong)uVar37;
          if (uVar37 == 0xf) {
            uVar25 = 0xf;
            do {
              if (pbVar5 < param_1) goto LAB_10074d641;
              bVar8 = *param_1;
              param_1 = param_1 + 1;
              uVar25 = uVar25 + bVar8;
            } while ((ulong)bVar8 == 0xff);
            if ((long)(uVar25 + sVar38) < (long)sVar38) goto LAB_10074d641;
          }
          puVar36 = (undefined8 *)(uVar25 + 4 + sVar38 + (long)puVar29);
          lVar33 = (long)puVar18 - (long)puVar19;
          if (lVar33 < 8) {
            *(undefined1 *)((long)puVar29 + sVar38) = *(undefined1 *)((long)puVar29 + lVar21);
            *(undefined1 *)((long)puVar29 + sVar38 + 1) =
                 *(undefined1 *)((long)puVar29 + lVar21 + 1);
            *(undefined1 *)((long)puVar29 + sVar38 + 2) =
                 *(undefined1 *)((long)puVar29 + lVar21 + 2);
            *(undefined1 *)((long)puVar29 + sVar38 + 3) =
                 *(undefined1 *)((long)puVar29 + lVar21 + 3);
            lVar30 = *(long *)(&DAT_100b4ac60 + lVar33 * 8);
            *(undefined4 *)((long)puVar29 + sVar38 + 4) =
                 *(undefined4 *)((long)puVar29 + lVar21 + lVar30);
            puVar34 = (undefined1 *)((lVar21 + lVar30) - *(long *)(&DAT_100b4aca0 + lVar33 * 8));
          }
          else {
            *puVar18 = *puVar19;
            puVar34 = (undefined1 *)(lVar21 + 8);
          }
          puVar18 = (undefined8 *)((long)puVar29 + (long)puVar34);
          puVar19 = (undefined8 *)(sVar38 + 8 + (long)puVar29);
          if (puVar36 <= puVar3) {
            do {
              *puVar19 = *puVar18;
              puVar19 = puVar19 + 1;
              puVar18 = puVar18 + 1;
            } while (puVar19 < puVar36);
            goto LAB_10074d210;
          }
          if ((undefined8 *)(lVar31 + -5 + (long)param_2) < puVar36) goto LAB_10074d641;
          puVar20 = puVar19;
          if (puVar19 < puVar4) {
            do {
              *puVar20 = *puVar18;
              puVar20 = puVar20 + 1;
              puVar18 = puVar18 + 1;
            } while (puVar20 < puVar4);
            puVar34 = (undefined1 *)((long)puVar4 + ((long)puVar34 - (long)puVar19));
            puVar18 = (undefined8 *)((long)puVar29 + (long)puVar34);
            puVar19 = puVar4;
          }
        } while (puVar36 <= puVar19);
        lVar33 = uVar25 + sVar38;
        lVar21 = lVar33 - (long)puVar19;
        puVar20 = puVar19;
        if ((undefined1 *)(lVar21 + (long)puVar29) != (undefined1 *)0xfffffffffffffffc) {
          puVar7 = (undefined1 *)(lVar21 + 4 + (long)puVar29);
          puVar32 = (undefined1 *)((ulong)puVar7 & 0xffffffffffffffe0);
          if (puVar32 == (undefined1 *)0x0) {
            puVar32 = (undefined1 *)0x0;
          }
          else if (((undefined1 *)((long)puVar29 + 3) + (long)(lVar21 + (long)puVar18) < puVar19) ||
                  ((undefined8 *)(lVar33 + 3 + (long)puVar29) < puVar18)) {
            puVar18 = (undefined8 *)(puVar32 + (long)puVar34 + (long)puVar29);
            puVar20 = (undefined8 *)((long)puVar19 + (long)puVar32);
            puVar19 = puVar19 + 2;
            puVar23 = (undefined8 *)((long)puVar29 + (long)(puVar34 + 0x10));
            uVar25 = (ulong)puVar7 & 0xffffffffffffffe0;
            do {
              uVar12 = puVar23[-1];
              uVar13 = *puVar23;
              uVar14 = puVar23[1];
              puVar19[-2] = puVar23[-2];
              puVar19[-1] = uVar12;
              *puVar19 = uVar13;
              puVar19[1] = uVar14;
              puVar19 = puVar19 + 4;
              puVar23 = puVar23 + 4;
              uVar25 = uVar25 - 0x20;
            } while (uVar25 != 0);
          }
          else {
            puVar32 = (undefined1 *)0x0;
          }
          if (puVar7 == puVar32) goto LAB_10074d210;
        }
        puVar34 = (undefined1 *)((long)puVar20 + -4);
        do {
          uVar10 = *(undefined1 *)puVar18;
          puVar18 = (undefined8 *)((long)puVar18 + 1);
          puVar34[4] = uVar10;
          puVar34 = puVar34 + 1;
        } while ((undefined1 *)((long)puVar29 + lVar33) != puVar34);
        goto LAB_10074d210;
      }
    }
    else if (param_4 != 0) {
      pbVar1 = param_1 + param_3;
      lVar21 = (long)param_4;
      pbVar2 = param_1 + (long)param_3 + -8;
      puVar3 = (undefined8 *)(lVar21 + -0xc + (long)param_2);
      puVar4 = (undefined8 *)(lVar21 + -8 + (long)param_2);
      puVar36 = (undefined8 *)(lVar21 + -5 + (long)param_2);
      pbVar5 = param_1 + (long)param_3 + -5;
      pbVar6 = param_1 + (long)param_3 + -0xf;
      puVar29 = param_2;
LAB_10074cc93:
      do {
        puVar18 = puVar29;
        bVar8 = *param_1;
        uVar37 = (uint)(bVar8 >> 4);
        sVar38 = (size_t)uVar37;
        pbVar17 = param_1 + 1;
        if (uVar37 == 0xf) {
          sVar38 = 0xf;
          pbVar24 = param_1;
          do {
            pbVar16 = pbVar17;
            param_1 = pbVar24 + 2;
            bVar9 = *pbVar16;
            sVar38 = sVar38 + bVar9;
            if (pbVar6 <= param_1) break;
            pbVar17 = param_1;
            pbVar24 = pbVar16;
          } while (bVar9 == 0xff);
          if (((long)sVar38 < 0) || (pbVar17 = param_1, (long)(sVar38 + 2) < 2)) goto LAB_10074d60b;
        }
        param_1 = pbVar17;
        puVar19 = (undefined8 *)((long)puVar18 + sVar38);
        if ((puVar3 < puVar19) || (pbVar17 = param_1, puVar29 = puVar18, pbVar2 < param_1 + sVar38))
        goto LAB_10074d5e0;
        do {
          *puVar29 = *(undefined8 *)pbVar17;
          puVar29 = puVar29 + 1;
          pbVar17 = pbVar17 + 8;
        } while (puVar29 < puVar19);
        lVar33 = sVar38 - *(ushort *)(param_1 + sVar38);
        puVar20 = (undefined8 *)((long)puVar18 + lVar33);
        param_1 = param_1 + sVar38 + 2;
        if ((param_6 < 0x10000) && (puVar20 < (undefined8 *)((long)param_2 - lVar31)))
        goto LAB_10074d60b;
        uVar37 = bVar8 & 0xf;
        uVar25 = (ulong)uVar37;
        if (uVar37 == 0xf) {
          uVar25 = 0xf;
          do {
            if (pbVar5 < param_1) goto LAB_10074d60b;
            bVar8 = *param_1;
            param_1 = param_1 + 1;
            uVar25 = uVar25 + bVar8;
          } while ((ulong)bVar8 == 0xff);
          if ((long)(uVar25 + sVar38) < (long)sVar38) goto LAB_10074d60b;
        }
        lVar30 = uVar25 + 4 + sVar38;
        puVar23 = (undefined8 *)((long)puVar18 + lVar30);
        puVar29 = puVar23;
        if (puVar20 < param_2) {
          if (puVar36 < puVar23) goto LAB_10074d60b;
          sVar26 = uVar25 + 4;
          uVar35 = (long)param_2 - (long)puVar20;
          pvVar28 = (void *)((lVar31 - uVar35) + param_5);
          uVar25 = sVar26 - uVar35;
          if (sVar26 < uVar35 || uVar25 == 0) {
            _memmove(puVar19,pvVar28,sVar26);
          }
          else {
            _memcpy(puVar19,pvVar28,uVar35);
            puVar29 = (undefined8 *)((long)puVar18 + sVar38 + uVar35);
            if ((ulong)((long)puVar29 - (long)param_2) < uVar25) {
              puVar18 = param_2;
              if ((long)(sVar38 + uVar35) < lVar30) {
                do {
                  uVar10 = *(undefined1 *)puVar18;
                  puVar18 = (undefined8 *)((long)puVar18 + 1);
                  *(undefined1 *)puVar29 = uVar10;
                  puVar29 = (undefined8 *)((long)puVar29 + 1);
                } while (puVar29 < puVar23);
              }
            }
            else {
              _memcpy(puVar29,param_2,uVar25);
              puVar29 = puVar23;
            }
          }
          goto LAB_10074cc93;
        }
        lVar30 = (long)puVar19 - (long)puVar20;
        if (lVar30 < 8) {
          *(undefined1 *)((long)puVar18 + sVar38) = *(undefined1 *)((long)puVar18 + lVar33);
          *(undefined1 *)((long)puVar18 + sVar38 + 1) = *(undefined1 *)((long)puVar18 + lVar33 + 1);
          *(undefined1 *)((long)puVar18 + sVar38 + 2) = *(undefined1 *)((long)puVar18 + lVar33 + 2);
          *(undefined1 *)((long)puVar18 + sVar38 + 3) = *(undefined1 *)((long)puVar18 + lVar33 + 3);
          lVar11 = *(long *)(&DAT_100b4ac60 + lVar30 * 8);
          *(undefined4 *)((long)puVar18 + sVar38 + 4) =
               *(undefined4 *)((long)puVar18 + lVar33 + lVar11);
          puVar34 = (undefined1 *)((lVar33 + lVar11) - *(long *)(&DAT_100b4aca0 + lVar30 * 8));
        }
        else {
          *puVar19 = *puVar20;
          puVar34 = (undefined1 *)(lVar33 + 8);
        }
        puVar19 = (undefined8 *)((long)puVar18 + (long)puVar34);
        puVar20 = (undefined8 *)(sVar38 + 8 + (long)puVar18);
        if (puVar3 < puVar23) {
          if (puVar36 < puVar23) goto LAB_10074d60b;
          puVar22 = puVar20;
          if (puVar20 < puVar4) {
            do {
              *puVar22 = *puVar19;
              puVar22 = puVar22 + 1;
              puVar19 = puVar19 + 1;
            } while (puVar22 < puVar4);
            puVar34 = (undefined1 *)((long)puVar4 + ((long)puVar34 - (long)puVar20));
            puVar19 = (undefined8 *)((long)puVar18 + (long)puVar34);
            puVar20 = puVar4;
          }
          if (puVar20 < puVar23) {
            lVar33 = uVar25 + sVar38;
            lVar30 = lVar33 - (long)puVar20;
            puVar23 = puVar20;
            if ((undefined1 *)(lVar30 + (long)puVar18) != (undefined1 *)0xfffffffffffffffc) {
              puVar7 = (undefined1 *)(lVar30 + 4 + (long)puVar18);
              puVar32 = (undefined1 *)((ulong)puVar7 & 0xffffffffffffffe0);
              if (puVar32 == (undefined1 *)0x0) {
                puVar32 = (undefined1 *)0x0;
              }
              else if (((undefined1 *)((long)puVar18 + 3) + (long)(lVar30 + (long)puVar19) < puVar20
                       ) || ((undefined8 *)(lVar33 + 3 + (long)puVar18) < puVar19)) {
                puVar19 = (undefined8 *)(puVar32 + (long)puVar34 + (long)puVar18);
                puVar23 = (undefined8 *)((long)puVar20 + (long)puVar32);
                puVar20 = puVar20 + 2;
                puVar22 = (undefined8 *)((long)puVar18 + (long)(puVar34 + 0x10));
                uVar25 = (ulong)puVar7 & 0xffffffffffffffe0;
                do {
                  uVar12 = puVar22[-1];
                  uVar13 = *puVar22;
                  uVar14 = puVar22[1];
                  puVar20[-2] = puVar22[-2];
                  puVar20[-1] = uVar12;
                  *puVar20 = uVar13;
                  puVar20[1] = uVar14;
                  puVar20 = puVar20 + 4;
                  puVar22 = puVar22 + 4;
                  uVar25 = uVar25 - 0x20;
                } while (uVar25 != 0);
              }
              else {
                puVar32 = (undefined1 *)0x0;
              }
              if (puVar7 == puVar32) goto LAB_10074cc93;
            }
            puVar34 = (undefined1 *)((long)puVar23 + -4);
            do {
              uVar10 = *(undefined1 *)puVar19;
              puVar19 = (undefined8 *)((long)puVar19 + 1);
              puVar34[4] = uVar10;
              puVar34 = puVar34 + 1;
            } while ((undefined1 *)((long)puVar18 + lVar33) != puVar34);
          }
          goto LAB_10074cc93;
        }
        do {
          *puVar20 = *puVar19;
          puVar20 = puVar20 + 1;
          puVar19 = puVar19 + 1;
        } while (puVar20 < puVar23);
      } while( true );
    }
  }
  bVar39 = true;
  if (param_3 == 1) {
    bVar39 = *param_1 != 0;
  }
  return (int)((uint)bVar39 << 0x1f) >> 0x1f;
LAB_10074d613:
  if ((puVar18 <= (undefined8 *)((long)param_2 + lVar31)) && (param_1 + sVar38 == pbVar1)) {
LAB_10074d62d:
    _memcpy(puVar29,param_1,sVar38);
    return (int)puVar18 - iVar27;
  }
LAB_10074d641:
  iVar27 = (int)param_1;
  goto LAB_10074d647;
LAB_10074d5e0:
  if ((puVar19 <= (undefined8 *)((long)param_2 + lVar21)) && (param_1 + sVar38 == pbVar1)) {
    _memcpy(puVar18,param_1,sVar38);
    return (int)puVar19 - iVar27;
  }
LAB_10074d60b:
  iVar27 = (int)param_1;
LAB_10074d647:
  return (iVar15 - iVar27) + -1;
}

