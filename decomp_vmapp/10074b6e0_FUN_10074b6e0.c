
int FUN_10074b6e0(long *param_1,byte *param_2,undefined8 *param_3,int param_4,int param_5)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  byte bVar8;
  byte bVar9;
  undefined1 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 *puVar22;
  byte *pbVar23;
  ulong uVar24;
  size_t sVar25;
  long lVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  void *pvVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined1 *puVar32;
  long lVar33;
  undefined1 *puVar34;
  long lVar35;
  uint uVar36;
  size_t sVar37;
  int iVar38;
  ulong uVar39;
  ulong uVar40;
  bool bVar41;
  
  puVar11 = (undefined8 *)param_1[2];
  uVar12 = param_1[3];
  lVar33 = -uVar12;
  iVar38 = (int)param_2;
  if (puVar11 == param_3) {
    if (param_5 != 0) {
      puVar30 = (undefined8 *)(lVar33 + (long)param_3);
      lVar33 = *param_1;
      uVar24 = param_1[1];
      pbVar7 = param_2 + param_4;
      lVar21 = (long)param_5;
      pbVar1 = param_2 + (long)param_4 + -8;
      puVar11 = (undefined8 *)(lVar21 + -0xc + (long)param_3);
      puVar2 = (undefined8 *)(lVar21 + -8 + (long)param_3);
      puVar3 = (undefined8 *)(lVar21 + -5 + (long)param_3);
      pbVar4 = param_2 + (long)param_4 + -5;
      pbVar5 = param_2 + (long)param_4 + -0xf;
      puVar31 = param_3;
LAB_10074bc53:
      do {
        puVar20 = puVar31;
        bVar8 = *param_2;
        uVar36 = (uint)(bVar8 >> 4);
        sVar37 = (size_t)uVar36;
        pbVar19 = param_2 + 1;
        if (uVar36 == 0xf) {
          sVar37 = 0xf;
          pbVar23 = param_2;
          do {
            pbVar18 = pbVar19;
            param_2 = pbVar23 + 2;
            bVar9 = *pbVar18;
            sVar37 = sVar37 + bVar9;
            if (pbVar5 <= param_2) break;
            pbVar19 = param_2;
            pbVar23 = pbVar18;
          } while (bVar9 == 0xff);
          if (((long)sVar37 < 0) || (pbVar19 = param_2, (long)(sVar37 + 2) < 2)) goto LAB_10074c08c;
        }
        param_2 = pbVar19;
        puVar17 = (undefined8 *)((long)puVar20 + sVar37);
        if ((puVar11 < puVar17) || (pbVar19 = param_2, puVar31 = puVar20, pbVar1 < param_2 + sVar37)
           ) goto LAB_10074c061;
        do {
          *puVar31 = *(undefined8 *)pbVar19;
          puVar31 = puVar31 + 1;
          pbVar19 = pbVar19 + 8;
        } while (puVar31 < puVar17);
        lVar35 = sVar37 - *(ushort *)(param_2 + sVar37);
        puVar27 = (undefined8 *)((long)puVar20 + lVar35);
        param_2 = param_2 + sVar37 + 2;
        if ((uVar24 < 0x10000) && (puVar27 < (undefined8 *)((long)param_3 - (uVar12 + uVar24))))
        goto LAB_10074c08c;
        uVar36 = bVar8 & 0xf;
        uVar39 = (ulong)uVar36;
        if (uVar36 == 0xf) {
          uVar39 = 0xf;
          do {
            if (pbVar4 < param_2) goto LAB_10074c08c;
            bVar8 = *param_2;
            param_2 = param_2 + 1;
            uVar39 = uVar39 + bVar8;
          } while ((ulong)bVar8 == 0xff);
          if ((long)(uVar39 + sVar37) < (long)sVar37) goto LAB_10074c08c;
        }
        lVar26 = uVar39 + 4 + sVar37;
        puVar28 = (undefined8 *)((long)puVar20 + lVar26);
        puVar31 = puVar28;
        if (puVar27 < puVar30) {
          if (puVar3 < puVar28) goto LAB_10074c08c;
          sVar25 = uVar39 + 4;
          uVar40 = (long)puVar30 - (long)puVar27;
          pvVar29 = (void *)((uVar24 - uVar40) + lVar33);
          uVar39 = sVar25 - uVar40;
          if (sVar25 < uVar40 || uVar39 == 0) {
            _memmove(puVar17,pvVar29,sVar25);
          }
          else {
            _memcpy(puVar17,pvVar29,uVar40);
            puVar31 = (undefined8 *)((long)puVar20 + sVar37 + uVar40);
            if ((ulong)((long)puVar31 - (long)puVar30) < uVar39) {
              puVar20 = puVar30;
              if ((long)(sVar37 + uVar40) < lVar26) {
                do {
                  uVar10 = *(undefined1 *)puVar20;
                  puVar20 = (undefined8 *)((long)puVar20 + 1);
                  *(undefined1 *)puVar31 = uVar10;
                  puVar31 = (undefined8 *)((long)puVar31 + 1);
                } while (puVar31 < puVar28);
              }
            }
            else {
              _memcpy(puVar31,puVar30,uVar39);
              puVar31 = puVar28;
            }
          }
          goto LAB_10074bc53;
        }
        lVar26 = (long)puVar17 - (long)puVar27;
        if (lVar26 < 8) {
          *(undefined1 *)((long)puVar20 + sVar37) = *(undefined1 *)((long)puVar20 + lVar35);
          *(undefined1 *)((long)puVar20 + sVar37 + 1) = *(undefined1 *)((long)puVar20 + lVar35 + 1);
          *(undefined1 *)((long)puVar20 + sVar37 + 2) = *(undefined1 *)((long)puVar20 + lVar35 + 2);
          *(undefined1 *)((long)puVar20 + sVar37 + 3) = *(undefined1 *)((long)puVar20 + lVar35 + 3);
          lVar13 = *(long *)(&DAT_100b4ac60 + lVar26 * 8);
          *(undefined4 *)((long)puVar20 + sVar37 + 4) =
               *(undefined4 *)((long)puVar20 + lVar35 + lVar13);
          puVar32 = (undefined1 *)((lVar35 + lVar13) - *(long *)(&DAT_100b4aca0 + lVar26 * 8));
        }
        else {
          *puVar17 = *puVar27;
          puVar32 = (undefined1 *)(lVar35 + 8);
        }
        puVar17 = (undefined8 *)((long)puVar20 + (long)puVar32);
        puVar27 = (undefined8 *)(sVar37 + 8 + (long)puVar20);
        if (puVar11 < puVar28) {
          if (puVar3 < puVar28) goto LAB_10074c08c;
          puVar22 = puVar27;
          if (puVar27 < puVar2) {
            do {
              *puVar22 = *puVar17;
              puVar22 = puVar22 + 1;
              puVar17 = puVar17 + 1;
            } while (puVar22 < puVar2);
            puVar32 = (undefined1 *)((long)puVar2 + ((long)puVar32 - (long)puVar27));
            puVar17 = (undefined8 *)((long)puVar20 + (long)puVar32);
            puVar27 = puVar2;
          }
          if (puVar27 < puVar28) {
            lVar35 = uVar39 + sVar37;
            lVar26 = lVar35 - (long)puVar27;
            puVar28 = puVar27;
            if ((undefined1 *)(lVar26 + (long)puVar20) != (undefined1 *)0xfffffffffffffffc) {
              puVar6 = (undefined1 *)(lVar26 + 4 + (long)puVar20);
              puVar34 = (undefined1 *)((ulong)puVar6 & 0xffffffffffffffe0);
              if (puVar34 == (undefined1 *)0x0) {
                puVar34 = (undefined1 *)0x0;
              }
              else if (((undefined1 *)((long)puVar20 + 3) + (long)(lVar26 + (long)puVar17) < puVar27
                       ) || ((undefined8 *)(lVar35 + 3 + (long)puVar20) < puVar17)) {
                puVar17 = (undefined8 *)(puVar34 + (long)puVar32 + (long)puVar20);
                puVar28 = (undefined8 *)((long)puVar27 + (long)puVar34);
                puVar27 = puVar27 + 2;
                puVar22 = (undefined8 *)((long)puVar20 + (long)(puVar32 + 0x10));
                uVar39 = (ulong)puVar6 & 0xffffffffffffffe0;
                do {
                  uVar14 = puVar22[-1];
                  uVar15 = *puVar22;
                  uVar16 = puVar22[1];
                  puVar27[-2] = puVar22[-2];
                  puVar27[-1] = uVar14;
                  *puVar27 = uVar15;
                  puVar27[1] = uVar16;
                  puVar27 = puVar27 + 4;
                  puVar22 = puVar22 + 4;
                  uVar39 = uVar39 - 0x20;
                } while (uVar39 != 0);
              }
              else {
                puVar34 = (undefined1 *)0x0;
              }
              if (puVar6 == puVar34) goto LAB_10074bc53;
            }
            puVar32 = (undefined1 *)((long)puVar28 + -4);
            do {
              uVar10 = *(undefined1 *)puVar17;
              puVar17 = (undefined8 *)((long)puVar17 + 1);
              puVar32[4] = uVar10;
              puVar32 = puVar32 + 1;
            } while ((undefined1 *)((long)puVar20 + lVar35) != puVar32);
          }
          goto LAB_10074bc53;
        }
        do {
          *puVar27 = *puVar17;
          puVar27 = puVar27 + 1;
          puVar17 = puVar17 + 1;
        } while (puVar27 < puVar28);
      } while( true );
    }
  }
  else {
    param_1[1] = uVar12;
    *param_1 = (long)puVar11 + lVar33;
    if (param_5 != 0) {
      pbVar7 = param_2 + param_4;
      lVar21 = (long)param_5;
      pbVar1 = param_2 + (long)param_4 + -8;
      puVar2 = (undefined8 *)(lVar21 + -0xc + (long)param_3);
      puVar3 = (undefined8 *)(lVar21 + -8 + (long)param_3);
      puVar31 = (undefined8 *)(lVar21 + -5 + (long)param_3);
      pbVar4 = param_2 + (long)param_4 + -5;
      pbVar5 = param_2 + (long)param_4 + -0xf;
      puVar30 = param_3;
LAB_10074b863:
      do {
        puVar20 = puVar30;
        bVar8 = *param_2;
        uVar36 = (uint)(bVar8 >> 4);
        sVar37 = (size_t)uVar36;
        pbVar19 = param_2 + 1;
        pbVar23 = param_2;
        param_2 = param_2 + 1;
        if (uVar36 == 0xf) {
          do {
            pbVar18 = pbVar19;
            param_2 = pbVar23 + 2;
            bVar9 = *pbVar18;
            sVar37 = sVar37 + bVar9;
            if (pbVar5 <= param_2) break;
            pbVar19 = param_2;
            pbVar23 = pbVar18;
          } while (bVar9 == 0xff);
          if (((long)sVar37 < 0) || ((long)(sVar37 + 2) < 2)) goto LAB_10074c0ab;
        }
        puVar17 = (undefined8 *)((long)puVar20 + sVar37);
        if ((puVar2 < puVar17) || (pbVar19 = param_2, puVar30 = puVar20, pbVar1 < param_2 + sVar37))
        goto LAB_10074c032;
        do {
          *puVar30 = *(undefined8 *)pbVar19;
          puVar30 = puVar30 + 1;
          pbVar19 = pbVar19 + 8;
        } while (puVar30 < puVar17);
        lVar35 = sVar37 - *(ushort *)(param_2 + sVar37);
        puVar27 = (undefined8 *)((long)puVar20 + lVar35);
        param_2 = param_2 + sVar37 + 2;
        if ((uVar12 < 0x10000) && (puVar27 < (undefined8 *)(lVar33 + (long)param_3)))
        goto LAB_10074c0ab;
        uVar36 = bVar8 & 0xf;
        uVar24 = (ulong)uVar36;
        if (uVar36 == 0xf) {
          uVar24 = 0xf;
          do {
            if (pbVar4 < param_2) goto LAB_10074c0ab;
            bVar8 = *param_2;
            param_2 = param_2 + 1;
            uVar24 = uVar24 + bVar8;
          } while ((ulong)bVar8 == 0xff);
          if ((long)(uVar24 + sVar37) < (long)sVar37) goto LAB_10074c0ab;
        }
        lVar26 = uVar24 + 4 + sVar37;
        puVar28 = (undefined8 *)((long)puVar20 + lVar26);
        puVar30 = puVar28;
        if (puVar27 < param_3) {
          if (puVar31 < puVar28) goto LAB_10074c0ab;
          sVar25 = uVar24 + 4;
          uVar39 = (long)param_3 - (long)puVar27;
          uVar24 = sVar25 - uVar39;
          if (sVar25 < uVar39 || uVar24 == 0) {
            _memmove(puVar17,(void *)((long)puVar11 - uVar39),sVar25);
          }
          else {
            _memcpy(puVar17,(void *)((long)puVar11 - uVar39),uVar39);
            puVar30 = (undefined8 *)((long)puVar20 + sVar37 + uVar39);
            if ((ulong)((long)puVar30 - (long)param_3) < uVar24) {
              puVar20 = param_3;
              if ((long)(sVar37 + uVar39) < lVar26) {
                do {
                  *(undefined1 *)puVar30 = *(undefined1 *)puVar20;
                  puVar30 = (undefined8 *)((long)puVar30 + 1);
                  puVar20 = (undefined8 *)((long)puVar20 + 1);
                } while (puVar30 < puVar28);
              }
            }
            else {
              _memcpy(puVar30,param_3,uVar24);
              puVar30 = puVar28;
            }
          }
          goto LAB_10074b863;
        }
        lVar26 = (long)puVar17 - (long)puVar27;
        if (lVar26 < 8) {
          *(undefined1 *)((long)puVar20 + sVar37) = *(undefined1 *)((long)puVar20 + lVar35);
          *(undefined1 *)((long)puVar20 + sVar37 + 1) = *(undefined1 *)((long)puVar20 + lVar35 + 1);
          *(undefined1 *)((long)puVar20 + sVar37 + 2) = *(undefined1 *)((long)puVar20 + lVar35 + 2);
          *(undefined1 *)((long)puVar20 + sVar37 + 3) = *(undefined1 *)((long)puVar20 + lVar35 + 3);
          lVar13 = *(long *)(&DAT_100b4ac60 + lVar26 * 8);
          *(undefined4 *)((long)puVar20 + sVar37 + 4) =
               *(undefined4 *)((long)puVar20 + lVar35 + lVar13);
          puVar32 = (undefined1 *)((lVar35 + lVar13) - *(long *)(&DAT_100b4aca0 + lVar26 * 8));
        }
        else {
          *puVar17 = *puVar27;
          puVar32 = (undefined1 *)(lVar35 + 8);
        }
        puVar17 = (undefined8 *)((long)puVar20 + (long)puVar32);
        puVar27 = (undefined8 *)(sVar37 + 8 + (long)puVar20);
        if (puVar2 < puVar28) {
          if (puVar31 < puVar28) goto LAB_10074c0ab;
          puVar22 = puVar27;
          if (puVar27 < puVar3) {
            do {
              *puVar22 = *puVar17;
              puVar22 = puVar22 + 1;
              puVar17 = puVar17 + 1;
            } while (puVar22 < puVar3);
            puVar32 = (undefined1 *)((long)puVar3 + ((long)puVar32 - (long)puVar27));
            puVar17 = (undefined8 *)((long)puVar20 + (long)puVar32);
            puVar27 = puVar3;
          }
          if (puVar27 < puVar28) {
            lVar35 = uVar24 + sVar37;
            lVar26 = lVar35 - (long)puVar27;
            puVar28 = puVar27;
            if ((undefined1 *)(lVar26 + (long)puVar20) != (undefined1 *)0xfffffffffffffffc) {
              puVar6 = (undefined1 *)(lVar26 + 4 + (long)puVar20);
              puVar34 = (undefined1 *)((ulong)puVar6 & 0xffffffffffffffe0);
              if ((puVar34 == (undefined1 *)0x0) ||
                 ((puVar27 <= (undefined1 *)((long)puVar20 + 3) + (long)(lVar26 + (long)puVar17) &&
                  (puVar17 <= (undefined8 *)(lVar35 + 3 + (long)puVar20))))) {
                puVar34 = (undefined1 *)0x0;
              }
              else {
                puVar17 = (undefined8 *)(puVar34 + (long)puVar32 + (long)puVar20);
                puVar28 = (undefined8 *)((long)puVar27 + (long)puVar34);
                puVar27 = puVar27 + 2;
                puVar22 = (undefined8 *)((long)puVar20 + (long)(puVar32 + 0x10));
                uVar24 = (ulong)puVar6 & 0xffffffffffffffe0;
                do {
                  uVar14 = puVar22[-1];
                  uVar15 = *puVar22;
                  uVar16 = puVar22[1];
                  puVar27[-2] = puVar22[-2];
                  puVar27[-1] = uVar14;
                  *puVar27 = uVar15;
                  puVar27[1] = uVar16;
                  puVar27 = puVar27 + 4;
                  puVar22 = puVar22 + 4;
                  uVar24 = uVar24 - 0x20;
                } while (uVar24 != 0);
              }
              if (puVar6 == puVar34) goto LAB_10074b863;
            }
            puVar32 = (undefined1 *)((long)puVar28 + -4);
            do {
              uVar10 = *(undefined1 *)puVar17;
              puVar17 = (undefined8 *)((long)puVar17 + 1);
              puVar32[4] = uVar10;
              puVar32 = puVar32 + 1;
            } while ((undefined1 *)((long)puVar20 + lVar35) != puVar32);
          }
          goto LAB_10074b863;
        }
        do {
          *puVar27 = *puVar17;
          puVar27 = puVar27 + 1;
          puVar17 = puVar17 + 1;
        } while (puVar27 < puVar28);
      } while( true );
    }
  }
  bVar41 = true;
  if (param_4 == 1) {
    bVar41 = *param_2 != 0;
  }
  return (int)((uint)bVar41 << 0x1f) >> 0x1f;
LAB_10074c061:
  if ((puVar17 <= (undefined8 *)((long)param_3 + lVar21)) && (param_2 + sVar37 == pbVar7)) {
    _memcpy(puVar20,param_2,sVar37);
    iVar38 = (int)puVar17 - (int)param_3;
    goto LAB_10074c092;
  }
LAB_10074c08c:
  iVar38 = (iVar38 - (int)param_2) + -1;
LAB_10074c092:
  if (iVar38 < 1) {
    return iVar38;
  }
  param_1[3] = param_1[3] + (long)iVar38;
  puVar32 = (undefined1 *)((long)iVar38 + param_1[2]);
  goto LAB_10074c0c4;
LAB_10074c032:
  if ((puVar17 <= (undefined8 *)((long)param_3 + lVar21)) && (param_2 + sVar37 == pbVar7)) {
    _memcpy(puVar20,param_2,sVar37);
    iVar38 = (int)puVar17 - (int)param_3;
    goto LAB_10074c0b1;
  }
LAB_10074c0ab:
  iVar38 = (iVar38 - (int)param_2) + -1;
LAB_10074c0b1:
  if (iVar38 < 1) {
    return iVar38;
  }
  param_1[3] = (long)iVar38;
  puVar32 = (undefined1 *)((long)param_3 + (long)iVar38);
LAB_10074c0c4:
  param_1[2] = (long)puVar32;
  return iVar38;
}

