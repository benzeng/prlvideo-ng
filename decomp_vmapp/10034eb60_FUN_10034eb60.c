
undefined8 FUN_10034eb60(long param_1,long param_2)

{
  uint *puVar1;
  long *plVar2;
  int *piVar3;
  uint uVar4;
  long lVar5;
  void *pvVar6;
  long *plVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  uint *puVar13;
  long *plVar14;
  
  uVar9 = 9;
  if (0x23 < *(uint *)(param_2 + 4)) {
    puVar1 = (uint *)(param_2 + 8);
    if (*(long **)(param_1 + 0x12888) != (long *)0x0) {
      plVar7 = *(long **)(param_1 + 0x12888);
      plVar14 = (long *)(param_1 + 0x12888);
      do {
        while (plVar12 = plVar7, *(uint *)(plVar12 + 4) < *puVar1) {
          plVar2 = plVar12 + 1;
          plVar12 = plVar14;
          plVar7 = (long *)*plVar2;
          if ((long *)*plVar2 == (long *)0x0) goto LAB_10034ebc0;
        }
        plVar7 = (long *)*plVar12;
        plVar14 = plVar12;
      } while ((long *)*plVar12 != (long *)0x0);
LAB_10034ebc0:
      if ((plVar12 != (long *)(param_1 + 0x12888)) && (*(uint *)(plVar12 + 4) <= *puVar1)) {
        return 7;
      }
    }
    uVar4 = *(uint *)(param_2 + 0xc);
    puVar13 = *(uint **)(*(long *)(param_1 + 0x2780) + 0x8068 +
                        (ulong)((uVar4 >> 0xc ^ uVar4) & 0xfff ^ uVar4 >> 0x18) * 8);
    uVar9 = 7;
    if (puVar13 != (uint *)0x0) {
      do {
        if (*puVar13 == uVar4) {
          lVar5 = *(long *)(puVar13 + 2);
          if (lVar5 == 0) {
            return 7;
          }
          puVar10 = operator_new(0x28);
          *puVar10 = 0;
          *(undefined8 *)(puVar10 + 2) = 0;
          puVar10[4] = 0x8e;
          *(undefined8 *)(puVar10 + 7) = 0;
          *(undefined8 *)(puVar10 + 5) = 0;
          iVar8 = FUN_100342a70(puVar10,puVar1,*(undefined8 *)(lVar5 + 8));
          if (iVar8 != 0) {
            if (*(long **)(puVar10 + 6) != (long *)0x0) {
              (**(code **)(**(long **)(puVar10 + 6) + 8))();
            }
            pvVar6 = *(void **)(puVar10 + 2);
            if (pvVar6 != (void *)0x0) {
              piVar3 = (int *)((long)pvVar6 + 0x80);
              *piVar3 = *piVar3 + -1;
              if (*piVar3 == 0) {
                FUN_10032d8f0(pvVar6);
                operator_delete(pvVar6);
              }
            }
            operator_delete(puVar10);
            return 4;
          }
          puVar11 = (undefined8 *)FUN_100350630(param_1 + 0x12880,puVar1);
          *puVar11 = puVar10;
          return 0;
        }
        puVar13 = *(uint **)(puVar13 + 4);
      } while (puVar13 != (uint *)0x0);
    }
  }
  return uVar9;
}

