
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100445170(ushort *param_1,int param_2,int param_3,uint param_4,char *param_5,uint param_6)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  ushort *puVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ushort *puVar9;
  ushort *puVar10;
  ulong uVar11;
  long lVar12;
  ushort *puVar13;
  ushort *puVar14;
  int iVar15;
  long lVar16;
  undefined1 (*pauVar17) [16];
  int iVar18;
  ulong uVar19;
  int iVar20;
  long lVar21;
  int iVar22;
  undefined1 auVar23 [16];
  
  *param_5 = '\0';
  puVar13 = (ushort *)(param_5 + 1);
  if (0 < param_3) {
    lVar16 = (long)param_2;
    uVar3 = param_2 * param_3 * 2;
    lVar12 = 0;
    auVar23 = pshufb(ZEXT416(param_6),_DAT_100b3f5b0);
    do {
      if (0 < param_2) {
        lVar4 = param_3 - lVar12;
        iVar22 = 0;
        do {
          while (uVar1 = *param_1, (uint)uVar1 == (param_6 & 0xffff)) {
            param_1 = param_1 + 1;
            iVar22 = iVar22 + 1;
            if (param_2 <= iVar22) goto LAB_100445520;
          }
          puVar10 = param_1 + 1;
          puVar5 = puVar10;
          if (1 < lVar16 - iVar22) {
            puVar9 = param_1;
            puVar14 = puVar10;
            do {
              puVar5 = puVar14;
              if (*puVar14 != uVar1) break;
              puVar5 = puVar9 + 2;
              puVar9 = puVar14;
              puVar14 = puVar5;
            } while (puVar5 < param_1 + (lVar16 - iVar22));
          }
          puVar9 = param_1 + lVar16;
          iVar8 = 1;
          iVar18 = (int)((ulong)((long)puVar5 - (long)param_1) >> 1);
          if (1 < lVar4) {
            iVar8 = 1;
            puVar5 = puVar9;
            do {
              puVar14 = puVar5 + iVar18;
              while (puVar5 < puVar14) {
                uVar2 = *puVar5;
                puVar5 = puVar5 + 1;
                if (uVar2 != uVar1) goto LAB_1004452f0;
              }
              puVar5 = puVar5 + (param_2 - iVar18);
              iVar8 = iVar8 + 1;
            } while (iVar8 < lVar4);
          }
LAB_1004452f0:
          lVar21 = (long)iVar8;
          if (lVar21 < lVar4) {
            puVar5 = param_1 + iVar8 * lVar16;
            do {
              if (*puVar5 != uVar1) break;
              lVar21 = lVar21 + 1;
              puVar5 = puVar5 + lVar16;
            } while (lVar21 < lVar4);
            iVar20 = (int)lVar21;
            if (iVar20 != iVar8) {
              iVar15 = 1;
              if (1 < iVar18) {
                iVar15 = 1;
                puVar5 = param_1;
                do {
                  puVar14 = puVar10;
                  lVar21 = 0;
                  puVar10 = puVar14;
                  if (0 < iVar20) {
                    do {
                      if (*puVar10 != uVar1) goto LAB_100445386;
                      lVar21 = lVar21 + 1;
                      puVar10 = puVar10 + lVar16;
                    } while (lVar21 < iVar20);
                  }
                  iVar15 = iVar15 + 1;
                  puVar10 = puVar5 + 2;
                  puVar5 = puVar14;
                } while (iVar15 < iVar18);
              }
LAB_100445386:
              if (iVar8 * iVar18 < iVar15 * iVar20) {
                iVar8 = iVar20;
                iVar18 = iVar15;
              }
            }
          }
          *param_5 = *param_5 + '\x01';
          if ((param_4 & 0x10) != 0) {
            if ((char *)(ulong)uVar3 < (char *)((2 - (long)param_5) + (long)puVar13)) {
              return -1;
            }
            *puVar13 = *param_1;
            puVar13 = puVar13 + 1;
          }
          if ((long)(int)uVar3 < (long)((2 - (long)param_5) + (long)puVar13)) {
            return -1;
          }
          *(byte *)puVar13 = (byte)lVar12 | (byte)(iVar22 << 4);
          *(byte *)((long)puVar13 + 1) = (char)iVar8 - 1U | (char)iVar18 * '\x10' - 0x10U;
          if (param_2 < iVar8 * param_2) {
            do {
              if (0 < iVar18) {
                puVar5 = puVar9 + iVar18;
                puVar10 = puVar9 + 1;
                puVar14 = puVar10;
                if (puVar10 < puVar5) {
                  puVar14 = puVar5;
                }
                if (puVar10 < puVar5) {
                  puVar10 = puVar5;
                }
                uVar11 = ((long)puVar10 + ~(ulong)puVar9 >> 1) + 1;
                uVar19 = uVar11 & 0xfffffffffffffff0;
                uVar7 = 0;
                puVar10 = puVar9;
                if (uVar19 != 0) {
                  puVar10 = puVar9 + uVar19;
                  pauVar17 = (undefined1 (*) [16])(puVar9 + 8);
                  uVar6 = uVar11 & 0xfffffffffffffff0;
                  do {
                    pauVar17[-1] = auVar23;
                    *pauVar17 = auVar23;
                    pauVar17 = pauVar17 + 2;
                    uVar6 = uVar6 - 0x10;
                    uVar7 = uVar19;
                  } while (uVar6 != 0);
                }
                if (uVar11 != uVar7) {
                  do {
                    *puVar10 = (ushort)param_6;
                    puVar10 = puVar10 + 1;
                  } while (puVar10 < puVar5);
                }
                puVar9 = (ushort *)
                         ((long)puVar9 + ((long)puVar14 + ~(ulong)puVar9 & 0xfffffffffffffffe) + 2);
              }
              puVar9 = puVar9 + (param_2 - iVar18);
            } while (puVar9 < param_1 + iVar8 * param_2);
          }
          puVar13 = puVar13 + 1;
          param_1 = param_1 + iVar18;
          iVar22 = iVar18 + iVar22;
        } while (iVar22 < param_2);
      }
LAB_100445520:
      lVar12 = lVar12 + 1;
    } while (lVar12 < param_3);
  }
  return (int)puVar13 - (int)param_5;
}

