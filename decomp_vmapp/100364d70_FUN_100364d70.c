
uint FUN_100364d70(long param_1,long param_2,ulong param_3)

{
  undefined4 uVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar7 = 0;
  if ((int)param_3 != 0) {
    uVar7 = 0;
    iVar9 = 0;
    do {
      if ((param_3 & 1) != 0) {
        lVar4 = FUN_100344150(param_2,iVar9);
        if (lVar4 == 0) {
          param_3 = param_3 & 0xffffffff;
        }
        else {
          lVar2 = *(long *)(lVar4 + 8);
          lVar14 = 0;
          if ((ulong)*(uint *)(lVar4 + 0x10) <
              (ulong)(*(long *)(lVar2 + 0x48) - *(long *)(lVar2 + 0x40) >> 3)) {
            lVar14 = *(long *)(*(long *)(lVar2 + 0x40) + (ulong)*(uint *)(lVar4 + 0x10) * 8);
          }
          lVar5 = (**(code **)(**(long **)(lVar4 + 0x20) + 0x10))();
          if (lVar5 == 0) {
            lVar4 = (**(code **)(**(long **)(lVar4 + 0x20) + 0x28))();
            if (lVar4 == 0) {
              param_3 = param_3 & 0xffffffff;
              goto LAB_100364fc0;
            }
            if ((**(byte **)(lVar14 + 0x88) & 1) == 0) {
              local_48 = 0;
              uStack_40 = 0;
              plVar11 = *(long **)(param_1 + 0x20);
              lVar4 = *plVar11;
              puVar15 = &local_48;
              uVar12 = 1;
              uVar13 = 0;
              goto LAB_100364eca;
            }
          }
          else {
            uVar13 = *(uint *)(lVar5 + 8);
            if (*(int *)(lVar2 + 0x24) == 5) {
              if ((**(uint **)(lVar14 + 0x88) >> (uVar13 & 0x1f) & 1) == 0) {
                bVar3 = (byte)uVar13 & 0x1f;
                uVar12 = *(uint *)(lVar2 + 0x14) >> bVar3;
                if (*(uint *)(lVar2 + 0x14) >> bVar3 == 0) {
                  uVar12 = 1;
                }
                plVar11 = *(long **)(param_1 + 0x20);
                lVar4 = *plVar11;
                puVar15 = (undefined8 *)&DAT_100b3c9a0;
LAB_100364eca:
                (**(code **)(lVar4 + 0x18))(plVar11,lVar2,0,0,uVar12,uVar13,puVar15);
              }
            }
            else {
              uVar12 = *(uint *)(lVar5 + 0xc);
              uVar10 = (ulong)uVar12;
              iVar8 = *(int *)(lVar5 + 0x10);
              if (uVar12 < iVar8 + uVar12) {
                do {
                  if ((*(uint *)(*(long *)(lVar14 + 0x88) + uVar10 * 4) & 1 << ((byte)uVar13 & 0x1f)
                      ) == 0) {
                    (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
                              (*(long **)(param_1 + 0x20),lVar2,0,uVar10 & 0xffffffff,1,uVar13,
                               &DAT_100b3c9a0);
                  }
                  uVar10 = uVar10 + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
            }
          }
          uVar7 = uVar7 | 1 << ((byte)iVar9 & 0x1f);
          if (iVar9 == 0) {
            lVar4 = *(long *)(param_2 + 0x18);
            param_3 = param_3 & 0xffffffff;
            if ((lVar4 != 0) && (*(int *)(lVar4 + 0xc) != 0)) {
              puVar6 = (uint *)(lVar4 + 0x24);
              uVar10 = 0;
              do {
                if (((((puVar6[-4] & 0xfffffffc) == 0x10) || ((*puVar6 & 0xfffffffc) == 0x10)) ||
                    ((puVar6[-1] & 0xfffffffc) == 0x10)) || ((puVar6[-3] & 0xfffffffc) == 0x10))
                goto LAB_100364fcc;
                uVar10 = uVar10 + 1;
                puVar6 = puVar6 + 10;
              } while (uVar10 < 8);
            }
          }
          else {
            param_3 = param_3 & 0xffffffff;
          }
        }
      }
LAB_100364fc0:
      param_3 = param_3 >> 1 & 0x7fffffff;
      iVar9 = iVar9 + 1;
    } while ((int)param_3 != 0);
  }
LAB_100364fcc:
  lVar4 = *(long *)(param_2 + 0x50);
  if ((lVar4 != 0) && (lVar2 = *(long *)(lVar4 + 0x20), lVar2 != 0)) {
    lVar14 = *(long *)(lVar4 + 8);
    uVar1 = *(undefined4 *)(lVar2 + 8);
    lVar5 = 0;
    if ((ulong)*(uint *)(lVar4 + 0x10) <
        (ulong)(*(long *)(lVar14 + 0x48) - *(long *)(lVar14 + 0x40) >> 3)) {
      lVar5 = *(long *)(*(long *)(lVar14 + 0x40) + (ulong)*(uint *)(lVar4 + 0x10) * 8);
    }
    uVar13 = *(uint *)(lVar2 + 0xc);
    uVar10 = (ulong)uVar13;
    iVar9 = *(int *)(lVar2 + 0x10);
    if (uVar13 < iVar9 + uVar13) {
      do {
        if ((*(uint *)(*(long *)(lVar5 + 0x88) + uVar10 * 4) & 1 << ((byte)uVar1 & 0x1f)) == 0) {
          (**(code **)(**(long **)(param_1 + 0x20) + 0x20))
                    (0,*(long **)(param_1 + 0x20),lVar14,0,uVar10 & 0xffffffff,1,uVar1,1,
                     (*(byte *)(lVar5 + 0xac) & 2) >> 1,0);
        }
        uVar10 = uVar10 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

