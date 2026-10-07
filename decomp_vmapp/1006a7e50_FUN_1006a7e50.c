
int FUN_1006a7e50(long param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  void *pvVar5;
  long *plVar6;
  undefined8 *puVar7;
  char *pcVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar4 = FUN_1006a7d80();
  if (-1 < iVar4) {
    if (*param_2 == *(long *)(param_1 + 0x18)) {
      if ((ulong)*(uint *)((long)param_2 + 0x1c) * 8 + 0x20 <= (param_3 & 0xffffffff)) {
        *(int *)(param_1 + 0x24) = (int)param_2[3];
        FUN_1007d6c60(&local_48,param_2 + 1);
        *(undefined8 *)(param_1 + 0x30) = local_40;
        *(undefined8 *)(param_1 + 0x28) = local_48;
        uVar9 = (ulong)*(uint *)((long)param_2 + 0x1c);
        lVar12 = *(long *)(param_1 + 0x40);
        uVar11 = lVar12 - *(long *)(param_1 + 0x38) >> 3;
        if (uVar11 < uVar9) {
          FUN_1006a8970((long *)(param_1 + 0x38));
          uVar9 = (ulong)*(uint *)((long)param_2 + 0x1c);
        }
        else if ((uVar9 < uVar11) &&
                (lVar2 = *(long *)(param_1 + 0x38) + uVar9 * 8, lVar12 != lVar2)) {
          *(ulong *)(param_1 + 0x40) = (~((lVar12 + -8) - lVar2) & 0xfffffffffffffff8U) + lVar12;
        }
        iVar4 = 0;
        if ((int)uVar9 != 0) {
          lVar12 = 0;
          do {
            uVar11 = param_2[lVar12 + 4];
            if (1 < uVar11) {
              uVar1 = *(uint *)(param_1 + 0x20);
              pvVar5 = _valloc((ulong)uVar1);
              *(void **)(*(long *)(param_1 + 0x38) + lVar12 * 8) = pvVar5;
              lVar2 = *(long *)(*(long *)(param_1 + 0x38) + lVar12 * 8);
              iVar4 = -0x7ffffffe;
              if (lVar2 != 0) {
                plVar6 = *(long **)(param_1 + 8);
                iVar4 = (**(code **)(*(long *)((long)plVar6 + *(long *)(*plVar6 + -0x18)) + 0x98))
                                  ((long)plVar6 + *(long *)(*plVar6 + -0x18),lVar2,(ulong)uVar1,
                                   uVar11);
                if (-1 < iVar4) {
                  lVar2 = *(long *)(param_1 + 8);
                  lVar3 = param_2[lVar12 + 4];
                  plVar6 = operator_new(0x18);
                  plVar6[2] = lVar3 << 9;
                  plVar6[1] = lVar2 + 0x180e0;
                  lVar3 = *(long *)(lVar2 + 0x180e0);
                  *plVar6 = lVar3;
                  *(long **)(lVar3 + 8) = plVar6;
                  *(long **)(lVar2 + 0x180e0) = plVar6;
                  *(long *)(lVar2 + 0x180f0) = *(long *)(lVar2 + 0x180f0) + 1;
                  uVar9 = (ulong)*(uint *)((long)param_2 + 0x1c);
                  goto LAB_1006a805e;
                }
              }
              puVar10 = *(undefined8 **)(param_1 + 0x38);
              puVar7 = *(undefined8 **)(param_1 + 0x40);
              if (puVar10 != puVar7) {
                do {
                  if ((void *)0x1 < (void *)*puVar10) {
                    _free((void *)*puVar10);
                    puVar7 = *(undefined8 **)(param_1 + 0x40);
                  }
                  puVar10 = puVar10 + 1;
                } while (puVar10 != puVar7);
                if (puVar7 != *(undefined8 **)(param_1 + 0x38)) {
                  *(ulong *)(param_1 + 0x40) =
                       (~((long)puVar7 + (-8 - (long)*(undefined8 **)(param_1 + 0x38))) &
                       0xfffffffffffffff8U) + (long)puVar7;
                }
              }
              break;
            }
            *(ulong *)(*(long *)(param_1 + 0x38) + lVar12 * 8) = uVar11;
LAB_1006a805e:
            lVar12 = lVar12 + 1;
            iVar4 = 0;
          } while ((uint)lVar12 < (uint)uVar9);
        }
        goto LAB_1006a7edc;
      }
      pcVar8 = "Error: spoiled bitmap extension data.";
    }
    else {
      pcVar8 = "Error: bitmap size is not equal to image size.";
    }
    FUN_1008e3970("","dimg",0,pcVar8);
    iVar4 = -0x7ffdefcd;
  }
LAB_1006a7edc:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

