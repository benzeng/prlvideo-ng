
undefined8 FUN_10034c680(long param_1,long param_2)

{
  uint *puVar1;
  long *plVar2;
  int *piVar3;
  uint uVar4;
  long lVar5;
  void *pvVar6;
  long *plVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  uint *puVar14;
  long *plVar15;
  
  uVar10 = 9;
  if (0x23 < *(uint *)(param_2 + 4)) {
    puVar1 = (uint *)(param_2 + 8);
    if (*(long **)(param_1 + 0x27f0) != (long *)0x0) {
      plVar7 = *(long **)(param_1 + 0x27f0);
      plVar15 = (long *)(param_1 + 0x27f0);
      do {
        while (plVar13 = plVar7, *(uint *)(plVar13 + 4) < *puVar1) {
          plVar2 = plVar13 + 1;
          plVar13 = plVar15;
          plVar7 = (long *)*plVar2;
          if ((long *)*plVar2 == (long *)0x0) goto LAB_10034c6f0;
        }
        plVar7 = (long *)*plVar13;
        plVar15 = plVar13;
      } while ((long *)*plVar13 != (long *)0x0);
LAB_10034c6f0:
      if ((plVar13 != (long *)(param_1 + 0x27f0)) && (*(uint *)(plVar13 + 4) <= *puVar1)) {
        return 7;
      }
    }
    uVar4 = *(uint *)(param_2 + 0xc);
    puVar14 = *(uint **)(*(long *)(param_1 + 0x2780) + 0x8068 +
                        (ulong)((uVar4 >> 0xc ^ uVar4) & 0xfff ^ uVar4 >> 0x18) * 8);
    uVar10 = 7;
    if (puVar14 != (uint *)0x0) {
      do {
        if (*puVar14 == uVar4) {
          lVar5 = *(long *)(puVar14 + 2);
          if (lVar5 == 0) {
            return 7;
          }
          puVar11 = operator_new(0x28);
          *puVar11 = 0;
          *(undefined8 *)(puVar11 + 2) = 0;
          puVar11[4] = 0;
          puVar11[5] = 0x8e;
          puVar11[6] = 0;
          *(undefined8 *)(puVar11 + 8) = 0;
          iVar8 = FUN_100342150(puVar11,puVar1,*(undefined8 *)(lVar5 + 8));
          if (iVar8 != 0) {
            if (*(long **)(puVar11 + 8) != (long *)0x0) {
              (**(code **)(**(long **)(puVar11 + 8) + 8))();
            }
            pvVar6 = *(void **)(puVar11 + 2);
            if (pvVar6 != (void *)0x0) {
              piVar3 = (int *)((long)pvVar6 + 0x80);
              *piVar3 = *piVar3 + -1;
              if (*piVar3 == 0) {
                FUN_10032d8f0(pvVar6);
                operator_delete(pvVar6);
              }
            }
            operator_delete(puVar11);
            return 4;
          }
          puVar12 = (undefined8 *)FUN_100350430(param_1 + 0x27e8,puVar1);
          *puVar12 = puVar11;
          uVar9 = FUN_10034f3a0(param_1,lVar5,puVar11[5]);
          puVar11[4] = uVar9;
          return 0;
        }
        puVar14 = *(uint **)(puVar14 + 4);
      } while (puVar14 != (uint *)0x0);
    }
  }
  return uVar10;
}

