
undefined8 FUN_10034ed00(long param_1,long param_2)

{
  int *piVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  long *plVar5;
  undefined4 *puVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  bool bVar12;
  
  uVar11 = 9;
  if (0xb < *(uint *)(param_2 + 4)) {
    uVar11 = 0;
    if (*(long **)(param_1 + 0x12888) != (long *)0x0) {
      plVar7 = *(long **)(param_1 + 0x12888);
      plVar8 = (long *)(param_1 + 0x12888);
      do {
        while (plVar10 = plVar7, *(uint *)(param_2 + 8) <= *(uint *)(plVar10 + 4)) {
          plVar7 = (long *)*plVar10;
          plVar8 = plVar10;
          if ((long *)*plVar10 == (long *)0x0) goto LAB_10034ed70;
        }
        plVar5 = plVar10 + 1;
        plVar10 = plVar8;
        plVar7 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
LAB_10034ed70:
      if ((plVar10 != (long *)(param_1 + 0x12888)) &&
         (*(uint *)(plVar10 + 4) <= *(uint *)(param_2 + 8))) {
        pvVar2 = (void *)plVar10[5];
        iVar4 = *(int *)((long)pvVar2 + 0x20);
        if (iVar4 != 0) {
          puVar6 = (undefined4 *)(param_1 + 0x2690);
          uVar9 = 1;
          do {
            if (*(void **)(puVar6 + -0x22) == pvVar2) {
              if (pvVar2 != (void *)0x0) {
                iVar4 = iVar4 + -1;
                *(int *)((long)pvVar2 + 0x20) = iVar4;
                *(undefined8 *)(puVar6 + -0x22) = 0;
              }
              puVar6[-0x20] = 0;
            }
            if (*(void **)(puVar6 + -2) == pvVar2) {
              if (pvVar2 != (void *)0x0) {
                iVar4 = iVar4 + -1;
                *(int *)((long)pvVar2 + 0x20) = iVar4;
                *(undefined8 *)(puVar6 + -2) = 0;
              }
              *puVar6 = 0;
            }
            if (7 < uVar9) break;
            puVar6 = puVar6 + 4;
            uVar9 = uVar9 + 1;
          } while (iVar4 != 0);
        }
        if (pvVar2 != (void *)0x0) {
          if (*(long **)((long)pvVar2 + 0x18) != (long *)0x0) {
            (**(code **)(**(long **)((long)pvVar2 + 0x18) + 8))();
          }
          pvVar3 = *(void **)((long)pvVar2 + 8);
          if (pvVar3 != (void *)0x0) {
            piVar1 = (int *)((long)pvVar3 + 0x80);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_10032d8f0(pvVar3);
              operator_delete(pvVar3);
            }
          }
          operator_delete(pvVar2);
        }
        plVar7 = plVar10;
        plVar8 = (long *)plVar10[1];
        if ((long *)plVar10[1] == (long *)0x0) {
          do {
            plVar5 = (long *)plVar7[2];
            bVar12 = (long *)*plVar5 != plVar7;
            plVar7 = plVar5;
          } while (bVar12);
        }
        else {
          do {
            plVar5 = plVar8;
            plVar8 = (long *)*plVar5;
          } while ((long *)*plVar5 != (long *)0x0);
        }
        if (*(long **)(param_1 + 0x12880) == plVar10) {
          *(long **)(param_1 + 0x12880) = plVar5;
        }
        *(long *)(param_1 + 0x12890) = *(long *)(param_1 + 0x12890) + -1;
        FUN_1000e86c0(*(undefined8 *)(param_1 + 0x12888),plVar10);
        operator_delete(plVar10);
        uVar11 = 0;
      }
    }
  }
  return uVar11;
}

