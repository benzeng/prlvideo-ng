
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1003c9ed0(uint *param_1,ulong *param_2,ushort *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  uint uVar10;
  ushort *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  void *pvVar21;
  undefined1 auVar22 [16];
  ulong local_40;
  ulong local_38;
  
  auVar3 = _DAT_100b3f5b0;
  if (param_2 == (ulong *)0x0) {
    uVar6 = (ulong)(uint)*(ulong *)(param_1 + 1);
    local_38 = *(ulong *)(param_1 + 1);
    uVar18 = (ulong)param_1[2];
    local_40 = 0;
    uVar15 = 0;
  }
  else {
    local_40 = *param_2;
    local_38 = param_2[1];
    uVar15 = local_40 >> 0x20;
    uVar18 = local_38 >> 0x20;
    uVar6 = local_38 & 0xffffffff;
  }
  uVar4 = (uint)local_40;
  uVar14 = (uint)uVar6;
  uVar5 = 1;
  if (uVar4 != uVar14) {
    uVar13 = (uint)uVar15;
    uVar17 = (uint)uVar18;
    if (uVar13 != uVar17) {
      if (*(uint *)(&DAT_100b3f714 + (ulong)*param_1 * 8) < 0x1000000) {
        uVar5 = 0;
        if ((ulong)*param_1 - 0x53 < 0x11) {
          uVar5 = FUN_1003db240(param_1,&local_40,*(undefined4 *)param_3);
        }
      }
      else {
        uVar10 = *(uint *)(&DAT_100b3f714 + (ulong)*param_1 * 8) >> 0x18;
        uVar9 = (ulong)uVar10;
        uVar12 = (uint)local_38;
        if (uVar10 == 1) {
          while (uVar14 = (uint)uVar15, uVar14 < (uint)uVar18) {
            uVar15 = local_40 & 0xffffffff;
            if (uVar4 < (uint)uVar6) {
              uVar1 = *param_3;
              uVar13 = param_1[3];
              lVar19 = *(long *)(param_1 + 4);
              do {
                *(char *)((ulong)(uVar13 * uVar14) + lVar19 + uVar15) = (char)uVar1;
                uVar15 = uVar15 + 1;
              } while ((uint)uVar15 < uVar12);
              uVar18 = local_38 >> 0x20;
              uVar6 = local_38;
            }
            uVar15 = (ulong)(uVar14 + 1);
          }
        }
        else if (uVar10 == 2) {
          if (uVar13 < uVar17) {
            lVar19 = *(long *)(param_1 + 4);
            uVar10 = param_1[3];
            local_40 = local_40 & 0xffffffff;
            uVar6 = (ulong)((uVar14 - 1) - uVar4) + 1;
            uVar13 = uVar13 * uVar10;
            do {
              if (uVar4 < uVar14) {
                uVar1 = *param_3;
                uVar18 = local_40;
                uVar12 = uVar4;
                if ((uVar6 & 0x1fffffff0) != 0) {
                  pauVar8 = (undefined1 (*) [16])(lVar19 + 0x10 + local_40 * 2 + (ulong)uVar13);
                  uVar18 = (uVar6 & 0x1fffffff0) + local_40;
                  auVar22 = pshufb(ZEXT216(uVar1),auVar3);
                  uVar9 = uVar6 & 0xfffffffffffffff0;
                  do {
                    pauVar8[-1] = auVar22;
                    *pauVar8 = auVar22;
                    pauVar8 = pauVar8 + 2;
                    uVar9 = uVar9 - 0x10;
                  } while (uVar9 != 0);
                  uVar12 = (uint)uVar18;
                }
                if (uVar6 + local_40 != uVar18) {
                  puVar11 = (ushort *)((ulong)(uVar10 * (int)uVar15) + lVar19 + uVar18 * 2);
                  uVar20 = (uVar14 - 1) - uVar12;
                  if ((uVar14 - uVar12 & 7) != 0) {
                    lVar16 = 0;
                    do {
                      *(ushort *)((ulong)uVar13 + uVar18 * 2 + lVar19 + lVar16 * 2) = uVar1;
                      puVar11 = puVar11 + 1;
                      lVar16 = lVar16 + 1;
                    } while ((uVar14 - uVar12 & 7) != (uint)lVar16);
                    uVar12 = uVar12 + (uint)lVar16;
                  }
                  if (6 < uVar20) {
                    iVar7 = uVar14 - uVar12;
                    do {
                      *puVar11 = uVar1;
                      puVar11[1] = uVar1;
                      puVar11[2] = uVar1;
                      puVar11[3] = uVar1;
                      puVar11[4] = uVar1;
                      puVar11[5] = uVar1;
                      puVar11[6] = uVar1;
                      puVar11[7] = uVar1;
                      puVar11 = puVar11 + 8;
                      iVar7 = iVar7 + -8;
                    } while (iVar7 != 0);
                  }
                }
              }
              uVar15 = uVar15 + 1;
              uVar13 = uVar13 + uVar10;
            } while ((uint)uVar15 < uVar17);
            uVar5 = 1;
          }
        }
        else if (uVar10 == 4) {
          if (uVar13 < uVar17) {
            lVar19 = *(long *)(param_1 + 4);
            do {
              uVar6 = local_40 & 0xffffffff;
              if (uVar4 < uVar12) {
                uVar2 = *(undefined4 *)param_3;
                uVar14 = param_1[3];
                do {
                  *(undefined4 *)((ulong)(uVar14 * (int)uVar15) + lVar19 + uVar6 * 4) = uVar2;
                  uVar6 = uVar6 + 1;
                } while ((uint)uVar6 < uVar12);
              }
              uVar14 = (int)uVar15 + 1;
              uVar15 = (ulong)uVar14;
            } while (uVar14 < (uint)(local_38 >> 0x20));
          }
        }
        else if (uVar13 < uVar17) {
          do {
            if (uVar4 < uVar14) {
              pvVar21 = (void *)((ulong)(param_1[3] * (int)uVar15) + (ulong)(uVar4 * uVar10) +
                                *(long *)(param_1 + 4));
              uVar13 = uVar4;
              uVar12 = -(uVar14 - uVar4 & 7);
              uVar20 = uVar14 - uVar4 & 7;
              while (uVar20 != 0) {
                _memcpy(pvVar21,param_3,uVar9);
                pvVar21 = (void *)((long)pvVar21 + uVar9);
                uVar13 = uVar13 + 1;
                uVar12 = uVar12 + 1;
                uVar20 = uVar12;
              }
              if (6 < (uVar14 - 1) - uVar4) {
                iVar7 = uVar14 - uVar13;
                lVar19 = 0;
                do {
                  _memcpy((void *)((long)pvVar21 + lVar19),param_3,uVar9);
                  _memcpy((void *)((long)pvVar21 + lVar19 + uVar9),param_3,uVar9);
                  _memcpy((void *)((long)pvVar21 + lVar19 + uVar9 * 2),param_3,uVar9);
                  _memcpy((void *)((long)pvVar21 + lVar19 + uVar9 * 3),param_3,uVar9);
                  _memcpy((void *)((long)pvVar21 + lVar19 + uVar9 * 4),param_3,uVar9);
                  _memcpy((void *)((long)pvVar21 + lVar19 + uVar9 * 5),param_3,uVar9);
                  _memcpy((void *)((long)pvVar21 + lVar19 + uVar9 * 6),param_3,uVar9);
                  _memcpy((void *)((long)pvVar21 + lVar19 + uVar9 * 7),param_3,uVar9);
                  lVar19 = lVar19 + uVar9 * 8;
                  iVar7 = iVar7 + -8;
                } while (iVar7 != 0);
              }
            }
            uVar13 = (int)uVar15 + 1;
            uVar15 = (ulong)uVar13;
          } while (uVar13 < uVar17);
          uVar5 = 1;
        }
      }
    }
  }
  return uVar5;
}

