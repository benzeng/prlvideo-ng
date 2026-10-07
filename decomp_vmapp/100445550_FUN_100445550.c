
int FUN_100445550(byte *param_1,int param_2,int param_3,uint param_4,char *param_5,uint param_6)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  byte *pbVar15;
  byte *pbVar16;
  
  *param_5 = '\0';
  pbVar8 = (byte *)(param_5 + 1);
  if (0 < param_3) {
    lVar3 = (long)param_2;
    lVar4 = 0;
    do {
      if (0 < param_2) {
        lVar5 = param_3 - lVar4;
        iVar14 = 0;
        do {
          while( true ) {
            bVar1 = *param_1;
            if ((uint)bVar1 != (param_6 & 0xff)) break;
            param_1 = param_1 + 1;
            iVar14 = iVar14 + 1;
            if (param_2 <= iVar14) goto LAB_1004458b0;
          }
          pbVar16 = param_1 + 1;
          pbVar12 = pbVar16;
          if (1 < lVar3 - iVar14) {
            pbVar15 = param_1;
            pbVar13 = pbVar16;
            do {
              pbVar12 = pbVar13;
              if (*pbVar13 != bVar1) break;
              pbVar12 = pbVar15 + 2;
              pbVar15 = pbVar13;
              pbVar13 = pbVar12;
            } while (pbVar12 < param_1 + (lVar3 - iVar14));
          }
          pbVar15 = param_1 + lVar3;
          iVar11 = (int)pbVar12 - (int)param_1;
          iVar9 = 1;
          if (1 < lVar5) {
            iVar9 = 1;
            pbVar12 = pbVar15;
            do {
              pbVar13 = pbVar12 + iVar11;
              while (pbVar12 < pbVar13) {
                bVar2 = *pbVar12;
                pbVar12 = pbVar12 + 1;
                if (bVar2 != bVar1) goto LAB_1004456d0;
              }
              pbVar12 = pbVar12 + (param_2 - iVar11);
              iVar9 = iVar9 + 1;
            } while (iVar9 < lVar5);
          }
LAB_1004456d0:
          lVar7 = (long)iVar9;
          if (lVar7 < lVar5) {
            pbVar12 = param_1 + iVar9 * lVar3;
            do {
              if (*pbVar12 != bVar1) break;
              lVar7 = lVar7 + 1;
              pbVar12 = pbVar12 + lVar3;
            } while (lVar7 < lVar5);
            iVar6 = (int)lVar7;
            if (iVar6 != iVar9) {
              iVar10 = 1;
              if (1 < iVar11) {
                iVar10 = 1;
                pbVar12 = param_1;
                do {
                  lVar7 = 0;
                  pbVar13 = pbVar16;
                  if (0 < iVar6) {
                    do {
                      if (*pbVar13 != bVar1) goto LAB_100445769;
                      lVar7 = lVar7 + 1;
                      pbVar13 = pbVar13 + lVar3;
                    } while (lVar7 < iVar6);
                  }
                  pbVar13 = pbVar12 + 2;
                  iVar10 = iVar10 + 1;
                  pbVar12 = pbVar16;
                  pbVar16 = pbVar13;
                } while (iVar10 < iVar11);
              }
LAB_100445769:
              if (iVar9 * iVar11 < iVar10 * iVar6) {
                iVar9 = iVar6;
                iVar11 = iVar10;
              }
            }
          }
          *param_5 = *param_5 + '\x01';
          if ((param_4 & 0x10) != 0) {
            if ((byte *)(ulong)(uint)(param_3 * param_2) < pbVar8 + (1 - (long)param_5)) {
              return -1;
            }
            *pbVar8 = *param_1;
            pbVar8 = pbVar8 + 1;
          }
          if ((long)(param_3 * param_2) < (long)(pbVar8 + (2 - (long)param_5))) {
            return -1;
          }
          *pbVar8 = (byte)lVar4 | (byte)(iVar14 << 4);
          pbVar8[1] = (char)iVar9 - 1U | (char)iVar11 * '\x10' - 0x10U;
          if (param_2 < iVar9 * param_2) {
            do {
              if (0 < iVar11) {
                pbVar16 = pbVar15 + iVar11;
                pbVar12 = pbVar15 + 1;
                if (pbVar15 + 1 < pbVar16) {
                  pbVar12 = pbVar16;
                }
                _memset(pbVar15,param_6 & 0xff,(long)pbVar12 - (long)pbVar15);
                do {
                  pbVar15 = pbVar15 + 1;
                } while (pbVar15 < pbVar16);
              }
              pbVar15 = pbVar15 + (param_2 - iVar11);
            } while (pbVar15 < param_1 + iVar9 * param_2);
          }
          pbVar8 = pbVar8 + 2;
          param_1 = param_1 + iVar11;
          iVar14 = iVar11 + iVar14;
        } while (iVar14 < param_2);
      }
LAB_1004458b0:
      lVar4 = lVar4 + 1;
    } while (lVar4 < param_3);
  }
  return (int)pbVar8 - (int)param_5;
}

