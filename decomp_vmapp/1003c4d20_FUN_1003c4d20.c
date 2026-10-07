
undefined8 FUN_1003c4d20(long *param_1,undefined8 param_2)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  byte local_c1;
  long local_b8 [8];
  long local_78 [8];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar8 = param_1[5];
  uVar15 = *(uint *)(param_1[3] + 0x20);
  uVar12 = (ulong)(uVar15 >> 5);
  lVar14 = param_1[6];
  uVar7 = lVar14 - lVar8 >> 2;
  if (uVar12 < uVar7) {
    if ((*(uint *)(lVar8 + uVar12 * 4) >> (uVar15 & 0x1f) & 1) != 0) goto LAB_1003c50f7;
  }
  else {
    uVar10 = (ulong)((uVar15 >> 5) + 1);
    if (uVar7 < uVar10) {
      FUN_10032f560();
      lVar8 = param_1[5];
    }
    else if ((uVar10 < uVar7) && (lVar11 = lVar8 + uVar10 * 4, lVar14 != lVar11)) {
      param_1[6] = (~((lVar14 + -4) - lVar11) & 0xfffffffffffffffcU) + lVar14;
    }
  }
  puVar1 = (uint *)(lVar8 + uVar12 * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar15 & 0x1f);
  local_c1 = *(byte *)(param_1 + 4);
  for (lVar14 = param_1[1]; (lVar14 != 0 && (*(long *)(lVar14 + 0x38) == param_1[3]));
      lVar14 = **(long **)(lVar14 + 8)) {
    uVar15 = *(uint *)(lVar14 + 0x48);
    if ((ulong)uVar15 != 0) {
      lVar8 = *(long *)(lVar14 + 0x40);
      lVar11 = *param_1;
      uVar12 = 0;
      uVar7 = 0;
      uVar3 = 0;
      do {
        if ((((((*(byte *)(lVar8 + 0x39) & 1) == 0) && ((*(byte *)(lVar11 + 0x39) & 1) == 0)) &&
             (*(char *)(lVar8 + 0x38) == *(char *)(lVar11 + 0x38))) &&
            (*(int *)(lVar8 + 0x2c) == *(int *)(lVar11 + 0x2c))) &&
           (((((*(byte *)(lVar8 + 0x35) & 2) != 0 || ((*(byte *)(lVar11 + 0x35) & 2) != 0)) ||
             (*(int *)(lVar8 + 0x28) == *(int *)(lVar11 + 0x28))) &&
            ((*(byte *)(lVar11 + 0x30) & *(byte *)(lVar8 + 0x30) & local_c1) != 0)))) {
          if ((*(byte *)(lVar8 + 0x35) & 4) == 0) {
            local_78[uVar7] = lVar8;
            uVar7 = (ulong)((int)uVar7 + 1);
          }
          else {
            uVar10 = (ulong)uVar3;
            uVar3 = uVar3 + 1;
            local_b8[uVar10] = lVar8;
          }
        }
        uVar12 = uVar12 + 1;
        lVar8 = lVar8 + 0x40;
      } while (uVar12 < uVar15);
      if (uVar3 == 0) {
        bVar5 = 0;
      }
      else {
        lVar8 = *param_1;
        lVar11 = 0;
        bVar5 = 0;
        if ((uVar3 & 1) != 0) {
          bVar5 = *(byte *)(local_b8[0] + 0x30);
          if (local_b8[0] != lVar8) {
            local_c1 = local_c1 & ~bVar5;
            bVar5 = 0;
          }
          lVar11 = 1;
        }
        if (uVar3 != 1) {
          plVar13 = local_b8 + lVar11 + 1;
          iVar4 = (uVar3 + 1) - ((int)lVar11 + 1);
          do {
            bVar6 = *(byte *)(plVar13[-1] + 0x30);
            if (plVar13[-1] != lVar8) {
              local_c1 = local_c1 & ~bVar6;
              bVar6 = bVar5;
            }
            bVar5 = *(byte *)(*plVar13 + 0x30);
            if (*plVar13 != lVar8) {
              local_c1 = local_c1 & ~bVar5;
              bVar5 = bVar6;
            }
            plVar13 = plVar13 + 2;
            iVar4 = iVar4 + -2;
          } while (iVar4 != 0);
        }
      }
      if ((int)uVar7 != 0) {
        plVar13 = local_78;
        do {
          plVar2 = (long *)*plVar13;
          if (((lVar14 != *(long *)*param_1) ||
              ((plVar2 != (long *)*param_1 &&
               ((*(byte *)(plVar2 + 6) & (bVar5 ^ 0xff) & local_c1) != 0)))) &&
             ((*(byte *)((long)plVar2 + 0x35) & 2) == 0)) {
            FUN_1003c4bd0();
          }
          plVar13 = plVar13 + 1;
          uVar15 = (int)uVar7 - 1;
          uVar7 = (ulong)uVar15;
        } while (uVar15 != 0);
      }
    }
    if (local_c1 == 0) goto LAB_1003c50f7;
  }
  plVar13 = *(long **)(param_1[3] + 0x40);
  if (plVar13 != (long *)0x0) {
    lVar14 = param_1[2];
    do {
      lVar8 = (**(code **)(*(long *)plVar13[1] + 0x20))();
      if (lVar8 == 0) {
        lVar8 = (**(code **)(*(long *)plVar13[1] + 0x10))();
        if (lVar8 != 0) {
          *(byte *)(param_1 + 4) = local_c1;
          param_1[2] = lVar8;
          lVar8 = *(long *)(*(long *)(lVar8 + 0x40) + 0x30);
          goto LAB_1003c50d0;
        }
        lVar8 = (**(code **)(*(long *)plVar13[1] + 0x18))();
        if (lVar8 != 0) {
          if (lVar14 != 0) {
            *(byte *)(param_1 + 4) = local_c1;
            param_1[2] = lVar14;
            lVar8 = *(long *)(lVar14 + 0x30);
            goto LAB_1003c50d0;
          }
          for (puVar9 = *(undefined8 **)(lVar8 + 0x38); puVar9 != (undefined8 *)0x0;
              puVar9 = (undefined8 *)*puVar9) {
            lVar8 = (**(code **)(*(long *)puVar9[1] + 0x10))();
            *(byte *)(param_1 + 4) = local_c1;
            param_1[2] = 0;
            lVar8 = *(long *)(lVar8 + 0x30);
            param_1[3] = lVar8;
            param_1[1] = *(long *)(lVar8 + 0x30);
            FUN_1003c4d20(param_1,param_2);
          }
        }
      }
      else {
        *(byte *)(param_1 + 4) = local_c1;
        param_1[2] = lVar14;
LAB_1003c50d0:
        param_1[3] = lVar8;
        param_1[1] = *(long *)(lVar8 + 0x30);
        FUN_1003c4d20(param_1,param_2);
      }
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
  }
LAB_1003c50f7:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

