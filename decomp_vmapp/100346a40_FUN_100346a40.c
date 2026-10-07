
undefined8 FUN_100346a40(long param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  int iVar13;
  long alStack_418 [128];
  long local_18;
  
  lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_18 = lVar5;
  uVar8 = 9;
  if (0xf < (ulong)*(uint *)(param_2 + 2)) {
    uVar2 = *(uint *)(param_2 + 6);
    if ((ulong)uVar2 <= (ulong)*(uint *)(param_2 + 2) - 0x10 >> 2) {
      uVar3 = *(uint *)(param_2 + 4);
      uVar8 = 4;
      if ((uVar3 < 0x81) && (uVar2 <= 0x80 - uVar3)) {
        uVar1 = *param_2;
        uVar8 = 8;
        if (uVar1 < 0x10) {
          if (uVar1 != 0xf) goto LAB_100346bbd;
          iVar13 = 0x80;
        }
        else {
          iVar13 = 0;
          if (0x10 < uVar1) {
            if (uVar1 < 0x54) {
              if (uVar1 == 0x11) {
                iVar13 = 0x100;
              }
              else {
                if (uVar1 != 0x53) goto LAB_100346bbd;
                iVar13 = 0x180;
              }
            }
            else if (uVar1 == 0x54) {
              iVar13 = 0x200;
            }
            else {
              if (uVar1 != 0x55) goto LAB_100346bbd;
              iVar13 = 0x280;
            }
          }
        }
        uVar8 = 0;
        if (uVar2 != 0) {
          uVar7 = 0;
          do {
            uVar4 = *(uint *)(param_2 + (ulong)uVar7 * 2 + 8);
            lVar11 = 0;
            if (uVar4 != 0) {
              puVar12 = *(uint **)(param_1 + 0xa850 +
                                  (ulong)((uVar4 >> 0xc ^ uVar4) & 0xfff ^ uVar4 >> 0x18) * 8);
              uVar8 = 7;
              while( true ) {
                if (puVar12 == (uint *)0x0) goto LAB_100346bbd;
                if (*puVar12 == uVar4) break;
                puVar12 = *(uint **)(puVar12 + 4);
              }
              lVar11 = *(long *)(puVar12 + 2);
              if (lVar11 == 0) goto LAB_100346bbd;
            }
            alStack_418[uVar7] = lVar11;
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar2);
          uVar8 = 0;
          if (uVar2 != 0) {
            uVar9 = 0;
            do {
              lVar11 = alStack_418[uVar9];
              uVar10 = (ulong)(iVar13 + uVar3 + (int)uVar9);
              lVar6 = *(long *)(param_1 + 0xe08 + uVar10 * 8);
              if (lVar6 != lVar11) {
                if (lVar6 != 0) {
                  *(int *)(lVar6 + 0x28) = *(int *)(lVar6 + 0x28) + -1;
                }
                *(long *)(param_1 + 0xe08 + uVar10 * 8) = lVar11;
                if (lVar11 != 0) {
                  *(int *)(lVar11 + 0x28) = *(int *)(lVar11 + 0x28) + 1;
                }
              }
              uVar9 = uVar9 + 1;
              uVar8 = 0;
            } while (uVar9 < uVar2);
          }
        }
      }
    }
  }
LAB_100346bbd:
  if (lVar5 == local_18) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

