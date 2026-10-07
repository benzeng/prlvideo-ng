
undefined8 FUN_1003c47c0(long *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  byte bVar15;
  undefined8 *puVar16;
  long local_b8 [8];
  long alStack_78 [8];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar12 = param_1[5];
  uVar2 = *(uint *)(param_1[3] + 0x20);
  uVar9 = (ulong)(uVar2 >> 5);
  lVar14 = param_1[6];
  uVar5 = lVar14 - lVar12 >> 2;
  if (uVar9 < uVar5) {
    uVar3 = 0;
    if ((*(uint *)(lVar12 + uVar9 * 4) >> (uVar2 & 0x1f) & 1) != 0) goto LAB_1003c4ba5;
  }
  else {
    uVar10 = (ulong)((uVar2 >> 5) + 1);
    if (uVar5 < uVar10) {
      FUN_10032f560();
      lVar12 = param_1[5];
    }
    else if ((uVar10 < uVar5) && (lVar13 = lVar12 + uVar10 * 4, lVar14 != lVar13)) {
      param_1[6] = (~((lVar14 + -4) - lVar13) & 0xfffffffffffffffcU) + lVar14;
    }
  }
  puVar1 = (uint *)(lVar12 + uVar9 * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  bVar15 = *(byte *)(param_1 + 4);
  for (lVar14 = param_1[1]; (lVar14 != 0 && (*(long *)(lVar14 + 0x38) == param_1[3]));
      lVar14 = **(long **)(lVar14 + 8)) {
    uVar2 = *(uint *)(lVar14 + 0x48);
    if ((ulong)uVar2 != 0) {
      lVar12 = *(long *)(lVar14 + 0x40);
      lVar13 = *param_1;
      uVar10 = 0;
      uVar9 = 0;
      uVar5 = 0;
      do {
        uVar6 = uVar5;
        if ((((((*(byte *)(lVar12 + 0x39) & 1) == 0) && ((*(byte *)(lVar13 + 0x39) & 1) == 0)) &&
             (*(char *)(lVar12 + 0x38) == *(char *)(lVar13 + 0x38))) &&
            (*(int *)(lVar12 + 0x2c) == *(int *)(lVar13 + 0x2c))) &&
           (((((*(byte *)(lVar12 + 0x35) & 2) != 0 || ((*(byte *)(lVar13 + 0x35) & 2) != 0)) ||
             (*(int *)(lVar12 + 0x28) == *(int *)(lVar13 + 0x28))) &&
            ((*(byte *)(lVar13 + 0x30) & *(byte *)(lVar12 + 0x30) & bVar15) != 0)))) {
          if ((*(byte *)(lVar12 + 0x35) & 4) == 0) {
            alStack_78[uVar9] = lVar12;
            uVar9 = (ulong)((int)uVar9 + 1);
          }
          else {
            uVar6 = (ulong)((int)uVar5 + 1);
            local_b8[uVar5] = lVar12;
          }
        }
        uVar10 = uVar10 + 1;
        lVar12 = lVar12 + 0x40;
        uVar5 = uVar6;
      } while (uVar10 < uVar2);
      iVar4 = (int)uVar6;
      if (iVar4 == 0) {
        bVar7 = 0;
      }
      else {
        lVar12 = *param_1;
        lVar13 = 0;
        bVar7 = 0;
        if ((uVar6 & 1) != 0) {
          bVar7 = *(byte *)(local_b8[0] + 0x30);
          if (local_b8[0] != lVar12) {
            bVar15 = bVar15 & ~bVar7;
            bVar7 = 0;
          }
          lVar13 = 1;
        }
        if (iVar4 != 1) {
          plVar11 = local_b8 + lVar13 + 1;
          iVar4 = (iVar4 + 1) - ((int)lVar13 + 1);
          do {
            bVar8 = *(byte *)(plVar11[-1] + 0x30);
            if (plVar11[-1] != lVar12) {
              bVar15 = bVar15 & ~bVar8;
              bVar8 = bVar7;
            }
            bVar7 = *(byte *)(*plVar11 + 0x30);
            if (*plVar11 != lVar12) {
              bVar15 = bVar15 & ~bVar7;
              bVar7 = bVar8;
            }
            plVar11 = plVar11 + 2;
            iVar4 = iVar4 + -2;
          } while (iVar4 != 0);
        }
      }
      if ((int)uVar9 != 0) {
        uVar5 = 0;
        do {
          if (lVar14 == *(long *)*param_1) {
            if (((long *)alStack_78[uVar5] != (long *)*param_1) &&
               ((*(byte *)((long *)alStack_78[uVar5] + 6) & (bVar7 ^ 0xff) & bVar15) != 0)) {
              uVar3 = FUN_1003c6300();
              goto LAB_1003c4a66;
            }
          }
          else {
            uVar3 = FUN_1003c6300();
LAB_1003c4a66:
            if ((int)uVar3 != 0) goto LAB_1003c4ba5;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar9);
      }
    }
    uVar3 = 0;
    if (bVar15 == 0) goto LAB_1003c4ba5;
  }
  plVar11 = *(long **)(param_1[3] + 0x40);
  if (plVar11 != (long *)0x0) {
    lVar14 = param_1[2];
    do {
      lVar12 = (**(code **)(*(long *)plVar11[1] + 0x20))();
      if (lVar12 == 0) {
        lVar12 = (**(code **)(*(long *)plVar11[1] + 0x10))();
        if (lVar12 != 0) {
          *(byte *)(param_1 + 4) = bVar15;
          param_1[2] = lVar12;
          lVar12 = *(long *)(*(long *)(lVar12 + 0x40) + 0x30);
          goto LAB_1003c4b20;
        }
        lVar12 = (**(code **)(*(long *)plVar11[1] + 0x18))();
        if (lVar12 != 0) {
          if (lVar14 != 0) {
            *(byte *)(param_1 + 4) = bVar15;
            param_1[2] = lVar14;
            lVar12 = *(long *)(lVar14 + 0x30);
            goto LAB_1003c4b20;
          }
          for (puVar16 = *(undefined8 **)(lVar12 + 0x38); puVar16 != (undefined8 *)0x0;
              puVar16 = (undefined8 *)*puVar16) {
            lVar12 = (**(code **)(*(long *)puVar16[1] + 0x10))();
            *(byte *)(param_1 + 4) = bVar15;
            param_1[2] = 0;
            lVar12 = *(long *)(lVar12 + 0x30);
            param_1[3] = lVar12;
            param_1[1] = *(long *)(lVar12 + 0x30);
            uVar3 = FUN_1003c47c0(param_1,param_2);
            if ((int)uVar3 != 0) goto LAB_1003c4ba5;
          }
        }
      }
      else {
        *(byte *)(param_1 + 4) = bVar15;
        param_1[2] = lVar14;
LAB_1003c4b20:
        param_1[3] = lVar12;
        param_1[1] = *(long *)(lVar12 + 0x30);
        uVar3 = FUN_1003c47c0(param_1,param_2);
        if ((int)uVar3 != 0) goto LAB_1003c4ba5;
      }
      plVar11 = (long *)*plVar11;
    } while (plVar11 != (long *)0x0);
  }
  uVar3 = 0;
LAB_1003c4ba5:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

