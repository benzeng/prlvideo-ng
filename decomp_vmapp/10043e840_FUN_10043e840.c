
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10043e840(undefined2 *param_1,uint param_2,int param_3,int param_4,long *param_5,
                 undefined2 *param_6)

{
  undefined1 uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  void *pvVar11;
  long lVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  int iVar15;
  undefined2 *puVar16;
  uint uVar17;
  ulong uVar18;
  undefined2 *puVar19;
  int iVar20;
  void *pvVar21;
  int iVar22;
  int iVar23;
  undefined2 *puVar24;
  bool bVar25;
  undefined2 *local_90;
  
  uVar1 = *(undefined1 *)(param_6 + 1);
  uVar2 = *param_6;
  uVar3 = *(uint *)((long)param_5 + 0xc);
  if (*(uint *)(param_5 + 2) < uVar3 + 3) {
    uVar10 = (ulong)((double)(uVar3 + 3) * _DAT_100b42cf8);
    pvVar11 = operator_new__(uVar10 & 0xffffffff);
    pvVar21 = (void *)*param_5;
    _memcpy(pvVar11,pvVar21,(ulong)*(uint *)(param_5 + 1));
    if ((pvVar21 != (void *)0x0) && (*(char *)((long)param_5 + 0x14) != '\0')) {
      operator_delete__(pvVar21);
      uVar3 = *(uint *)((long)param_5 + 0xc);
    }
    *param_5 = (long)pvVar11;
    *(int *)(param_5 + 2) = (int)uVar10;
    *(undefined1 *)((long)param_5 + 0x14) = 1;
  }
  if (*(uint *)(param_5 + 1) < uVar3 + 3) {
    *(uint *)(param_5 + 1) = uVar3 + 3;
    uVar3 = *(uint *)((long)param_5 + 0xc);
  }
  lVar12 = *param_5;
  *(undefined1 *)(lVar12 + 2 + (ulong)uVar3) = uVar1;
  *(undefined2 *)(lVar12 + (ulong)uVar3) = uVar2;
  uVar3 = *(int *)((long)param_5 + 0xc) + 3;
  *(uint *)((long)param_5 + 0xc) = uVar3;
  iVar23 = 0;
  if (0 < param_4) {
    uVar10 = (ulong)param_2;
    iVar9 = 0;
    iVar23 = 0;
    do {
      if (0 < param_3) {
        iVar4 = param_4 - iVar9;
        iVar20 = 0;
        puVar24 = param_1;
        do {
          while (iVar5 = _memcmp(puVar24,param_6,3), iVar5 != 0) {
            lVar12 = (long)param_3 - (long)iVar20;
            local_90 = (undefined2 *)((long)puVar24 + 3);
            puVar14 = local_90;
            if (1 < lVar12) {
              puVar16 = puVar24;
              do {
                puVar19 = puVar14;
                iVar5 = _memcmp(puVar19,puVar24,3);
                puVar14 = puVar19;
                if (iVar5 != 0) break;
                puVar14 = puVar16 + 3;
                puVar16 = puVar19;
              } while (puVar14 < (undefined2 *)(lVar12 * 3 + (long)puVar24));
            }
            iVar15 = ((int)puVar14 - (int)puVar24) * -0x55555555;
            iVar5 = 1;
            if (1 < iVar4) {
              pvVar21 = (void *)((long)puVar24 + uVar10);
              iVar5 = 1;
              do {
                pvVar11 = pvVar21;
                while (pvVar11 < (void *)((long)iVar15 * 3 + (long)pvVar21)) {
                  iVar6 = _memcmp(pvVar11,puVar24,3);
                  pvVar11 = (void *)((long)pvVar11 + 3);
                  if (iVar6 != 0) goto LAB_10043eaca;
                }
                pvVar21 = (void *)((long)pvVar11 + (long)iVar15 * -3 + uVar10);
                iVar5 = iVar5 + 1;
              } while (iVar5 < iVar4);
            }
LAB_10043eaca:
            if (iVar5 < iVar4) {
              uVar17 = param_2 * iVar5;
              iVar6 = iVar5;
              do {
                iVar7 = _memcmp((void *)((ulong)uVar17 + (long)puVar24),puVar24,3);
                if (iVar7 != 0) break;
                iVar6 = iVar6 + 1;
                uVar17 = uVar17 + param_2;
              } while (iVar6 < iVar4);
              if (iVar6 != iVar5) {
                iVar7 = 1;
                if (1 < iVar15) {
                  iVar7 = 1;
                  puVar14 = puVar24;
                  do {
                    iVar22 = 0;
                    uVar17 = 0;
                    if (0 < iVar6) {
                      do {
                        iVar8 = _memcmp((void *)((ulong)uVar17 + (long)local_90),puVar24,3);
                        if (iVar8 != 0) goto LAB_10043ebc4;
                        uVar17 = uVar17 + param_2;
                        iVar22 = iVar22 + 1;
                      } while (iVar22 < iVar6);
                    }
                    puVar16 = puVar14 + 3;
                    iVar7 = iVar7 + 1;
                    puVar14 = local_90;
                    local_90 = puVar16;
                  } while (iVar7 < iVar15);
                }
LAB_10043ebc4:
                if (iVar5 * iVar15 < iVar7 * iVar6) {
                  iVar5 = iVar6;
                  iVar15 = iVar7;
                }
              }
            }
            if (param_3 < iVar5 * param_3) {
              puVar14 = (undefined2 *)((long)param_3 * 3 + (long)puVar24);
              do {
                if (0 < iVar15) {
                  puVar19 = (undefined2 *)((long)iVar15 * 3 + (long)puVar14);
                  puVar16 = (undefined2 *)((long)puVar14 + 3U);
                  if ((undefined2 *)((long)puVar14 + 3U) < puVar19) {
                    puVar16 = puVar19;
                  }
                  puVar13 = puVar14;
                  do {
                    *(undefined1 *)(puVar13 + 1) = *(undefined1 *)(param_6 + 1);
                    *puVar13 = *param_6;
                    puVar13 = (undefined2 *)((long)puVar13 + 3);
                  } while (puVar13 < puVar19);
                  puVar14 = (undefined2 *)
                            ((long)puVar14 + ((~(ulong)puVar14 + (long)puVar16) / 3) * 3 + 3);
                }
                puVar14 = (undefined2 *)((long)puVar14 + (long)(param_3 - iVar15) * 3);
              } while (puVar14 < (undefined2 *)((long)(iVar5 * param_3) * 3 + (long)puVar24));
              uVar3 = *(uint *)((long)param_5 + 0xc);
            }
            uVar1 = *(undefined1 *)(puVar24 + 1);
            uVar2 = *puVar24;
            if (*(uint *)(param_5 + 2) < uVar3 + 3) {
              uVar18 = (ulong)((double)(uVar3 + 3) * _DAT_100b42cf8);
              pvVar11 = operator_new__(uVar18 & 0xffffffff);
              pvVar21 = (void *)*param_5;
              _memcpy(pvVar11,pvVar21,(ulong)*(uint *)(param_5 + 1));
              if ((pvVar21 != (void *)0x0) && (*(char *)((long)param_5 + 0x14) != '\0')) {
                operator_delete__(pvVar21);
                uVar3 = *(uint *)((long)param_5 + 0xc);
              }
              *param_5 = (long)pvVar11;
              *(int *)(param_5 + 2) = (int)uVar18;
              *(undefined1 *)((long)param_5 + 0x14) = 1;
            }
            if (*(uint *)(param_5 + 1) < uVar3 + 3) {
              *(uint *)(param_5 + 1) = uVar3 + 3;
            }
            lVar12 = *param_5;
            *(undefined1 *)(lVar12 + 2 + (ulong)uVar3) = uVar1;
            *(undefined2 *)(lVar12 + (ulong)uVar3) = uVar2;
            iVar6 = *(int *)((long)param_5 + 0xc);
            uVar3 = iVar6 + 3;
            *(uint *)((long)param_5 + 0xc) = uVar3;
            uVar17 = iVar6 + 5;
            if (*(uint *)(param_5 + 2) < uVar17) {
              uVar18 = (ulong)((double)uVar17 * _DAT_100b42cf8);
              pvVar11 = operator_new__(uVar18 & 0xffffffff);
              pvVar21 = (void *)*param_5;
              _memcpy(pvVar11,pvVar21,(ulong)*(uint *)(param_5 + 1));
              if ((pvVar21 != (void *)0x0) && (*(char *)((long)param_5 + 0x14) != '\0')) {
                operator_delete__(pvVar21);
                uVar3 = *(uint *)((long)param_5 + 0xc);
              }
              *param_5 = (long)pvVar11;
              *(int *)(param_5 + 2) = (int)uVar18;
              *(undefined1 *)((long)param_5 + 0x14) = 1;
            }
            if (*(uint *)(param_5 + 1) < uVar3 + 2) {
              *(uint *)(param_5 + 1) = uVar3 + 2;
            }
            *(char *)(*param_5 + (ulong)uVar3) = (char)((uint)iVar20 >> 8);
            *(char *)(*param_5 + (ulong)(*(int *)((long)param_5 + 0xc) + 1)) = (char)iVar20;
            iVar6 = *(int *)((long)param_5 + 0xc);
            uVar3 = iVar6 + 2;
            *(uint *)((long)param_5 + 0xc) = uVar3;
            uVar17 = iVar6 + 4;
            if (*(uint *)(param_5 + 2) < uVar17) {
              uVar18 = (ulong)((double)uVar17 * _DAT_100b42cf8);
              pvVar11 = operator_new__(uVar18 & 0xffffffff);
              pvVar21 = (void *)*param_5;
              _memcpy(pvVar11,pvVar21,(ulong)*(uint *)(param_5 + 1));
              if ((pvVar21 != (void *)0x0) && (*(char *)((long)param_5 + 0x14) != '\0')) {
                operator_delete__(pvVar21);
                uVar3 = *(uint *)((long)param_5 + 0xc);
              }
              *param_5 = (long)pvVar11;
              *(int *)(param_5 + 2) = (int)uVar18;
              *(undefined1 *)((long)param_5 + 0x14) = 1;
            }
            if (*(uint *)(param_5 + 1) < uVar3 + 2) {
              *(uint *)(param_5 + 1) = uVar3 + 2;
            }
            *(char *)(*param_5 + (ulong)uVar3) = (char)((uint)iVar9 >> 8);
            *(char *)(*param_5 + (ulong)(*(int *)((long)param_5 + 0xc) + 1)) = (char)iVar9;
            iVar6 = *(int *)((long)param_5 + 0xc);
            uVar3 = iVar6 + 2;
            *(uint *)((long)param_5 + 0xc) = uVar3;
            uVar17 = iVar6 + 4;
            if (*(uint *)(param_5 + 2) < uVar17) {
              uVar18 = (ulong)((double)uVar17 * _DAT_100b42cf8);
              pvVar11 = operator_new__(uVar18 & 0xffffffff);
              pvVar21 = (void *)*param_5;
              _memcpy(pvVar11,pvVar21,(ulong)*(uint *)(param_5 + 1));
              if ((pvVar21 != (void *)0x0) && (*(char *)((long)param_5 + 0x14) != '\0')) {
                operator_delete__(pvVar21);
                uVar3 = *(uint *)((long)param_5 + 0xc);
              }
              *param_5 = (long)pvVar11;
              *(int *)(param_5 + 2) = (int)uVar18;
              *(undefined1 *)((long)param_5 + 0x14) = 1;
            }
            if (*(uint *)(param_5 + 1) < uVar3 + 2) {
              *(uint *)(param_5 + 1) = uVar3 + 2;
            }
            *(char *)(*param_5 + (ulong)uVar3) = (char)((uint)iVar15 >> 8);
            *(char *)(*param_5 + (ulong)(*(int *)((long)param_5 + 0xc) + 1)) = (char)iVar15;
            iVar6 = *(int *)((long)param_5 + 0xc);
            uVar3 = iVar6 + 2;
            *(uint *)((long)param_5 + 0xc) = uVar3;
            uVar17 = iVar6 + 4;
            if (*(uint *)(param_5 + 2) < uVar17) {
              uVar18 = (ulong)((double)uVar17 * _DAT_100b42cf8);
              pvVar11 = operator_new__(uVar18 & 0xffffffff);
              pvVar21 = (void *)*param_5;
              _memcpy(pvVar11,pvVar21,(ulong)*(uint *)(param_5 + 1));
              if ((pvVar21 != (void *)0x0) && (*(char *)((long)param_5 + 0x14) != '\0')) {
                operator_delete__(pvVar21);
                uVar3 = *(uint *)((long)param_5 + 0xc);
              }
              *param_5 = (long)pvVar11;
              *(int *)(param_5 + 2) = (int)uVar18;
              *(undefined1 *)((long)param_5 + 0x14) = 1;
            }
            if (*(uint *)(param_5 + 1) < uVar3 + 2) {
              *(uint *)(param_5 + 1) = uVar3 + 2;
            }
            *(char *)(*param_5 + (ulong)uVar3) = (char)((uint)iVar5 >> 8);
            *(char *)(*param_5 + (ulong)(*(int *)((long)param_5 + 0xc) + 1)) = (char)iVar5;
            iVar20 = iVar20 + iVar15;
            uVar3 = *(int *)((long)param_5 + 0xc) + 2;
            *(uint *)((long)param_5 + 0xc) = uVar3;
            iVar23 = iVar23 + 1;
            puVar24 = (undefined2 *)((long)puVar24 + (long)iVar15 * 3);
            if (param_3 <= iVar20) goto LAB_10043f004;
          }
          puVar24 = (undefined2 *)((long)puVar24 + 3);
          iVar20 = iVar20 + 1;
        } while (iVar20 < param_3);
      }
LAB_10043f004:
      param_1 = (undefined2 *)((long)param_1 + uVar10);
      bVar25 = iVar9 != param_4 + -1;
      iVar9 = iVar9 + 1;
    } while (bVar25);
  }
  return iVar23;
}

