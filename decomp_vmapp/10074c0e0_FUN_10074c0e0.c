
int FUN_10074c0e0(long *param_1,byte *param_2,undefined8 *param_3,int param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  int iVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  size_t sVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long lVar24;
  void *pvVar25;
  undefined1 *puVar26;
  long lVar27;
  undefined1 *puVar28;
  undefined8 *puVar29;
  uint uVar30;
  size_t sVar31;
  undefined8 *puVar32;
  
  lVar18 = param_1[3];
  iVar14 = (int)param_2;
  if ((undefined8 *)param_1[2] == param_3) {
    lVar27 = (long)param_4;
    if (param_4 == 0) {
      iVar14 = 1;
      if (*param_2 != 0) {
        return -1;
      }
    }
    else {
      puVar29 = (undefined8 *)(-lVar18 + (long)param_3);
      lVar18 = *param_1;
      lVar12 = param_1[1];
      puVar23 = (undefined8 *)(lVar27 + -8 + (long)param_3);
      puVar1 = (undefined8 *)(lVar27 + -5 + (long)param_3);
      puVar32 = param_3;
LAB_10074c4a3:
      puVar11 = puVar32;
      bVar3 = *param_2;
      uVar30 = (uint)(bVar3 >> 4);
      sVar31 = (size_t)uVar30;
      pbVar9 = param_2 + 1;
      if (uVar30 == 0xf) {
        do {
          pbVar10 = pbVar9;
          pbVar9 = param_2 + 2;
          uVar19 = (ulong)*pbVar10;
          sVar31 = sVar31 + uVar19;
          param_2 = pbVar10;
        } while (uVar19 == 0xff);
      }
      puVar13 = (undefined8 *)((long)puVar11 + sVar31);
      pbVar10 = pbVar9;
      puVar32 = puVar11;
      if (puVar13 <= puVar23) {
        do {
          *puVar32 = *(undefined8 *)pbVar10;
          puVar32 = puVar32 + 1;
          pbVar10 = pbVar10 + 8;
        } while (puVar32 < puVar13);
        lVar24 = sVar31 - *(ushort *)(pbVar9 + sVar31);
        puVar16 = (undefined8 *)((long)puVar11 + lVar24);
        param_2 = pbVar9 + sVar31 + 2;
        uVar30 = bVar3 & 0xf;
        uVar19 = (ulong)uVar30;
        if (uVar30 == 0xf) {
          do {
            bVar3 = *param_2;
            param_2 = param_2 + 1;
            uVar19 = uVar19 + bVar3;
          } while ((ulong)bVar3 == 0xff);
        }
        lVar15 = uVar19 + 4 + sVar31;
        puVar17 = (undefined8 *)((long)puVar11 + lVar15);
        puVar32 = puVar17;
        pbVar9 = param_2;
        if (puVar16 < puVar29) {
          if (puVar1 < puVar17) goto LAB_10074c7f1;
          sVar20 = uVar19 + 4;
          uVar21 = (long)puVar29 - (long)puVar16;
          pvVar25 = (void *)((lVar12 - uVar21) + lVar18);
          uVar19 = sVar20 - uVar21;
          if (sVar20 < uVar21 || uVar19 == 0) {
            _memmove(puVar13,pvVar25,sVar20);
          }
          else {
            _memcpy(puVar13,pvVar25,uVar21);
            puVar32 = (undefined8 *)((long)puVar11 + sVar31 + uVar21);
            if ((ulong)((long)puVar32 - (long)puVar29) < uVar19) {
              puVar11 = puVar29;
              if ((long)(sVar31 + uVar21) < lVar15) {
                do {
                  *(undefined1 *)puVar32 = *(undefined1 *)puVar11;
                  puVar32 = (undefined8 *)((long)puVar32 + 1);
                  puVar11 = (undefined8 *)((long)puVar11 + 1);
                } while (puVar32 < puVar17);
              }
            }
            else {
              _memcpy(puVar32,puVar29,uVar19);
              puVar32 = puVar17;
            }
          }
        }
        else {
          lVar15 = (long)puVar13 - (long)puVar16;
          if (lVar15 < 8) {
            *(undefined1 *)((long)puVar11 + sVar31) = *(undefined1 *)((long)puVar11 + lVar24);
            *(undefined1 *)((long)puVar11 + sVar31 + 1) =
                 *(undefined1 *)((long)puVar11 + lVar24 + 1);
            *(undefined1 *)((long)puVar11 + sVar31 + 2) =
                 *(undefined1 *)((long)puVar11 + lVar24 + 2);
            *(undefined1 *)((long)puVar11 + sVar31 + 3) =
                 *(undefined1 *)((long)puVar11 + lVar24 + 3);
            lVar5 = *(long *)(&DAT_100b4ac60 + lVar15 * 8);
            *(undefined4 *)((long)puVar11 + sVar31 + 4) =
                 *(undefined4 *)((long)puVar11 + lVar24 + lVar5);
            puVar28 = (undefined1 *)((lVar24 + lVar5) - *(long *)(&DAT_100b4aca0 + lVar15 * 8));
          }
          else {
            *puVar13 = *puVar16;
            puVar28 = (undefined1 *)(lVar24 + 8);
          }
          puVar13 = (undefined8 *)((long)puVar11 + (long)puVar28);
          puVar16 = (undefined8 *)(sVar31 + 8 + (long)puVar11);
          if ((undefined8 *)(lVar27 + -0xc + (long)param_3) < puVar17) {
            if (puVar1 < puVar17) goto LAB_10074c7f1;
            puVar22 = puVar16;
            if (puVar16 < puVar23) {
              do {
                *puVar22 = *puVar13;
                puVar22 = puVar22 + 1;
                puVar13 = puVar13 + 1;
              } while (puVar22 < puVar23);
              puVar28 = (undefined1 *)((long)puVar23 + ((long)puVar28 - (long)puVar16));
              puVar13 = (undefined8 *)((long)puVar11 + (long)puVar28);
              puVar16 = puVar23;
            }
            if (puVar16 < puVar17) {
              lVar24 = uVar19 + sVar31;
              lVar15 = lVar24 - (long)puVar16;
              puVar17 = puVar16;
              if ((undefined1 *)(lVar15 + (long)puVar11) != (undefined1 *)0xfffffffffffffffc) {
                puVar2 = (undefined1 *)(lVar15 + 4 + (long)puVar11);
                puVar26 = (undefined1 *)((ulong)puVar2 & 0xffffffffffffffe0);
                if (puVar26 == (undefined1 *)0x0) {
                  puVar26 = (undefined1 *)0x0;
                }
                else if (((undefined1 *)((long)puVar11 + 3) + (long)(lVar15 + (long)puVar13) <
                          puVar16) || ((undefined8 *)(lVar24 + 3 + (long)puVar11) < puVar13)) {
                  puVar13 = (undefined8 *)(puVar26 + (long)puVar28 + (long)puVar11);
                  puVar17 = (undefined8 *)((long)puVar16 + (long)puVar26);
                  puVar16 = puVar16 + 2;
                  puVar22 = (undefined8 *)((long)puVar11 + (long)(puVar28 + 0x10));
                  uVar19 = (ulong)puVar2 & 0xffffffffffffffe0;
                  do {
                    uVar6 = puVar22[-1];
                    uVar7 = *puVar22;
                    uVar8 = puVar22[1];
                    puVar16[-2] = puVar22[-2];
                    puVar16[-1] = uVar6;
                    *puVar16 = uVar7;
                    puVar16[1] = uVar8;
                    puVar16 = puVar16 + 4;
                    puVar22 = puVar22 + 4;
                    uVar19 = uVar19 - 0x20;
                  } while (uVar19 != 0);
                }
                else {
                  puVar26 = (undefined1 *)0x0;
                }
                if (puVar2 == puVar26) goto LAB_10074c4a3;
              }
              puVar28 = (undefined1 *)((long)puVar17 + -4);
              do {
                uVar4 = *(undefined1 *)puVar13;
                puVar13 = (undefined8 *)((long)puVar13 + 1);
                puVar28[4] = uVar4;
                puVar28 = puVar28 + 1;
              } while ((undefined1 *)((long)puVar11 + lVar24) != puVar28);
            }
          }
          else {
            do {
              *puVar16 = *puVar13;
              puVar16 = puVar16 + 1;
              puVar13 = puVar13 + 1;
            } while (puVar16 < puVar17);
          }
        }
        goto LAB_10074c4a3;
      }
      if (puVar13 == (undefined8 *)((long)param_3 + lVar27)) {
        _memcpy(puVar11,pbVar9,sVar31);
        iVar14 = ((int)pbVar9 + (int)sVar31) - iVar14;
        goto LAB_10074c852;
      }
LAB_10074c7f1:
      iVar14 = (iVar14 - (int)pbVar9) + -1;
LAB_10074c852:
      if (iVar14 < 1) {
        return iVar14;
      }
      param_3 = (undefined8 *)param_1[2];
      lVar18 = param_1[3];
    }
    param_1[3] = lVar18 + lVar27;
    puVar23 = (undefined8 *)((long)param_3 + lVar27);
  }
  else {
    param_1[1] = lVar18;
    *param_1 = -lVar18 + (long)param_3;
    lVar18 = (long)param_4;
    puVar23 = (undefined8 *)((long)param_3 + lVar18);
    if (param_4 == 0) {
      iVar14 = 1;
      if (*param_2 != 0) {
        return -1;
      }
    }
    else {
      puVar1 = (undefined8 *)(lVar18 + -8 + (long)param_3);
      puVar32 = (undefined8 *)(lVar18 + -5 + (long)param_3);
      puVar29 = param_3;
LAB_10074c163:
      puVar11 = puVar29;
      bVar3 = *param_2;
      uVar30 = (uint)(bVar3 >> 4);
      sVar31 = (size_t)uVar30;
      pbVar9 = param_2 + 1;
      if (uVar30 == 0xf) {
        do {
          pbVar10 = pbVar9;
          pbVar9 = param_2 + 2;
          uVar19 = (ulong)*pbVar10;
          sVar31 = sVar31 + uVar19;
          param_2 = pbVar10;
        } while (uVar19 == 0xff);
      }
      puVar13 = (undefined8 *)((long)puVar11 + sVar31);
      pbVar10 = pbVar9;
      puVar29 = puVar11;
      if (puVar13 <= puVar1) {
        do {
          *puVar29 = *(undefined8 *)pbVar10;
          puVar29 = puVar29 + 1;
          pbVar10 = pbVar10 + 8;
        } while (puVar29 < puVar13);
        lVar27 = sVar31 - *(ushort *)(pbVar9 + sVar31);
        puVar16 = (undefined8 *)((long)puVar11 + lVar27);
        param_2 = pbVar9 + sVar31 + 2;
        uVar30 = bVar3 & 0xf;
        uVar19 = (ulong)uVar30;
        if (uVar30 == 0xf) {
          do {
            bVar3 = *param_2;
            param_2 = param_2 + 1;
            uVar19 = uVar19 + bVar3;
          } while ((ulong)bVar3 == 0xff);
        }
        lVar12 = uVar19 + 4 + sVar31;
        puVar17 = (undefined8 *)((long)puVar11 + lVar12);
        pbVar9 = param_2;
        puVar29 = puVar17;
        if (puVar16 < param_3) {
          if (puVar32 < puVar17) goto LAB_10074c7b9;
          sVar20 = uVar19 + 4;
          uVar21 = (long)param_3 - (long)puVar16;
          uVar19 = sVar20 - uVar21;
          if (sVar20 < uVar21 || uVar19 == 0) {
            _memmove(puVar13,puVar16,sVar20);
          }
          else {
            _memcpy(puVar13,puVar16,uVar21);
            puVar29 = (undefined8 *)((long)puVar11 + sVar31 + uVar21);
            if ((ulong)((long)puVar29 - (long)param_3) < uVar19) {
              puVar11 = param_3;
              if ((long)(sVar31 + uVar21) < lVar12) {
                do {
                  uVar4 = *(undefined1 *)puVar11;
                  puVar11 = (undefined8 *)((long)puVar11 + 1);
                  *(undefined1 *)puVar29 = uVar4;
                  puVar29 = (undefined8 *)((long)puVar29 + 1);
                } while (puVar29 < puVar17);
              }
            }
            else {
              _memcpy(puVar29,param_3,uVar19);
              puVar29 = puVar17;
            }
          }
        }
        else {
          lVar12 = (long)puVar13 - (long)puVar16;
          if (lVar12 < 8) {
            *(undefined1 *)((long)puVar11 + sVar31) = *(undefined1 *)((long)puVar11 + lVar27);
            *(undefined1 *)((long)puVar11 + sVar31 + 1) =
                 *(undefined1 *)((long)puVar11 + lVar27 + 1);
            *(undefined1 *)((long)puVar11 + sVar31 + 2) =
                 *(undefined1 *)((long)puVar11 + lVar27 + 2);
            *(undefined1 *)((long)puVar11 + sVar31 + 3) =
                 *(undefined1 *)((long)puVar11 + lVar27 + 3);
            lVar24 = *(long *)(&DAT_100b4ac60 + lVar12 * 8);
            *(undefined4 *)((long)puVar11 + sVar31 + 4) =
                 *(undefined4 *)((long)puVar11 + lVar27 + lVar24);
            puVar28 = (undefined1 *)((lVar27 + lVar24) - *(long *)(&DAT_100b4aca0 + lVar12 * 8));
          }
          else {
            *puVar13 = *puVar16;
            puVar28 = (undefined1 *)(lVar27 + 8);
          }
          puVar13 = (undefined8 *)((long)puVar11 + (long)puVar28);
          puVar16 = (undefined8 *)(sVar31 + 8 + (long)puVar11);
          if ((undefined8 *)(lVar18 + -0xc + (long)param_3) < puVar17) {
            if (puVar32 < puVar17) goto LAB_10074c7b9;
            puVar22 = puVar16;
            if (puVar16 < puVar1) {
              do {
                *puVar22 = *puVar13;
                puVar22 = puVar22 + 1;
                puVar13 = puVar13 + 1;
              } while (puVar22 < puVar1);
              puVar28 = (undefined1 *)((long)puVar1 + ((long)puVar28 - (long)puVar16));
              puVar13 = (undefined8 *)((long)puVar11 + (long)puVar28);
              puVar16 = puVar1;
            }
            if (puVar16 < puVar17) {
              lVar27 = uVar19 + sVar31;
              lVar12 = lVar27 - (long)puVar16;
              puVar17 = puVar16;
              if ((undefined1 *)(lVar12 + (long)puVar11) != (undefined1 *)0xfffffffffffffffc) {
                puVar2 = (undefined1 *)(lVar12 + 4 + (long)puVar11);
                puVar26 = (undefined1 *)((ulong)puVar2 & 0xffffffffffffffe0);
                if (puVar26 == (undefined1 *)0x0) {
                  puVar26 = (undefined1 *)0x0;
                }
                else if (((undefined1 *)((long)puVar11 + 3) + (long)(lVar12 + (long)puVar13) <
                          puVar16) || ((undefined8 *)(lVar27 + 3 + (long)puVar11) < puVar13)) {
                  puVar13 = (undefined8 *)(puVar26 + (long)puVar28 + (long)puVar11);
                  puVar17 = (undefined8 *)((long)puVar16 + (long)puVar26);
                  puVar16 = puVar16 + 2;
                  puVar22 = (undefined8 *)((long)puVar11 + (long)(puVar28 + 0x10));
                  uVar19 = (ulong)puVar2 & 0xffffffffffffffe0;
                  do {
                    uVar6 = puVar22[-1];
                    uVar7 = *puVar22;
                    uVar8 = puVar22[1];
                    puVar16[-2] = puVar22[-2];
                    puVar16[-1] = uVar6;
                    *puVar16 = uVar7;
                    puVar16[1] = uVar8;
                    puVar16 = puVar16 + 4;
                    puVar22 = puVar22 + 4;
                    uVar19 = uVar19 - 0x20;
                  } while (uVar19 != 0);
                }
                else {
                  puVar26 = (undefined1 *)0x0;
                }
                if (puVar2 == puVar26) goto LAB_10074c163;
              }
              puVar28 = (undefined1 *)((long)puVar17 + -4);
              do {
                uVar4 = *(undefined1 *)puVar13;
                puVar13 = (undefined8 *)((long)puVar13 + 1);
                puVar28[4] = uVar4;
                puVar28 = puVar28 + 1;
              } while ((undefined1 *)((long)puVar11 + lVar27) != puVar28);
            }
          }
          else {
            do {
              *puVar16 = *puVar13;
              puVar16 = puVar16 + 1;
              puVar13 = puVar13 + 1;
            } while (puVar16 < puVar17);
          }
        }
        goto LAB_10074c163;
      }
      if (puVar13 == puVar23) {
        _memcpy(puVar11,pbVar9,sVar31);
        iVar14 = ((int)pbVar9 + (int)sVar31) - iVar14;
        goto LAB_10074c825;
      }
LAB_10074c7b9:
      iVar14 = (iVar14 - (int)pbVar9) + -1;
LAB_10074c825:
      if (iVar14 < 1) {
        return iVar14;
      }
    }
    param_1[3] = lVar18;
  }
  param_1[2] = (long)puVar23;
  return iVar14;
}

