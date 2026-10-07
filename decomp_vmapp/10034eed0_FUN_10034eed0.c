
undefined8 FUN_10034eed0(long param_1,short *param_2)

{
  long *plVar1;
  long *plVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  undefined4 uVar17;
  long alStack_78 [9];
  long local_30;
  
  lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar6;
  uVar9 = 9;
  if (0x13 < (ulong)*(uint *)(param_2 + 2)) {
    uVar4 = *(uint *)(param_2 + 6);
    if ((ulong)uVar4 <= (ulong)*(uint *)(param_2 + 2) - 0x14 >> 3) {
      uVar15 = (ulong)*(uint *)(param_2 + 4);
      uVar9 = 4;
      if (((uVar15 < 9) && (uVar11 = 8 - *(uint *)(param_2 + 4), uVar4 <= uVar11)) &&
         (uVar5 = *(uint *)(param_2 + 8), uVar5 <= uVar11 - uVar4)) {
        if (uVar4 != 0) {
          plVar2 = (long *)(param_1 + 0x12888);
          uVar12 = 0;
          do {
            uVar11 = *(uint *)(param_2 + uVar12 * 4 + 10);
            lVar10 = 0;
            if (uVar11 != 0) {
              uVar9 = 7;
              plVar8 = (long *)*plVar2;
              plVar16 = plVar2;
              if ((long *)*plVar2 == (long *)0x0) goto LAB_10034f0ab;
              do {
                while (plVar13 = plVar8, uVar11 <= *(uint *)(plVar13 + 4)) {
                  plVar8 = (long *)*plVar13;
                  plVar16 = plVar13;
                  if ((long *)*plVar13 == (long *)0x0) goto LAB_10034efb0;
                }
                plVar1 = plVar13 + 1;
                plVar13 = plVar16;
                plVar8 = (long *)*plVar1;
              } while ((long *)*plVar1 != (long *)0x0);
LAB_10034efb0:
              if ((plVar13 == plVar2) || (uVar11 < *(uint *)(plVar13 + 4))) goto LAB_10034f0ab;
              lVar10 = plVar13[5];
            }
            alStack_78[uVar12] = lVar10;
            uVar11 = (int)uVar12 + 1;
            uVar12 = (ulong)uVar11;
          } while (uVar11 < uVar4);
        }
        uVar9 = 0;
        if (uVar5 + uVar4 != 0) {
          sVar3 = *param_2;
          uVar12 = 0;
          do {
            lVar10 = 0;
            if (uVar12 < uVar4) {
              lVar10 = alStack_78[uVar12];
            }
            if (sVar3 == 0x61) {
              uVar17 = 0;
              if (lVar10 != 0) {
                uVar17 = *(undefined4 *)(param_2 + uVar12 * 4 + 0xc);
              }
              lVar14 = (uVar15 + uVar12 & 0xffffffff) * 0x10;
              lVar7 = *(long *)(param_1 + 0x2608 + lVar14);
              if (lVar7 != lVar10) {
                if (lVar7 != 0) {
                  *(int *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) + -1;
                }
                *(long *)(param_1 + 0x2608 + lVar14) = lVar10;
                if (lVar10 != 0) {
                  *(int *)(lVar10 + 0x20) = *(int *)(lVar10 + 0x20) + 1;
                }
              }
              *(undefined4 *)(param_1 + 0x2610 + lVar14) = uVar17;
            }
            else if (sVar3 == 0x59) {
              uVar17 = 0;
              if (lVar10 != 0) {
                uVar17 = *(undefined4 *)(param_2 + uVar12 * 4 + 0xc);
              }
              lVar14 = (uVar15 + uVar12 & 0xffffffff) * 0x10;
              lVar7 = *(long *)(param_1 + 0x2688 + lVar14);
              if (lVar7 != lVar10) {
                if (lVar7 != 0) {
                  *(int *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) + -1;
                }
                *(long *)(param_1 + 0x2688 + lVar14) = lVar10;
                if (lVar10 != 0) {
                  *(int *)(lVar10 + 0x20) = *(int *)(lVar10 + 0x20) + 1;
                }
              }
              *(undefined4 *)(param_1 + 0x2690 + lVar14) = uVar17;
            }
            uVar12 = uVar12 + 1;
            uVar9 = 0;
          } while (uVar12 < uVar5 + uVar4);
        }
      }
    }
  }
LAB_10034f0ab:
  if (lVar6 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}

