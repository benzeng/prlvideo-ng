
int FUN_100444830(int *param_1,int param_2,int param_3,uint param_4,char *param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  int *piVar9;
  byte *pbVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  int *piVar20;
  ulong uVar21;
  
  *param_5 = '\0';
  pbVar10 = (byte *)(param_5 + 1);
  if (0 < param_3) {
    lVar14 = (long)param_2;
    uVar2 = param_2 * param_3 * 4;
    lVar8 = 0;
    do {
      if (0 < param_2) {
        lVar3 = param_3 - lVar8;
        iVar17 = 0;
        do {
          while (iVar1 = *param_1, iVar1 == param_6) {
            param_1 = param_1 + 1;
            iVar17 = iVar17 + 1;
            if (param_2 <= iVar17) goto LAB_100444c10;
          }
          piVar9 = param_1 + 1;
          piVar7 = piVar9;
          if (1 < lVar14 - iVar17) {
            piVar6 = param_1;
            piVar11 = piVar9;
            do {
              piVar7 = piVar11;
              if (*piVar11 != iVar1) break;
              piVar7 = piVar6 + 2;
              piVar6 = piVar11;
              piVar11 = piVar7;
            } while (piVar7 < param_1 + (lVar14 - iVar17));
          }
          piVar6 = param_1 + lVar14;
          iVar12 = 1;
          iVar16 = (int)((ulong)((long)piVar7 - (long)param_1) >> 2);
          if (1 < lVar3) {
            iVar12 = 1;
            piVar7 = piVar6;
            do {
              piVar11 = piVar7 + iVar16;
              while (piVar7 < piVar11) {
                iVar18 = *piVar7;
                piVar7 = piVar7 + 1;
                if (iVar18 != iVar1) goto LAB_1004449b0;
              }
              piVar7 = piVar7 + (param_2 - iVar16);
              iVar12 = iVar12 + 1;
            } while (iVar12 < lVar3);
          }
LAB_1004449b0:
          lVar19 = (long)iVar12;
          if (lVar19 < lVar3) {
            piVar7 = param_1 + iVar12 * lVar14;
            do {
              if (*piVar7 != iVar1) break;
              lVar19 = lVar19 + 1;
              piVar7 = piVar7 + lVar14;
            } while (lVar19 < lVar3);
            iVar18 = (int)lVar19;
            if (iVar18 != iVar12) {
              iVar13 = 1;
              if (1 < iVar16) {
                iVar13 = 1;
                piVar7 = param_1;
                do {
                  piVar11 = piVar9;
                  lVar19 = 0;
                  piVar9 = piVar11;
                  if (0 < iVar18) {
                    do {
                      if (*piVar9 != iVar1) goto LAB_100444a56;
                      lVar19 = lVar19 + 1;
                      piVar9 = piVar9 + lVar14;
                    } while (lVar19 < iVar18);
                  }
                  iVar13 = iVar13 + 1;
                  piVar9 = piVar7 + 2;
                  piVar7 = piVar11;
                } while (iVar13 < iVar16);
              }
LAB_100444a56:
              if (iVar12 * iVar16 < iVar13 * iVar18) {
                iVar12 = iVar18;
                iVar16 = iVar13;
              }
            }
          }
          *param_5 = *param_5 + '\x01';
          if ((param_4 & 0x10) != 0) {
            if ((byte *)(ulong)uVar2 < pbVar10 + (4 - (long)param_5)) {
              return -1;
            }
            *(int *)pbVar10 = *param_1;
            pbVar10 = pbVar10 + 4;
          }
          if ((long)(int)uVar2 < (long)(pbVar10 + (2 - (long)param_5))) {
            return -1;
          }
          *pbVar10 = (byte)lVar8 | (byte)(iVar17 << 4);
          pbVar10[1] = (char)iVar12 - 1U | (char)iVar16 * '\x10' - 0x10U;
          if (param_2 < iVar12 * param_2) {
            do {
              if (0 < iVar16) {
                piVar9 = piVar6 + iVar16;
                piVar7 = piVar6 + 1;
                piVar11 = piVar7;
                if (piVar7 < piVar9) {
                  piVar11 = piVar9;
                }
                if (piVar7 < piVar9) {
                  piVar7 = piVar9;
                }
                uVar15 = ((long)piVar7 + ~(ulong)piVar6 >> 2) + 1;
                uVar21 = uVar15 & 0x7ffffffffffffff8;
                uVar5 = 0;
                piVar7 = piVar6;
                if (uVar21 != 0) {
                  piVar7 = piVar6 + uVar21;
                  piVar20 = piVar6 + 4;
                  uVar4 = uVar15 & 0xfffffffffffffff8;
                  do {
                    piVar20[-4] = param_6;
                    piVar20[-3] = param_6;
                    piVar20[-2] = param_6;
                    piVar20[-1] = param_6;
                    *piVar20 = param_6;
                    piVar20[1] = param_6;
                    piVar20[2] = param_6;
                    piVar20[3] = param_6;
                    piVar20 = piVar20 + 8;
                    uVar4 = uVar4 - 8;
                    uVar5 = uVar21;
                  } while (uVar4 != 0);
                }
                if (uVar15 != uVar5) {
                  do {
                    *piVar7 = param_6;
                    piVar7 = piVar7 + 1;
                  } while (piVar7 < piVar9);
                }
                piVar6 = (int *)((long)piVar6 +
                                ((long)piVar11 + ~(ulong)piVar6 & 0xfffffffffffffffc) + 4);
              }
              piVar6 = piVar6 + (param_2 - iVar16);
            } while (piVar6 < param_1 + iVar12 * param_2);
          }
          pbVar10 = pbVar10 + 2;
          param_1 = param_1 + iVar16;
          iVar17 = iVar16 + iVar17;
        } while (iVar17 < param_2);
      }
LAB_100444c10:
      lVar8 = lVar8 + 1;
    } while (lVar8 < param_3);
  }
  return (int)pbVar10 - (int)param_5;
}

