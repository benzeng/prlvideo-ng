
byte FUN_100398280(long *param_1,long param_2,long param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  ulong uVar12;
  uint *puVar13;
  uint uVar14;
  long lVar15;
  byte bVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  uint uVar26;
  uint uVar27;
  bool bVar28;
  bool bVar29;
  byte bVar30;
  undefined4 local_90 [8];
  char local_70;
  char local_54;
  int local_50;
  uint local_4c;
  undefined8 local_48;
  undefined2 local_40;
  long local_38;
  
  bVar30 = 0;
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar8 = *param_1;
  uVar2 = *(uint *)(lVar8 + 0x10);
  bVar28 = true;
  if (*(long *)(lVar8 + 0x40) != 0) {
    bVar28 = *(char *)(*(long *)(lVar8 + 0x40) + 0xbc) != '\0';
  }
  bVar16 = 0;
  uVar26 = *(uint *)(lVar8 + 0x14) & ~uVar2;
  if (uVar26 == 0) {
    bVar16 = 0;
  }
  else {
    uVar12 = 0;
    do {
      if ((uVar26 & 1) != 0) {
        bVar16 = *(int *)((long)param_1 + uVar12 * 0xc + 8) != 0 | bVar16;
        local_40 = 0;
        local_48 = 0;
        *(undefined2 *)((long)param_1 + uVar12 * 0xc + 0x10) = 0;
        *(undefined8 *)((long)param_1 + uVar12 * 0xc + 8) = 0;
        uVar27 = FUN_100351740(*param_1,*(undefined4 *)(*param_1 + 0x14),uVar12);
        lVar8 = *(long *)(*param_1 + 8);
        lVar23 = (ulong)uVar27 * 0x10;
        if (*(int *)(lVar8 + 8 + lVar23) != 0) {
          (*DAT_1011c56a0)(uVar27 + 0x84c0);
          (*DAT_1011c5768)(*(undefined4 *)(lVar8 + 0xc + lVar23),0);
          *(undefined8 *)(lVar8 + 8 + lVar23) = 0;
          *(undefined8 *)(lVar8 + lVar23) = 0;
        }
      }
      uVar12 = (ulong)((int)uVar12 + 1);
      uVar27 = uVar26 >> 1;
      uVar26 = uVar26 >> 1;
    } while (uVar27 != 0);
  }
  if (uVar2 != 0) {
    uVar27 = 0;
    uVar26 = uVar2;
    do {
      if ((uVar26 & 1) != 0) {
        iVar18 = uVar27 * 0x40;
        uVar7 = *(uint *)(param_2 + (ulong)(iVar18 + 0x100) * 4);
        uVar11 = FUN_100351740(*param_1,uVar2,uVar27);
        lVar8 = *(long *)(*param_1 + 8);
        lVar23 = (ulong)uVar11 * 0x10;
        if (uVar7 != *(uint *)(lVar8 + 8 + lVar23)) {
          puVar13 = *(uint **)(param_3 + 0x8068 +
                              (ulong)((uVar7 >> 0xc ^ uVar7) & 0xfff ^ uVar7 >> 0x18) * 8);
LAB_1003986a4:
          if (puVar13 != (uint *)0x0) {
            if (*puVar13 != uVar7) goto LAB_1003986a0;
            if (*(long *)(puVar13 + 2) != 0) {
              lVar24 = *(long *)(*(long *)(puVar13 + 2) + 8);
              if (*(char *)(lVar24 + 0x88) == '\0') {
                bVar29 = false;
              }
              else {
                bVar29 = *(int *)(param_2 + (ulong)(iVar18 + 0x121) * 4) == 0;
              }
              uVar12 = (ulong)(*(int *)(lVar24 + 8) == 0x23);
              lVar25 = 0;
              if (uVar12 < (ulong)(*(long *)(lVar24 + 0x48) - *(long *)(lVar24 + 0x40) >> 3)) {
                lVar25 = *(long *)(*(long *)(lVar24 + 0x40) + uVar12 * 8);
              }
              iVar19 = *(int *)(lVar25 + 0xa8);
              if (bVar28) {
                bVar9 = 1 < *(uint *)(lVar25 + 0x10);
              }
              else {
                bVar9 = false;
              }
              if (((*(byte *)(lVar25 + 0xac) & 8) == 0) ||
                 (iVar3 = 5, *(int *)(param_2 + (ulong)(iVar18 + 0x11d) * 4) == 0)) {
                iVar3 = *(int *)(lVar25 + 0xa4);
              }
              iVar4 = *(int *)(lVar25 + 0x14);
              if (*(char *)(DAT_1011c8478 + 0x84) == '\0') {
                if ((bVar16 & 2) == 0) {
                  puVar21 = (undefined4 *)(lVar25 + 0x30);
                  puVar22 = local_90;
                  for (lVar15 = 0x12; lVar15 != 0; lVar15 = lVar15 + -1) {
                    *puVar22 = *puVar21;
                    puVar21 = puVar21 + (ulong)bVar30 * -2 + 1;
                    puVar22 = puVar22 + (ulong)bVar30 * -2 + 1;
                  }
                  iVar5 = *(int *)(lVar25 + 0x28);
                  uVar20 = *(uint *)(lVar25 + 0x2c);
                  FUN_1003dcc70(local_90,uVar27,param_2,*(undefined4 *)(lVar24 + 8));
                  iVar6 = *(int *)(lVar25 + 0x10);
                  if (local_50 != iVar6) {
                    local_4c = local_4c | 0x201;
                    local_50 = iVar6;
                  }
                  if (iVar5 != iVar6 + -1) {
                    uVar20 = uVar20 | 2;
                  }
                  if ((bool)local_70 != (iVar19 == 4)) {
                    local_70 = iVar19 == 4;
                    local_4c = local_4c | 0x80;
                  }
                  uVar14 = *(uint *)(lVar24 + 8);
                  if ((int)uVar14 < 0x66) {
                    bVar10 = false;
                    if (uVar14 < 9) {
                      uVar17 = 0x10a;
LAB_1003985c3:
                      bVar10 = false;
                      if ((uVar17 >> (uVar14 & 0x1f) & 1) != 0) {
                        bVar10 = *(int *)(param_2 + (ulong)(iVar18 + 0x11d) * 4) != 0;
                      }
                    }
                  }
                  else {
                    uVar14 = uVar14 - 0x66;
                    bVar10 = false;
                    if (uVar14 < 0xd) {
                      uVar17 = 0x1015;
                      goto LAB_1003985c3;
                    }
                  }
                  if ((bool)local_54 != bVar10) {
                    local_4c = local_4c | 0x800;
                    local_54 = bVar10;
                  }
                  if (local_4c != 0 || uVar20 != 0) {
                    bVar16 = bVar16 | 2;
                  }
                }
              }
              else {
                bVar16 = bVar16 | 2;
              }
              goto LAB_10039872c;
            }
          }
          lVar25 = 0;
          uVar7 = 0;
          lVar24 = 0;
          iVar19 = 0;
          iVar3 = 0;
          bVar29 = false;
          bVar9 = false;
          iVar4 = 0;
LAB_10039872c:
          uVar12 = (ulong)uVar27;
          piVar1 = (int *)((long)param_1 + uVar12 * 0xc + 0xc);
          if ((((*(int *)((long)param_1 + uVar12 * 0xc + 8) != iVar19) || (*piVar1 != iVar3)) ||
              ((bool)*(char *)((long)param_1 + uVar12 * 0xc + 0x10) != bVar29)) ||
             ((bool)*(char *)((long)param_1 + uVar12 * 0xc + 0x11) != bVar9)) {
            bVar16 = bVar16 | 1;
          }
          *(int *)((long)param_1 + uVar12 * 0xc + 8) = iVar19;
          *piVar1 = iVar3;
          *(bool *)((long)param_1 + uVar12 * 0xc + 0x10) = bVar29;
          *(bool *)((long)param_1 + uVar12 * 0xc + 0x11) = bVar9;
          iVar18 = *(int *)(lVar8 + 0xc + lVar23);
          if ((lVar25 != 0) || (iVar18 != 0 && iVar18 != iVar4)) {
            (*DAT_1011c56a0)(uVar11 + 0x84c0);
          }
          if (iVar18 != 0 && iVar18 != iVar4) {
            (*DAT_1011c5768)(iVar18,0);
          }
          if (lVar25 != 0) {
            (*DAT_1011c5768)(*(undefined4 *)(lVar25 + 0x14),*(undefined4 *)(lVar25 + 0xc));
            *(uint *)(*param_1 + 0x18) =
                 (*(ushort *)(lVar24 + 0xb0) >> 0xb & 1) << ((byte)uVar27 & 0x1f) |
                 ~(1 << ((byte)uVar27 & 0x1f)) & *(uint *)(*param_1 + 0x18);
          }
          *(long *)(lVar8 + lVar23) = lVar24;
          *(uint *)(lVar8 + 8 + lVar23) = uVar7;
          *(int *)(lVar8 + 0xc + lVar23) = iVar4;
        }
      }
      uVar27 = uVar27 + 1;
      uVar7 = uVar26 >> 1;
      uVar26 = uVar26 >> 1;
    } while (uVar7 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar16;
LAB_1003986a0:
  puVar13 = *(uint **)(puVar13 + 4);
  goto LAB_1003986a4;
}

