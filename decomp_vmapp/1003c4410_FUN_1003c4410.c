
undefined8 FUN_1003c4410(long *param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  byte bVar10;
  byte bVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  byte bVar18;
  long local_b8 [8];
  long alStack_78 [8];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar6 = param_1[5];
  uVar2 = *(uint *)(param_1[3] + 0x20);
  uVar12 = (ulong)(uVar2 >> 5);
  lVar16 = param_1[6];
  uVar8 = lVar16 - lVar6 >> 2;
  if (uVar12 < uVar8) {
    uVar7 = 0;
    if ((*(uint *)(lVar6 + uVar12 * 4) >> (uVar2 & 0x1f) & 1) != 0) goto LAB_1003c4793;
  }
  else {
    uVar4 = (ulong)((uVar2 >> 5) + 1);
    if (uVar8 < uVar4) {
      FUN_10032f560();
      lVar6 = param_1[5];
    }
    else if ((uVar4 < uVar8) && (lVar13 = lVar6 + uVar4 * 4, lVar16 != lVar13)) {
      param_1[6] = (~((lVar16 + -4) - lVar13) & 0xfffffffffffffffcU) + lVar16;
    }
  }
  puVar1 = (uint *)(lVar6 + uVar12 * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  bVar18 = *(byte *)(param_1 + 4);
  lVar16 = param_1[1];
  if (lVar16 == 0) {
    lVar6 = param_1[3];
  }
  else {
    lVar6 = param_1[3];
    do {
      if (*(long *)(lVar16 + 0x38) != lVar6) break;
      uVar2 = *(uint *)(lVar16 + 0x48);
      if ((ulong)uVar2 != 0) {
        lVar13 = *(long *)(lVar16 + 0x40);
        lVar5 = *param_1;
        uVar4 = 0;
        uVar12 = 0;
        uVar8 = 0;
        do {
          uVar15 = uVar8;
          if ((((((*(byte *)(lVar13 + 0x39) & 1) == 0) && ((*(byte *)(lVar5 + 0x39) & 1) == 0)) &&
               (*(char *)(lVar13 + 0x38) == *(char *)(lVar5 + 0x38))) &&
              (*(int *)(lVar13 + 0x2c) == *(int *)(lVar5 + 0x2c))) &&
             (((((*(byte *)(lVar13 + 0x35) & 2) != 0 || ((*(byte *)(lVar5 + 0x35) & 2) != 0)) ||
               (*(int *)(lVar13 + 0x28) == *(int *)(lVar5 + 0x28))) &&
              ((*(byte *)(lVar5 + 0x30) & *(byte *)(lVar13 + 0x30) & bVar18) != 0)))) {
            if ((*(byte *)(lVar13 + 0x35) & 4) == 0) {
              alStack_78[uVar12] = lVar13;
              uVar12 = (ulong)((int)uVar12 + 1);
            }
            else {
              uVar15 = (ulong)((int)uVar8 + 1);
              local_b8[uVar8] = lVar13;
            }
          }
          uVar4 = uVar4 + 1;
          lVar13 = lVar13 + 0x40;
          uVar8 = uVar15;
        } while (uVar4 < uVar2);
        iVar14 = (int)uVar15;
        if (iVar14 == 0) {
          bVar10 = 0;
        }
        else {
          lVar13 = *param_1;
          lVar5 = 0;
          bVar10 = 0;
          if ((uVar15 & 1) != 0) {
            bVar10 = *(byte *)(local_b8[0] + 0x30);
            if (local_b8[0] != lVar13) {
              bVar18 = bVar18 & ~bVar10;
              bVar10 = 0;
            }
            lVar5 = 1;
          }
          if (iVar14 != 1) {
            plVar9 = local_b8 + lVar5 + 1;
            iVar14 = (iVar14 + 1) - ((int)lVar5 + 1);
            do {
              bVar11 = *(byte *)(plVar9[-1] + 0x30);
              if (plVar9[-1] != lVar13) {
                bVar18 = bVar18 & ~bVar11;
                bVar11 = bVar10;
              }
              bVar10 = *(byte *)(*plVar9 + 0x30);
              if (*plVar9 != lVar13) {
                bVar18 = bVar18 & ~bVar10;
                bVar10 = bVar11;
              }
              plVar9 = plVar9 + 2;
              iVar14 = iVar14 + -2;
            } while (iVar14 != 0);
          }
        }
        if ((int)uVar12 != 0) {
          plVar9 = (long *)*param_1;
          lVar13 = *plVar9;
          uVar8 = 0;
          do {
            plVar3 = (long *)alStack_78[uVar8];
            if ((lVar16 != lVar13) ||
               ((plVar3 != plVar9 && ((*(byte *)(plVar3 + 6) & (bVar10 ^ 0xff) & bVar18) != 0)))) {
              if (*param_2 != 0) {
                uVar7 = 1;
                goto LAB_1003c4793;
              }
              *param_2 = (long)plVar3;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar12);
        }
      }
      uVar7 = 0;
      if (bVar18 == 0) goto LAB_1003c4793;
      lVar16 = **(long **)(lVar16 + 8);
    } while (lVar16 != 0);
  }
  plVar9 = *(long **)(lVar6 + 0x40);
  if (plVar9 != (long *)0x0) {
    lVar16 = param_1[2];
    do {
      lVar6 = (**(code **)(*(long *)plVar9[1] + 0x20))();
      if (lVar6 == 0) {
        lVar6 = (**(code **)(*(long *)plVar9[1] + 0x10))();
        if (lVar6 != 0) {
          *(byte *)(param_1 + 4) = bVar18;
          param_1[2] = lVar6;
          lVar6 = *(long *)(*(long *)(lVar6 + 0x40) + 0x30);
          goto LAB_1003c4720;
        }
        lVar6 = (**(code **)(*(long *)plVar9[1] + 0x18))();
        if (lVar6 != 0) {
          if (lVar16 != 0) {
            *(byte *)(param_1 + 4) = bVar18;
            param_1[2] = lVar16;
            lVar6 = *(long *)(lVar16 + 0x30);
            goto LAB_1003c4720;
          }
          for (puVar17 = *(undefined8 **)(lVar6 + 0x38); puVar17 != (undefined8 *)0x0;
              puVar17 = (undefined8 *)*puVar17) {
            lVar6 = (**(code **)(*(long *)puVar17[1] + 0x10))();
            *(byte *)(param_1 + 4) = bVar18;
            param_1[2] = 0;
            lVar6 = *(long *)(lVar6 + 0x30);
            param_1[3] = lVar6;
            param_1[1] = *(long *)(lVar6 + 0x30);
            uVar7 = FUN_1003c4410(param_1,param_2);
            if ((int)uVar7 != 0) goto LAB_1003c4793;
          }
        }
      }
      else {
        *(byte *)(param_1 + 4) = bVar18;
        param_1[2] = lVar16;
LAB_1003c4720:
        param_1[3] = lVar6;
        param_1[1] = *(long *)(lVar6 + 0x30);
        uVar7 = FUN_1003c4410(param_1,param_2);
        if ((int)uVar7 != 0) goto LAB_1003c4793;
      }
      plVar9 = (long *)*plVar9;
    } while (plVar9 != (long *)0x0);
  }
  uVar7 = 0;
LAB_1003c4793:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

