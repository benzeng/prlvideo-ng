
int FUN_100444c40(undefined2 *param_1,int param_2,int param_3,uint param_4,char *param_5,
                 undefined2 *param_6)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  undefined2 *puVar13;
  byte *pbVar14;
  int iVar15;
  undefined2 *puVar16;
  void *pvVar17;
  long lVar18;
  undefined2 *local_80;
  
  *param_5 = '\0';
  pbVar14 = (byte *)(param_5 + 1);
  if (0 < param_3) {
    lVar11 = (long)param_2;
    uVar2 = param_2 * param_3 * 3;
    lVar1 = lVar11 * 3;
    lVar18 = 0;
    do {
      if (0 < param_2) {
        lVar6 = param_3 - lVar18;
        iVar15 = 0;
        do {
          while (iVar3 = _memcmp(param_1,param_6,3), iVar3 == 0) {
            param_1 = (undefined2 *)((long)param_1 + 3);
            iVar15 = iVar15 + 1;
            if (param_2 <= iVar15) goto LAB_100445134;
          }
          local_80 = (undefined2 *)((long)param_1 + 3);
          puVar16 = local_80;
          if (1 < lVar11 - iVar15) {
            puVar13 = param_1;
            do {
              puVar8 = puVar16;
              iVar3 = _memcmp(puVar8,param_1,3);
              puVar16 = puVar8;
              if (iVar3 != 0) break;
              puVar16 = puVar13 + 3;
              puVar13 = puVar8;
            } while (puVar16 < (undefined2 *)((lVar11 - iVar15) * 3 + (long)param_1));
          }
          puVar13 = (undefined2 *)((long)param_1 + lVar1);
          iVar3 = (int)puVar16 - (int)param_1;
          iVar10 = iVar3 * -0x55555555;
          iVar12 = 1;
          if (1 < lVar6) {
            iVar12 = 1;
            puVar16 = puVar13;
            do {
              puVar8 = puVar16;
              while (puVar8 < (undefined2 *)((long)iVar10 * 3 + (long)puVar16)) {
                iVar4 = _memcmp(puVar8,param_1,3);
                puVar8 = (undefined2 *)((long)puVar8 + 3);
                if (iVar4 != 0) goto LAB_100444e5c;
              }
              puVar16 = (undefined2 *)((long)puVar8 + (long)(param_2 + iVar3 * 0x55555555) * 3);
              iVar12 = iVar12 + 1;
            } while (iVar12 < lVar6);
          }
LAB_100444e5c:
          lVar9 = (long)iVar12;
          if (lVar9 < lVar6) {
            pvVar17 = (void *)(iVar12 * lVar11 * 3 + (long)param_1);
            do {
              iVar3 = _memcmp(pvVar17,param_1,3);
              if (iVar3 != 0) break;
              lVar9 = lVar9 + 1;
              pvVar17 = (void *)((long)pvVar17 + lVar1);
            } while (lVar9 < lVar6);
            iVar3 = (int)lVar9;
            if (iVar3 != iVar12) {
              iVar4 = 1;
              if (1 < iVar10) {
                iVar4 = 1;
                puVar16 = param_1;
                do {
                  lVar9 = 0;
                  puVar8 = local_80;
                  if (0 < iVar3) {
                    do {
                      iVar5 = _memcmp(puVar8,param_1,3);
                      if (iVar5 != 0) goto LAB_100444fc6;
                      lVar9 = lVar9 + 1;
                      puVar8 = (undefined2 *)((long)puVar8 + lVar1);
                    } while (lVar9 < iVar3);
                  }
                  puVar8 = puVar16 + 3;
                  iVar4 = iVar4 + 1;
                  puVar16 = local_80;
                  local_80 = puVar8;
                } while (iVar4 < iVar10);
              }
LAB_100444fc6:
              if (iVar12 * iVar10 < iVar4 * iVar3) {
                iVar10 = iVar4;
                iVar12 = iVar3;
              }
            }
          }
          *param_5 = *param_5 + '\x01';
          if ((param_4 & 0x10) != 0) {
            if ((byte *)(ulong)uVar2 < pbVar14 + (3 - (long)param_5)) {
              return -1;
            }
            pbVar14[2] = *(byte *)(param_1 + 1);
            *(undefined2 *)pbVar14 = *param_1;
            pbVar14 = pbVar14 + 3;
          }
          if ((long)(int)uVar2 < (long)(pbVar14 + (2 - (long)param_5))) {
            return -1;
          }
          *pbVar14 = (byte)lVar18 | (byte)(iVar15 << 4);
          pbVar14[1] = (char)iVar12 - 1U | (char)iVar10 * '\x10' - 0x10U;
          if (param_2 < iVar12 * param_2) {
            do {
              if (0 < iVar10) {
                puVar8 = (undefined2 *)((long)iVar10 * 3 + (long)puVar13);
                puVar16 = (undefined2 *)((long)puVar13 + 3U);
                if ((undefined2 *)((long)puVar13 + 3U) < puVar8) {
                  puVar16 = puVar8;
                }
                puVar7 = puVar13;
                do {
                  *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(param_6 + 1);
                  *puVar7 = *param_6;
                  puVar7 = (undefined2 *)((long)puVar7 + 3);
                } while (puVar7 < puVar8);
                puVar13 = (undefined2 *)
                          ((long)puVar13 + ((~(ulong)puVar13 + (long)puVar16) / 3) * 3 + 3);
              }
              puVar13 = (undefined2 *)((long)puVar13 + (long)(param_2 - iVar10) * 3);
            } while (puVar13 < (undefined2 *)((long)(iVar12 * param_2) * 3 + (long)param_1));
          }
          pbVar14 = pbVar14 + 2;
          param_1 = (undefined2 *)((long)param_1 + (long)iVar10 * 3);
          iVar15 = iVar10 + iVar15;
        } while (iVar15 < param_2);
      }
LAB_100445134:
      lVar18 = lVar18 + 1;
    } while (lVar18 < param_3);
  }
  return (int)pbVar14 - (int)param_5;
}

