
int FUN_10074ef30(long param_1,ulong *param_2,ulong *param_3,uint *param_4,int param_5,int param_6)

{
  ulong *puVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong *puVar7;
  uint uVar8;
  char *pcVar9;
  ulong *puVar10;
  int iVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong *puVar14;
  uint uVar15;
  ulong *puVar17;
  ulong uVar18;
  ulong *puVar19;
  char *pcVar20;
  char cVar21;
  uint uVar22;
  ulong *puVar23;
  long lVar24;
  long lVar25;
  uint uVar26;
  char *pcVar27;
  long lVar28;
  ulong uVar16;
  
  iVar5 = 0;
  if (((0 < param_5) && (uVar15 = *param_4, uVar15 < 0x7e000001)) &&
     ((param_6 != 2 || ((int)uVar15 < 0x1000b)))) {
    lVar6 = (long)(int)uVar15;
    lVar28 = (long)param_5;
    pcVar20 = (char *)((long)param_3 + lVar28);
    iVar5 = (int)param_2;
    puVar17 = param_2;
    puVar23 = param_3;
    if (0xc < (int)uVar15) {
      *param_4 = 0;
      bVar2 = 0x1c - (param_6 == 2);
      uVar15 = (1 << (param_6 == 2 | 0xcU)) - 1;
      uVar16 = (ulong)uVar15;
      uVar18 = *param_2 * 0xcf1bbcdcbb >> (bVar2 & 0x3f) & uVar16;
      if (param_6 == 2) {
        *(undefined2 *)(param_1 + uVar18 * 2) = 0;
      }
      else if (param_6 == 1) {
        *(undefined4 *)(param_1 + uVar18 * 4) = 0;
      }
      else if (param_6 == 0) {
        *(ulong **)(param_1 + uVar18 * 8) = param_2;
      }
      if (1 < lVar6 + -0xc) {
        puVar1 = (ulong *)((long)param_2 + lVar6 + -0xc);
        pcVar27 = (char *)((long)param_3 + lVar28 + -6);
        puVar14 = (ulong *)((long)param_2 + 1);
        puVar19 = (ulong *)((long)param_2 + 2);
LAB_10074f089:
        uVar8 = uVar15 & (uint)(*puVar14 * 0xcf1bbcdcbb >> (bVar2 & 0x3f));
        uVar18 = 1;
        uVar4 = 0x41;
        while( true ) {
          puVar7 = puVar19;
          sVar3 = (short)param_2;
          if (param_6 == 1) {
            uVar13 = (ulong)uVar8;
            puVar12 = (ulong *)((ulong)*(uint *)(param_1 + uVar13 * 4) + (long)param_2);
            uVar8 = (uint)(*puVar7 * 0xcf1bbcdcbb >> 0x1c) & 0xfff;
            *(int *)(param_1 + uVar13 * 4) = (int)puVar14 - iVar5;
          }
          else if (param_6 == 0) {
            uVar13 = (ulong)uVar8;
            puVar12 = *(ulong **)(param_1 + uVar13 * 8);
            uVar8 = (uint)(*puVar7 * 0xcf1bbcdcbb >> 0x1c) & 0xfff;
            *(ulong **)(param_1 + uVar13 * 8) = puVar14;
          }
          else {
            uVar13 = (ulong)uVar8;
            puVar12 = (ulong *)((ulong)*(ushort *)(param_1 + uVar13 * 2) + (long)param_2);
            uVar8 = uVar15 & (uint)(*puVar7 * 0xcf1bbcdcbb >> (bVar2 & 0x3f));
            if (param_6 == 2) {
              *(short *)(param_1 + uVar13 * 2) = (short)puVar14 - sVar3;
            }
          }
          if ((param_6 == 2 || puVar14 <= (ulong *)((long)puVar12 + 0xffffU)) &&
             ((int)*puVar12 == (int)*puVar14)) break;
          puVar19 = (ulong *)(uVar18 + (long)puVar7);
          uVar18 = (ulong)(uVar4 >> 6);
          puVar14 = puVar7;
          uVar4 = uVar4 + 1;
          if (puVar1 < puVar19) goto LAB_10074f6da;
        }
        do {
          puVar19 = puVar14;
          puVar7 = puVar12;
          if ((puVar7 <= param_2) || (puVar19 <= puVar17)) break;
          puVar12 = (ulong *)((long)puVar7 + -1);
          puVar14 = (ulong *)((long)puVar19 + -1);
        } while (*(char *)((long)puVar19 + -1) == *(char *)((long)puVar7 + -1));
        uVar4 = (uint)((long)puVar19 - (long)puVar17);
        uVar18 = (long)puVar19 - (long)puVar17 & 0xffffffff;
        if ((char *)(uVar18 + 1 + (ulong)(uVar4 + 0xf0) / 0xff + (long)puVar23) <=
            (char *)((long)param_3 + lVar28 + -0xb)) {
          puVar14 = (ulong *)((long)puVar23 + 1);
          if (uVar4 < 0xf) {
            *(char *)puVar23 = (char)(uVar4 << 4);
            puVar12 = puVar14;
            puVar14 = puVar23;
            goto LAB_10074f398;
          }
          uVar8 = uVar4 - 0xf;
          *(char *)puVar23 = -0x10;
          if (uVar8 < 0xff) {
LAB_10074f32c:
            cVar21 = (char)uVar8;
          }
          else {
            uVar26 = ((int)puVar19 - (int)puVar17) - 0x10e;
            puVar12 = puVar23;
            uVar22 = uVar8;
            if ((uVar26 / 0xff + 1 & 7) != 0) {
              iVar11 = -((((int)puVar19 - (int)puVar17) - 0x10eU) / 0xff + 1 & 7);
              puVar10 = puVar23;
              do {
                puVar12 = puVar14;
                puVar14 = (ulong *)((long)puVar10 + 2);
                *(char *)puVar12 = -1;
                uVar22 = uVar22 - 0xff;
                iVar11 = iVar11 + 1;
                puVar10 = puVar12;
              } while (iVar11 != 0);
            }
            uVar8 = (uVar4 - 0x10e) % 0xff;
            cVar21 = (char)uVar8;
            if (uVar26 / 0xff < 7) goto LAB_10074f32c;
            do {
              *(char *)puVar14 = -1;
              *(char *)((long)puVar12 + 2) = -1;
              *(char *)((long)puVar14 + 2) = -1;
              *(char *)((long)puVar12 + 4) = -1;
              *(char *)((long)puVar14 + 4) = -1;
              *(char *)((long)puVar12 + 6) = -1;
              *(char *)((long)puVar14 + 6) = -1;
              puVar14 = puVar14 + 1;
              *(char *)(puVar12 + 1) = -1;
              uVar22 = uVar22 - 0x7f8;
              puVar12 = puVar12 + 1;
            } while (0xfe < uVar22);
          }
          *(char *)puVar14 = cVar21;
          puVar12 = (ulong *)((long)puVar14 + 1);
LAB_10074f398:
          puVar14 = (ulong *)((long)puVar14 + uVar18 + 1);
          do {
            *puVar12 = *puVar17;
            puVar12 = puVar12 + 1;
            puVar17 = puVar17 + 1;
          } while (puVar12 < puVar14);
          do {
            *(short *)puVar14 = (short)puVar19 - (short)puVar7;
            puVar17 = (ulong *)((long)puVar19 + 4);
            puVar7 = (ulong *)((long)puVar7 + 4);
            puVar12 = puVar17;
            if (puVar17 < puVar1) {
LAB_10074f410:
              if (*puVar7 == *puVar12) goto code_r0x00010074f41c;
              uVar13 = *puVar12 ^ *puVar7;
              uVar18 = 0;
              if (uVar13 != 0) {
                for (; (uVar13 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
                }
              }
              uVar18 = (long)puVar12 + ((uVar18 >> 3) - (long)puVar17);
              goto LAB_10074f493;
            }
LAB_10074f429:
            if ((puVar12 < (ulong *)(lVar6 + -8 + (long)param_2)) && ((int)*puVar7 == (int)*puVar12)
               ) {
              puVar12 = (ulong *)((long)puVar12 + 4);
              puVar7 = (ulong *)((long)puVar7 + 4);
            }
            if ((puVar12 < (ulong *)(lVar6 + -6 + (long)param_2)) &&
               ((short)*puVar7 == (short)*puVar12)) {
              puVar12 = (ulong *)((long)puVar12 + 2);
              puVar7 = (ulong *)((long)puVar7 + 2);
            }
            if ((puVar12 < (ulong *)((long)param_2 + lVar6 + -5)) &&
               ((char)*puVar7 == (char)*puVar12)) {
              puVar12 = (ulong *)((long)puVar12 + 1);
            }
            uVar18 = (long)puVar12 - (long)puVar17;
LAB_10074f493:
            puVar7 = (ulong *)((long)puVar14 + 2);
            uVar18 = uVar18 & 0xffffffff;
            if (pcVar27 < (char *)((uVar18 + 0xf0) / 0xff + 2 + (long)puVar14)) {
              uVar18 = ((long)pcVar27 - (long)puVar7) * 0xff + 0xe;
            }
            puVar17 = (ulong *)(uVar18 + 4 + (long)puVar19);
            if (uVar18 < 0xf) {
              *(char *)puVar23 = (char)*puVar23 + (char)uVar18;
              lVar25 = 2;
              puVar23 = puVar7;
            }
            else {
              *(char *)puVar23 = (char)*puVar23 + '\x0f';
              uVar13 = uVar18 - 0xf;
              if (uVar13 < 0xff) {
                lVar24 = 2;
              }
              else {
                uVar13 = (uVar18 - 0x10e) / 0xff;
                _memset(puVar7,0xff,uVar13 + 1);
                puVar7 = (ulong *)((long)puVar14 + uVar13 + 3);
                lVar24 = uVar13 + 3;
                uVar13 = (uVar18 - 0x10e) + uVar13 * -0xff;
              }
              *(char *)puVar7 = (char)uVar13;
              lVar25 = lVar24 + 1;
              puVar23 = (ulong *)((long)puVar14 + lVar24 + 1);
            }
            if ((puVar1 < puVar17) || ((ulong *)((long)param_3 + lVar28 + -0xc) < puVar23)) break;
            lVar24 = uVar18 + 2 + (long)puVar19;
            uVar13 = (ulong)(*(long *)(uVar18 + 2 + (long)puVar19) * 0xcf1bbcdcbb) >> (bVar2 & 0x3f)
                     & uVar16;
            if (param_6 == 2) {
              *(short *)(param_1 + uVar13 * 2) = (short)lVar24 - sVar3;
LAB_10074f662:
              uVar13 = *puVar17 * 0xcf1bbcdcbb >> (bVar2 & 0x3f) & uVar16;
              puVar7 = (ulong *)((ulong)*(ushort *)(param_1 + uVar13 * 2) + (long)param_2);
              if (param_6 == 2) {
                *(short *)(param_1 + uVar13 * 2) = (short)puVar17 - sVar3;
              }
            }
            else if (param_6 == 1) {
              *(int *)(param_1 + uVar13 * 4) = (int)lVar24 - iVar5;
              uVar13 = *puVar17 * 0xcf1bbcdcbb >> 0x1c & 0xfff;
              puVar7 = (ulong *)((ulong)*(uint *)(param_1 + uVar13 * 4) + (long)param_2);
              *(int *)(param_1 + uVar13 * 4) = (int)puVar17 - iVar5;
            }
            else {
              if (param_6 != 0) goto LAB_10074f662;
              *(long *)(param_1 + uVar13 * 8) = lVar24;
              uVar13 = *puVar17 * 0xcf1bbcdcbb >> 0x1c & 0xfff;
              puVar7 = *(ulong **)(param_1 + uVar13 * 8);
              *(ulong **)(param_1 + uVar13 * 8) = puVar17;
            }
            if (((ulong *)((long)puVar7 + 0xffffU) < puVar17) || ((int)*puVar7 != (int)*puVar17))
            goto LAB_10074f6ab;
            puVar14 = (ulong *)(lVar25 + 1 + (long)puVar14);
            *(char *)puVar23 = '\0';
            puVar19 = puVar17;
          } while( true );
        }
      }
    }
LAB_10074f6da:
    pcVar27 = (char *)((long)param_2 + (lVar6 - (long)puVar17));
    if (pcVar20 < (char *)((long)puVar23 + (long)(pcVar27 + (ulong)(pcVar27 + 0xf0) / 0xff + 1))) {
      pcVar27 = pcVar20 + ((-1 - (long)puVar23) - (ulong)(pcVar20 + (0xef - (long)puVar23)) / 0xff);
    }
    if (pcVar27 < (char *)0xf) {
      *(char *)puVar23 = (char)((long)pcVar27 << 4);
    }
    else {
      pcVar20 = pcVar27 + -0xf;
      *(char *)puVar23 = -0x10;
      puVar14 = (ulong *)((long)puVar23 + 1);
      pcVar9 = pcVar20;
      if ((char *)0xfe < pcVar20) {
        pcVar9 = (char *)((ulong)(pcVar27 + -0x10e) % 0xff);
        do {
          puVar19 = puVar14;
          *(char *)puVar19 = -1;
          pcVar20 = pcVar20 + -0xff;
          puVar14 = (ulong *)((long)puVar23 + 2);
          puVar23 = puVar19;
        } while ((char *)0xfe < pcVar20);
      }
      *(char *)puVar14 = (char)pcVar9;
      puVar23 = puVar14;
    }
    _memcpy((char *)((long)puVar23 + 1),puVar17,(size_t)pcVar27);
    *param_4 = ((int)puVar17 + (int)pcVar27) - iVar5;
    iVar5 = ((int)pcVar27 + 1 + (int)puVar23) - (int)param_3;
  }
  return iVar5;
code_r0x00010074f41c:
  puVar12 = puVar12 + 1;
  puVar7 = puVar7 + 1;
  if (puVar1 <= puVar12) goto LAB_10074f429;
  goto LAB_10074f410;
LAB_10074f6ab:
  puVar14 = (ulong *)(uVar18 + 5 + (long)puVar19);
  puVar19 = (ulong *)(uVar18 + 6 + (long)puVar19);
  if (puVar1 < puVar19) goto LAB_10074f6da;
  goto LAB_10074f089;
}

