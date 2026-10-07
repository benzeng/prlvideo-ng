
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10043f940(byte *param_1,uint param_2,int param_3,int param_4,long *param_5,byte param_6)

{
  byte bVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  void *pvVar8;
  long lVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  byte *pbVar15;
  byte *pbVar16;
  int iVar17;
  uint uVar18;
  byte *pbVar19;
  byte bVar20;
  byte *pbVar21;
  bool bVar22;
  int local_58;
  
  uVar18 = *(uint *)((long)param_5 + 0xc);
  if (*(uint *)(param_5 + 2) < uVar18 + 1) {
    uVar7 = (ulong)((double)(uVar18 + 1) * _DAT_100b42cf8);
    pvVar8 = operator_new__(uVar7 & 0xffffffff);
    pvVar2 = (void *)*param_5;
    _memcpy(pvVar8,pvVar2,(ulong)*(uint *)(param_5 + 1));
    if ((pvVar2 != (void *)0x0) && (*(char *)((long)param_5 + 0x14) != '\0')) {
      operator_delete__(pvVar2);
      uVar18 = *(uint *)((long)param_5 + 0xc);
    }
    *param_5 = (long)pvVar8;
    *(int *)(param_5 + 2) = (int)uVar7;
    *(undefined1 *)((long)param_5 + 0x14) = 1;
  }
  if (*(uint *)(param_5 + 1) < uVar18 + 1) {
    *(uint *)(param_5 + 1) = uVar18 + 1;
    uVar18 = *(uint *)((long)param_5 + 0xc);
  }
  *(byte *)(*param_5 + (ulong)uVar18) = param_6;
  uVar18 = *(int *)((long)param_5 + 0xc) + 1;
  *(uint *)((long)param_5 + 0xc) = uVar18;
  iVar12 = 0;
  if (0 < param_4) {
    iVar6 = 0;
    iVar12 = 0;
    do {
      if (0 < param_3) {
        iVar3 = param_4 - iVar6;
        iVar4 = 0;
        pbVar19 = param_1;
        do {
          while( true ) {
            bVar20 = *pbVar19;
            if ((uint)bVar20 != (uint)param_6) break;
            pbVar19 = pbVar19 + 1;
            iVar4 = iVar4 + 1;
            if (param_3 <= iVar4) goto LAB_100440030;
          }
          lVar9 = (long)param_3 - (long)iVar4;
          pbVar21 = pbVar19 + 1;
          pbVar16 = pbVar21;
          if (1 < lVar9) {
            pbVar11 = pbVar19;
            pbVar15 = pbVar21;
            do {
              pbVar16 = pbVar15;
              if (*pbVar15 != bVar20) break;
              pbVar16 = pbVar11 + 2;
              pbVar11 = pbVar15;
              pbVar15 = pbVar16;
            } while (pbVar16 < pbVar19 + lVar9);
          }
          local_58 = (int)pbVar16 - (int)pbVar19;
          iVar13 = 1;
          if (1 < iVar3) {
            pbVar16 = pbVar19 + param_2;
            iVar13 = 1;
            do {
              pbVar11 = pbVar16 + local_58;
              while (pbVar16 < pbVar11) {
                bVar1 = *pbVar16;
                pbVar16 = pbVar16 + 1;
                if (bVar1 != bVar20) goto LAB_10043fb7a;
              }
              pbVar16 = pbVar16 + ((ulong)param_2 - (long)local_58);
              iVar13 = iVar13 + 1;
            } while (iVar13 < iVar3);
          }
LAB_10043fb7a:
          if (iVar13 < iVar3) {
            uVar5 = param_2 * iVar13;
            iVar10 = iVar13;
            do {
              if (pbVar19[uVar5] != bVar20) break;
              iVar10 = iVar10 + 1;
              uVar5 = uVar5 + param_2;
            } while (iVar10 < iVar3);
            if (iVar10 != iVar13) {
              iVar17 = 1;
              if (1 < local_58) {
                iVar17 = 1;
                pbVar16 = pbVar19;
                do {
                  pbVar11 = pbVar21;
                  iVar14 = 0;
                  uVar7 = 0;
                  if (0 < iVar10) {
                    do {
                      if (pbVar11[uVar7] != bVar20) goto LAB_10043fc16;
                      uVar7 = (ulong)((int)uVar7 + param_2);
                      iVar14 = iVar14 + 1;
                    } while (iVar14 < iVar10);
                  }
                  iVar17 = iVar17 + 1;
                  pbVar21 = pbVar16 + 2;
                  pbVar16 = pbVar11;
                } while (iVar17 < local_58);
              }
LAB_10043fc16:
              if (iVar13 * local_58 < iVar17 * iVar10) {
                iVar13 = iVar10;
                local_58 = iVar17;
              }
            }
          }
          if (param_3 < iVar13 * param_3) {
            pbVar21 = pbVar19 + param_3;
            do {
              if (0 < local_58) {
                pbVar16 = pbVar21 + local_58;
                pbVar11 = pbVar21 + 1;
                if (pbVar21 + 1 < pbVar16) {
                  pbVar11 = pbVar16;
                }
                _memset(pbVar21,(uint)param_6,(long)pbVar11 - (long)pbVar21);
                do {
                  pbVar21 = pbVar21 + 1;
                } while (pbVar21 < pbVar16);
              }
              pbVar21 = pbVar21 + (param_3 - local_58);
            } while (pbVar21 < pbVar19 + iVar13 * param_3);
            bVar20 = *pbVar19;
            uVar18 = *(uint *)((long)param_5 + 0xc);
          }
          if (*(uint *)(param_5 + 2) < uVar18 + 1) {
            uVar7 = (ulong)((double)(uVar18 + 1) * _DAT_100b42cf8);
            pvVar8 = operator_new__(uVar7 & 0xffffffff);
            pvVar2 = (void *)*param_5;
            _memcpy(pvVar8,pvVar2,(ulong)*(uint *)(param_5 + 1));
            if ((pvVar2 != (void *)0x0) && (*(char *)((long)param_5 + 0x14) != '\0')) {
              operator_delete__(pvVar2);
              uVar18 = *(uint *)((long)param_5 + 0xc);
            }
            *param_5 = (long)pvVar8;
            *(int *)(param_5 + 2) = (int)uVar7;
            *(undefined1 *)((long)param_5 + 0x14) = 1;
          }
          if (*(uint *)(param_5 + 1) < uVar18 + 1) {
            *(uint *)(param_5 + 1) = uVar18 + 1;
          }
          *(byte *)(*param_5 + (ulong)uVar18) = bVar20;
          iVar10 = *(int *)((long)param_5 + 0xc);
          uVar18 = iVar10 + 1;
          *(uint *)((long)param_5 + 0xc) = uVar18;
          uVar5 = iVar10 + 3;
          if (*(uint *)(param_5 + 2) < uVar5) {
            uVar7 = (ulong)((double)uVar5 * _DAT_100b42cf8);
            pvVar8 = operator_new__(uVar7 & 0xffffffff);
            pvVar2 = (void *)*param_5;
            _memcpy(pvVar8,pvVar2,(ulong)*(uint *)(param_5 + 1));
            if ((pvVar2 != (void *)0x0) && (*(char *)((long)param_5 + 0x14) != '\0')) {
              operator_delete__(pvVar2);
              uVar18 = *(uint *)((long)param_5 + 0xc);
            }
            *param_5 = (long)pvVar8;
            *(int *)(param_5 + 2) = (int)uVar7;
            *(undefined1 *)((long)param_5 + 0x14) = 1;
          }
          if (*(uint *)(param_5 + 1) < uVar18 + 2) {
            *(uint *)(param_5 + 1) = uVar18 + 2;
          }
          *(char *)(*param_5 + (ulong)uVar18) = (char)((uint)iVar4 >> 8);
          *(char *)(*param_5 + (ulong)(*(int *)((long)param_5 + 0xc) + 1)) = (char)iVar4;
          iVar10 = *(int *)((long)param_5 + 0xc);
          uVar18 = iVar10 + 2;
          *(uint *)((long)param_5 + 0xc) = uVar18;
          uVar5 = iVar10 + 4;
          if (*(uint *)(param_5 + 2) < uVar5) {
            uVar7 = (ulong)((double)uVar5 * _DAT_100b42cf8);
            pvVar8 = operator_new__(uVar7 & 0xffffffff);
            pvVar2 = (void *)*param_5;
            _memcpy(pvVar8,pvVar2,(ulong)*(uint *)(param_5 + 1));
            if ((pvVar2 != (void *)0x0) && (*(char *)((long)param_5 + 0x14) != '\0')) {
              operator_delete__(pvVar2);
              uVar18 = *(uint *)((long)param_5 + 0xc);
            }
            *param_5 = (long)pvVar8;
            *(int *)(param_5 + 2) = (int)uVar7;
            *(undefined1 *)((long)param_5 + 0x14) = 1;
          }
          if (*(uint *)(param_5 + 1) < uVar18 + 2) {
            *(uint *)(param_5 + 1) = uVar18 + 2;
          }
          *(char *)(*param_5 + (ulong)uVar18) = (char)((uint)iVar6 >> 8);
          *(char *)(*param_5 + (ulong)(*(int *)((long)param_5 + 0xc) + 1)) = (char)iVar6;
          iVar10 = *(int *)((long)param_5 + 0xc);
          uVar18 = iVar10 + 2;
          *(uint *)((long)param_5 + 0xc) = uVar18;
          uVar5 = iVar10 + 4;
          if (*(uint *)(param_5 + 2) < uVar5) {
            uVar7 = (ulong)((double)uVar5 * _DAT_100b42cf8);
            pvVar8 = operator_new__(uVar7 & 0xffffffff);
            pvVar2 = (void *)*param_5;
            _memcpy(pvVar8,pvVar2,(ulong)*(uint *)(param_5 + 1));
            if ((pvVar2 != (void *)0x0) && (*(char *)((long)param_5 + 0x14) != '\0')) {
              operator_delete__(pvVar2);
              uVar18 = *(uint *)((long)param_5 + 0xc);
            }
            *param_5 = (long)pvVar8;
            *(int *)(param_5 + 2) = (int)uVar7;
            *(undefined1 *)((long)param_5 + 0x14) = 1;
          }
          if (*(uint *)(param_5 + 1) < uVar18 + 2) {
            *(uint *)(param_5 + 1) = uVar18 + 2;
          }
          *(char *)(*param_5 + (ulong)uVar18) = (char)((uint)local_58 >> 8);
          *(char *)(*param_5 + (ulong)(*(int *)((long)param_5 + 0xc) + 1)) = (char)local_58;
          iVar10 = *(int *)((long)param_5 + 0xc);
          uVar18 = iVar10 + 2;
          *(uint *)((long)param_5 + 0xc) = uVar18;
          uVar5 = iVar10 + 4;
          if (*(uint *)(param_5 + 2) < uVar5) {
            uVar7 = (ulong)((double)uVar5 * _DAT_100b42cf8);
            pvVar8 = operator_new__(uVar7 & 0xffffffff);
            pvVar2 = (void *)*param_5;
            _memcpy(pvVar8,pvVar2,(ulong)*(uint *)(param_5 + 1));
            if ((pvVar2 != (void *)0x0) && (*(char *)((long)param_5 + 0x14) != '\0')) {
              operator_delete__(pvVar2);
              uVar18 = *(uint *)((long)param_5 + 0xc);
            }
            *param_5 = (long)pvVar8;
            *(int *)(param_5 + 2) = (int)uVar7;
            *(undefined1 *)((long)param_5 + 0x14) = 1;
          }
          if (*(uint *)(param_5 + 1) < uVar18 + 2) {
            *(uint *)(param_5 + 1) = uVar18 + 2;
          }
          *(char *)(*param_5 + (ulong)uVar18) = (char)((uint)iVar13 >> 8);
          *(char *)(*param_5 + (ulong)(*(int *)((long)param_5 + 0xc) + 1)) = (char)iVar13;
          iVar4 = iVar4 + local_58;
          uVar18 = *(int *)((long)param_5 + 0xc) + 2;
          *(uint *)((long)param_5 + 0xc) = uVar18;
          iVar12 = iVar12 + 1;
          pbVar19 = pbVar19 + local_58;
        } while (iVar4 < param_3);
      }
LAB_100440030:
      param_1 = param_1 + param_2;
      bVar22 = iVar6 != param_4 + -1;
      iVar6 = iVar6 + 1;
    } while (bVar22);
  }
  return iVar12;
}

