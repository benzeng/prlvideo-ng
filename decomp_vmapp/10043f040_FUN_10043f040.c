
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10043f040(ushort *param_1,uint param_2,int param_3,int param_4,long *param_5,uint param_6)

{
  ushort uVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  ushort *puVar10;
  int iVar11;
  ushort *puVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  undefined1 (*pauVar18) [16];
  ushort *puVar19;
  ushort *puVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  ulong uVar24;
  ushort *puVar25;
  ushort uVar26;
  uint uVar27;
  bool bVar28;
  undefined1 auVar29 [16];
  int local_48;
  
  uVar8 = (ulong)*(uint *)((long)param_5 + 0xc);
  uVar3 = *(uint *)((long)param_5 + 0xc) + 2;
  if (*(uint *)(param_5 + 2) < uVar3) {
    uVar6 = (ulong)((double)uVar3 * _DAT_100b42cf8);
    pvVar7 = operator_new__(uVar6 & 0xffffffff);
    pvVar2 = (void *)*param_5;
    _memcpy(pvVar7,pvVar2,(ulong)*(uint *)(param_5 + 1));
    if ((pvVar2 != (void *)0x0) && (*(char *)((long)param_5 + 0x14) != '\0')) {
      operator_delete__(pvVar2);
      uVar8 = (ulong)*(uint *)((long)param_5 + 0xc);
    }
    *param_5 = (long)pvVar7;
    *(int *)(param_5 + 2) = (int)uVar6;
    *(undefined1 *)((long)param_5 + 0x14) = 1;
  }
  uVar3 = (int)uVar8 + 2;
  if (*(uint *)(param_5 + 1) < uVar3) {
    *(uint *)(param_5 + 1) = uVar3;
    uVar8 = (ulong)*(uint *)((long)param_5 + 0xc);
  }
  *(ushort *)(*param_5 + uVar8) = (ushort)param_6;
  uVar3 = *(int *)((long)param_5 + 0xc) + 2;
  *(uint *)((long)param_5 + 0xc) = uVar3;
  iVar21 = 0;
  if (0 < param_4) {
    uVar8 = (ulong)param_2;
    iVar5 = 0;
    auVar29 = pshufb(ZEXT416(param_6),_DAT_100b3f5b0);
    iVar21 = 0;
    do {
      if (0 < param_3) {
        iVar23 = param_4 - iVar5;
        iVar17 = 0;
        puVar25 = param_1;
        do {
          uVar26 = *puVar25;
          uVar27 = (uint)uVar26;
          if (uVar27 == (param_6 & 0xffff)) {
            puVar25 = puVar25 + 1;
            iVar17 = iVar17 + 1;
          }
          else {
            lVar9 = (long)param_3 - (long)iVar17;
            puVar20 = puVar25 + 1;
            puVar10 = puVar20;
            if (1 < lVar9) {
              puVar12 = puVar25;
              puVar19 = puVar20;
              do {
                puVar10 = puVar19;
                if (*puVar19 != uVar27) break;
                puVar10 = puVar12 + 2;
                puVar12 = puVar19;
                puVar19 = puVar10;
              } while (puVar10 < puVar25 + lVar9);
            }
            iVar14 = 1;
            local_48 = (int)((ulong)((long)puVar10 - (long)puVar25) >> 1);
            if (1 < iVar23) {
              puVar10 = (ushort *)((long)puVar25 + uVar8);
              iVar14 = 1;
              do {
                puVar12 = puVar10 + local_48;
                while (puVar10 < puVar12) {
                  uVar1 = *puVar10;
                  puVar10 = puVar10 + 1;
                  if (uVar1 != uVar27) goto LAB_10043f28f;
                }
                puVar10 = (ushort *)((long)puVar10 + (long)local_48 * -2 + uVar8);
                iVar14 = iVar14 + 1;
              } while (iVar14 < iVar23);
            }
LAB_10043f28f:
            if (iVar14 < iVar23) {
              uVar4 = param_2 * iVar14;
              iVar11 = iVar14;
              do {
                if (*(ushort *)((long)puVar25 + (ulong)uVar4) != uVar27) break;
                iVar11 = iVar11 + 1;
                uVar4 = uVar4 + param_2;
              } while (iVar11 < iVar23);
              if (iVar11 != iVar14) {
                iVar22 = 1;
                if (1 < local_48) {
                  iVar22 = 1;
                  puVar10 = puVar25;
                  do {
                    puVar12 = puVar20;
                    if (0 < iVar11) {
                      iVar16 = 0;
                      uVar4 = 0;
                      do {
                        if (*(ushort *)((long)puVar12 + (ulong)uVar4) != uVar27) goto LAB_10043f326;
                        uVar4 = uVar4 + param_2;
                        iVar16 = iVar16 + 1;
                      } while (iVar16 < iVar11);
                    }
                    iVar22 = iVar22 + 1;
                    puVar20 = puVar10 + 2;
                    puVar10 = puVar12;
                  } while (iVar22 < local_48);
                }
LAB_10043f326:
                if (iVar14 * local_48 < iVar22 * iVar11) {
                  iVar14 = iVar11;
                  local_48 = iVar22;
                }
              }
            }
            if (param_3 < iVar14 * param_3) {
              puVar20 = puVar25 + param_3;
              do {
                if (0 < local_48) {
                  puVar12 = puVar20 + local_48;
                  puVar10 = puVar20 + 1;
                  puVar19 = puVar10;
                  if (puVar10 < puVar12) {
                    puVar19 = puVar12;
                  }
                  if (puVar10 < puVar12) {
                    puVar10 = puVar12;
                  }
                  uVar13 = ((long)puVar10 + ~(ulong)puVar20 >> 1) + 1;
                  uVar24 = uVar13 & 0xfffffffffffffff0;
                  puVar10 = puVar20;
                  uVar6 = 0;
                  if (uVar24 != 0) {
                    puVar10 = puVar20 + uVar24;
                    pauVar18 = (undefined1 (*) [16])(puVar20 + 8);
                    uVar15 = uVar13 & 0xfffffffffffffff0;
                    do {
                      pauVar18[-1] = auVar29;
                      *pauVar18 = auVar29;
                      pauVar18 = pauVar18 + 2;
                      uVar15 = uVar15 - 0x10;
                      uVar6 = uVar24;
                    } while (uVar15 != 0);
                  }
                  if (uVar13 != uVar6) {
                    do {
                      *puVar10 = (ushort)param_6;
                      puVar10 = puVar10 + 1;
                    } while (puVar10 < puVar12);
                  }
                  puVar20 = (ushort *)
                            ((long)puVar20 +
                            ((long)puVar19 + ~(ulong)puVar20 & 0xfffffffffffffffe) + 2);
                }
                puVar20 = puVar20 + (param_3 - local_48);
              } while (puVar20 < puVar25 + iVar14 * param_3);
              uVar26 = *puVar25;
            }
            if (*(uint *)(param_5 + 2) < uVar3 + 2) {
              uVar6 = (ulong)((double)(uVar3 + 2) * _DAT_100b42cf8);
              pvVar7 = operator_new__(uVar6 & 0xffffffff);
              pvVar2 = (void *)*param_5;
              _memcpy(pvVar7,pvVar2,(ulong)*(uint *)(param_5 + 1));
              if ((pvVar2 != (void *)0x0) && (*(char *)((long)param_5 + 0x14) != '\0')) {
                operator_delete__(pvVar2);
                uVar3 = *(uint *)((long)param_5 + 0xc);
              }
              *param_5 = (long)pvVar7;
              *(int *)(param_5 + 2) = (int)uVar6;
              *(undefined1 *)((long)param_5 + 0x14) = 1;
            }
            if (*(uint *)(param_5 + 1) < uVar3 + 2) {
              *(uint *)(param_5 + 1) = uVar3 + 2;
            }
            *(ushort *)(*param_5 + (ulong)uVar3) = uVar26;
            iVar11 = *(int *)((long)param_5 + 0xc);
            uVar3 = iVar11 + 2;
            *(uint *)((long)param_5 + 0xc) = uVar3;
            uVar27 = iVar11 + 4;
            if (*(uint *)(param_5 + 2) < uVar27) {
              uVar6 = (ulong)((double)uVar27 * _DAT_100b42cf8);
              pvVar7 = operator_new__(uVar6 & 0xffffffff);
              pvVar2 = (void *)*param_5;
              _memcpy(pvVar7,pvVar2,(ulong)*(uint *)(param_5 + 1));
              if ((pvVar2 != (void *)0x0) && (*(char *)((long)param_5 + 0x14) != '\0')) {
                operator_delete__(pvVar2);
                uVar3 = *(uint *)((long)param_5 + 0xc);
              }
              *param_5 = (long)pvVar7;
              *(int *)(param_5 + 2) = (int)uVar6;
              *(undefined1 *)((long)param_5 + 0x14) = 1;
            }
            if (*(uint *)(param_5 + 1) < uVar3 + 2) {
              *(uint *)(param_5 + 1) = uVar3 + 2;
            }
            *(char *)(*param_5 + (ulong)uVar3) = (char)((uint)iVar17 >> 8);
            *(char *)(*param_5 + (ulong)(*(int *)((long)param_5 + 0xc) + 1)) = (char)iVar17;
            iVar11 = *(int *)((long)param_5 + 0xc);
            uVar3 = iVar11 + 2;
            *(uint *)((long)param_5 + 0xc) = uVar3;
            uVar27 = iVar11 + 4;
            if (*(uint *)(param_5 + 2) < uVar27) {
              uVar6 = (ulong)((double)uVar27 * _DAT_100b42cf8);
              pvVar7 = operator_new__(uVar6 & 0xffffffff);
              pvVar2 = (void *)*param_5;
              _memcpy(pvVar7,pvVar2,(ulong)*(uint *)(param_5 + 1));
              if ((pvVar2 != (void *)0x0) && (*(char *)((long)param_5 + 0x14) != '\0')) {
                operator_delete__(pvVar2);
                uVar3 = *(uint *)((long)param_5 + 0xc);
              }
              *param_5 = (long)pvVar7;
              *(int *)(param_5 + 2) = (int)uVar6;
              *(undefined1 *)((long)param_5 + 0x14) = 1;
            }
            if (*(uint *)(param_5 + 1) < uVar3 + 2) {
              *(uint *)(param_5 + 1) = uVar3 + 2;
            }
            *(char *)(*param_5 + (ulong)uVar3) = (char)((uint)iVar5 >> 8);
            *(char *)(*param_5 + (ulong)(*(int *)((long)param_5 + 0xc) + 1)) = (char)iVar5;
            iVar11 = *(int *)((long)param_5 + 0xc);
            uVar3 = iVar11 + 2;
            *(uint *)((long)param_5 + 0xc) = uVar3;
            uVar27 = iVar11 + 4;
            if (*(uint *)(param_5 + 2) < uVar27) {
              uVar6 = (ulong)((double)uVar27 * _DAT_100b42cf8);
              pvVar7 = operator_new__(uVar6 & 0xffffffff);
              pvVar2 = (void *)*param_5;
              _memcpy(pvVar7,pvVar2,(ulong)*(uint *)(param_5 + 1));
              if ((pvVar2 != (void *)0x0) && (*(char *)((long)param_5 + 0x14) != '\0')) {
                operator_delete__(pvVar2);
                uVar3 = *(uint *)((long)param_5 + 0xc);
              }
              *param_5 = (long)pvVar7;
              *(int *)(param_5 + 2) = (int)uVar6;
              *(undefined1 *)((long)param_5 + 0x14) = 1;
            }
            if (*(uint *)(param_5 + 1) < uVar3 + 2) {
              *(uint *)(param_5 + 1) = uVar3 + 2;
            }
            *(char *)(*param_5 + (ulong)uVar3) = (char)((uint)local_48 >> 8);
            *(char *)(*param_5 + (ulong)(*(int *)((long)param_5 + 0xc) + 1)) = (char)local_48;
            iVar11 = *(int *)((long)param_5 + 0xc);
            uVar3 = iVar11 + 2;
            *(uint *)((long)param_5 + 0xc) = uVar3;
            uVar27 = iVar11 + 4;
            if (*(uint *)(param_5 + 2) < uVar27) {
              uVar6 = (ulong)((double)uVar27 * _DAT_100b42cf8);
              pvVar7 = operator_new__(uVar6 & 0xffffffff);
              pvVar2 = (void *)*param_5;
              _memcpy(pvVar7,pvVar2,(ulong)*(uint *)(param_5 + 1));
              if ((pvVar2 != (void *)0x0) && (*(char *)((long)param_5 + 0x14) != '\0')) {
                operator_delete__(pvVar2);
                uVar3 = *(uint *)((long)param_5 + 0xc);
              }
              *param_5 = (long)pvVar7;
              *(int *)(param_5 + 2) = (int)uVar6;
              *(undefined1 *)((long)param_5 + 0x14) = 1;
            }
            if (*(uint *)(param_5 + 1) < uVar3 + 2) {
              *(uint *)(param_5 + 1) = uVar3 + 2;
            }
            *(char *)(*param_5 + (ulong)uVar3) = (char)((uint)iVar14 >> 8);
            *(char *)(*param_5 + (ulong)(*(int *)((long)param_5 + 0xc) + 1)) = (char)iVar14;
            iVar17 = iVar17 + local_48;
            uVar3 = *(int *)((long)param_5 + 0xc) + 2;
            *(uint *)((long)param_5 + 0xc) = uVar3;
            iVar21 = iVar21 + 1;
            puVar25 = puVar25 + local_48;
          }
        } while (iVar17 < param_3);
      }
      param_1 = (ushort *)((long)param_1 + uVar8);
      bVar28 = iVar5 != param_4 + -1;
      iVar5 = iVar5 + 1;
    } while (bVar28);
  }
  return iVar21;
}

