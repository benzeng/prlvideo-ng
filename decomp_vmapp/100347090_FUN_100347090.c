
undefined8 FUN_100347090(long param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  long local_58 [5];
  
  lVar4 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_58[4] = lVar4;
  uVar13 = 9;
  if (((0xf < (ulong)*(uint *)(param_2 + 4)) &&
      (uVar17 = *(uint *)(param_2 + 8), (ulong)uVar17 <= (ulong)*(uint *)(param_2 + 4) - 0x10 >> 3))
     && (uVar13 = 4, uVar17 < 5)) {
    uVar16 = *(uint *)(param_2 + 0xc);
    uVar13 = 4;
    if (uVar16 <= 4 - uVar17) {
      local_58[2] = 0;
      local_58[3] = 0;
      local_58[0] = 0;
      local_58[1] = 0;
      uVar11 = 0;
      if (uVar17 == 0) {
        uVar18 = 0;
      }
      else {
        uVar11 = 0;
        do {
          uVar2 = *(uint *)(param_2 + 0x10 + (ulong)uVar11 * 8);
          if (uVar2 != 0) {
            puVar15 = *(uint **)(*(long *)(param_1 + 0x2780) + 0x8068 +
                                (ulong)((uVar2 >> 0xc ^ uVar2) & 0xfff ^ uVar2 >> 0x18) * 8);
            uVar13 = 7;
            while( true ) {
              if (puVar15 == (uint *)0x0) goto LAB_1003472d1;
              if (*puVar15 == uVar2) break;
              puVar15 = *(uint **)(puVar15 + 4);
            }
            if (*(long *)(puVar15 + 2) == 0) goto LAB_1003472d1;
            local_58[uVar11] = *(long *)(*(long *)(puVar15 + 2) + 8);
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar17);
        uVar11 = 0;
        uVar18 = 0;
        if (uVar17 != 0) {
          uVar18 = 0;
          do {
            lVar5 = local_58[uVar18];
            uVar17 = *(uint *)(param_2 + 0x14 + uVar18 * 8);
            FUN_100344670(param_1,uVar18 & 0xffffffff,lVar5);
            if (lVar5 != 0) {
              lVar14 = *(long *)(lVar5 + 0x60);
              if (uVar17 == 0xffffffff) {
                if (*(long *)(lVar14 + 0x20) != 0) {
                  iVar3 = *(int *)(lVar14 + 0x18);
                  iVar8 = FUN_10035cc30();
                  uVar12 = (ulong)*(int *)(*(long *)(lVar14 + 0x20) + 0x24);
                  iVar9 = 0;
                  if (uVar12 < 5) {
                    iVar9 = *(int *)(&DAT_100b3c010 + uVar12 * 4);
                  }
                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + iVar8 * iVar3 * iVar9;
                  lVar14 = *(long *)(lVar5 + 0x60);
                }
              }
              else {
                *(uint *)(lVar14 + 0x1c) = uVar17 & 0xfffffffc;
              }
              lVar5 = *(long *)(lVar14 + 0x20);
              if (lVar5 != 0) {
                piVar1 = (int *)(lVar5 + 0x20);
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  plVar10 = *(long **)(lVar5 + 0x18);
                  pvVar6 = (void *)*plVar10;
                  if (pvVar6 != (void *)0x0) {
                    FUN_10035cba0();
                    operator_delete(pvVar6);
                    plVar10 = *(long **)(lVar5 + 0x18);
                  }
                  lVar7 = *(long *)(lVar5 + 0x10);
                  *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(lVar5 + 8);
                  *(long *)(*(long *)(lVar5 + 8) + 0x10) = lVar7;
                  *(long *)(lVar5 + 8) = lVar5;
                  *(long *)(lVar5 + 0x10) = lVar5;
                  *plVar10 = lVar5;
                }
                *(undefined8 *)(lVar14 + 0x20) = 0;
              }
            }
            uVar11 = *(uint *)(param_2 + 8);
            uVar18 = uVar18 + 1;
          } while ((uint)uVar18 < uVar11);
          uVar16 = *(uint *)(param_2 + 0xc);
        }
      }
      uVar13 = 0;
      if ((uint)uVar18 < uVar16 + uVar11) {
        do {
          uVar13 = 0;
          FUN_100344670(param_1,uVar18 & 0xffffffff,0,0);
          uVar17 = (int)uVar18 + 1;
          uVar18 = (ulong)uVar17;
        } while (uVar17 < (uint)(*(int *)(param_2 + 0xc) + *(int *)(param_2 + 8)));
      }
    }
  }
LAB_1003472d1:
  if (lVar4 != local_58[4]) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar13;
}

