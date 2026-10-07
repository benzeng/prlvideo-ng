
undefined8 FUN_100346eb0(long param_1,ushort *param_2)

{
  long *plVar1;
  long *plVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  long *plVar17;
  long local_b8 [17];
  long local_30;
  
  lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar7;
  uVar11 = 9;
  if (0xf < (ulong)*(uint *)(param_2 + 2)) {
    uVar4 = *(uint *)(param_2 + 6);
    if ((ulong)uVar4 <= (ulong)*(uint *)(param_2 + 2) - 0x10 >> 2) {
      uVar5 = *(uint *)(param_2 + 4);
      uVar11 = 4;
      if ((uVar5 < 0x10) && (uVar4 <= 0x10 - uVar5)) {
        uVar3 = *param_2;
        uVar11 = 8;
        if (uVar3 < 0x16) {
          if (uVar3 != 0x15) goto LAB_100347075;
          iVar15 = 0x10;
        }
        else {
          iVar15 = 0;
          if (0x16 < uVar3) {
            if (uVar3 < 0x48) {
              if (uVar3 == 0x17) {
                iVar15 = 0x20;
              }
              else {
                if (uVar3 != 0x47) goto LAB_100347075;
                iVar15 = 0x30;
              }
            }
            else if (uVar3 == 0x48) {
              iVar15 = 0x40;
            }
            else {
              if (uVar3 != 0x49) goto LAB_100347075;
              iVar15 = 0x50;
            }
          }
        }
        local_b8[0xe] = 0;
        local_b8[0xf] = 0;
        local_b8[0xc] = 0;
        local_b8[0xd] = 0;
        local_b8[10] = 0;
        local_b8[0xb] = 0;
        local_b8[8] = 0;
        local_b8[9] = 0;
        local_b8[6] = 0;
        local_b8[7] = 0;
        local_b8[4] = 0;
        local_b8[5] = 0;
        local_b8[2] = 0;
        local_b8[3] = 0;
        local_b8[0] = 0;
        local_b8[1] = 0;
        uVar11 = 0;
        if (uVar4 != 0) {
          plVar2 = (long *)(param_1 + 0x27d8);
          uVar16 = 0;
          do {
            uVar6 = *(uint *)(param_2 + (ulong)uVar16 * 2 + 8);
            if (uVar6 != 0) {
              uVar11 = 7;
              plVar10 = (long *)*plVar2;
              plVar17 = plVar2;
              if ((long *)*plVar2 == (long *)0x0) goto LAB_100347075;
              do {
                while (plVar12 = plVar10, uVar6 <= *(uint *)(plVar12 + 4)) {
                  plVar10 = (long *)*plVar12;
                  plVar17 = plVar12;
                  if ((long *)*plVar12 == (long *)0x0) goto LAB_100347013;
                }
                plVar1 = plVar12 + 1;
                plVar12 = plVar17;
                plVar10 = (long *)*plVar1;
              } while ((long *)*plVar1 != (long *)0x0);
LAB_100347013:
              if ((plVar12 == plVar2) || (uVar6 < *(uint *)(plVar12 + 4))) goto LAB_100347075;
              local_b8[uVar16] = plVar12[5];
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar4);
          uVar11 = 0;
          if (uVar4 != 0) {
            uVar13 = 0;
            do {
              lVar8 = local_b8[uVar13];
              uVar14 = (ulong)(iVar15 + uVar5 + (int)uVar13);
              lVar9 = *(long *)(param_1 + 0x58 + uVar14 * 8);
              if (lVar9 != lVar8) {
                if (lVar9 != 0) {
                  *(int *)(lVar9 + 0x38) = *(int *)(lVar9 + 0x38) + -1;
                }
                *(long *)(param_1 + 0x58 + uVar14 * 8) = lVar8;
                if (lVar8 != 0) {
                  *(int *)(lVar8 + 0x38) = *(int *)(lVar8 + 0x38) + 1;
                }
              }
              uVar13 = uVar13 + 1;
              uVar11 = 0;
            } while (uVar13 < uVar4);
          }
        }
      }
    }
  }
LAB_100347075:
  if (lVar7 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar11;
}

