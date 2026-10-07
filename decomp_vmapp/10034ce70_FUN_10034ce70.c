
undefined8 FUN_10034ce70(long param_1,short *param_2)

{
  long *plVar1;
  int *piVar2;
  uint uVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  uint *puVar11;
  long *plVar12;
  uint *puVar13;
  long *plVar14;
  undefined8 uVar15;
  uint *puVar16;
  
  puVar16 = (uint *)0x0;
  if (*param_2 == 0x46) {
    puVar13 = (uint *)(param_2 + 4);
    puVar16 = puVar13;
  }
  else {
    puVar13 = (uint *)0x0;
    if (*param_2 == 0x38) {
      puVar16 = (uint *)(param_2 + 4);
      puVar13 = (uint *)0x0;
    }
  }
  uVar15 = 9;
  if ((uint)(puVar13 != (uint *)0x0) * 4 + 0x24 <= *(uint *)(param_2 + 2)) {
    if (*(long **)(param_1 + 0xa830) != (long *)0x0) {
      plVar6 = *(long **)(param_1 + 0xa830);
      plVar14 = (long *)(param_1 + 0xa830);
      do {
        while (plVar12 = plVar6, *(uint *)(plVar12 + 4) < *puVar16) {
          plVar1 = plVar12 + 1;
          plVar12 = plVar14;
          plVar6 = (long *)*plVar1;
          if ((long *)*plVar1 == (long *)0x0) goto LAB_10034cf10;
        }
        plVar6 = (long *)*plVar12;
        plVar14 = plVar12;
      } while ((long *)*plVar12 != (long *)0x0);
LAB_10034cf10:
      if ((plVar12 != (long *)(param_1 + 0xa830)) && (*(uint *)(plVar12 + 4) <= *puVar16)) {
        return 7;
      }
    }
    uVar3 = puVar16[1];
    puVar11 = *(uint **)(*(long *)(param_1 + 0x2780) + 0x8068 +
                        (ulong)((uVar3 >> 0xc ^ uVar3) & 0xfff ^ uVar3 >> 0x18) * 8);
    uVar15 = 7;
    if (puVar11 != (uint *)0x0) {
      do {
        if (*puVar11 == uVar3) {
          lVar4 = *(long *)(puVar11 + 2);
          if (lVar4 == 0) {
            return 7;
          }
          puVar9 = operator_new(0x28);
          *puVar9 = 0;
          *(undefined8 *)(puVar9 + 2) = 0;
          *(undefined8 *)(puVar9 + 4) = 0x8e00000000;
          *(undefined8 *)(puVar9 + 8) = 0;
          *(undefined8 *)(puVar9 + 6) = 0;
          uVar15 = *(undefined8 *)(lVar4 + 8);
          puVar11 = puVar16;
          if (puVar13 != (uint *)0x0) {
            puVar9[7] = puVar13[7];
            puVar11 = puVar13;
          }
          iVar7 = FUN_100342430(puVar9,puVar11,uVar15);
          if (iVar7 != 0) {
            if (*(long **)(puVar9 + 8) != (long *)0x0) {
              (**(code **)(**(long **)(puVar9 + 8) + 8))();
            }
            pvVar5 = *(void **)(puVar9 + 2);
            if (pvVar5 != (void *)0x0) {
              piVar2 = (int *)((long)pvVar5 + 0x80);
              *piVar2 = *piVar2 + -1;
              if (*piVar2 == 0) {
                FUN_10032d8f0(pvVar5);
                operator_delete(pvVar5);
              }
            }
            operator_delete(puVar9);
            return 4;
          }
          puVar10 = (undefined8 *)FUN_100350530(param_1 + 0xa828,puVar16);
          *puVar10 = puVar9;
          uVar8 = FUN_10034f3a0(param_1,lVar4,puVar9[5]);
          puVar9[4] = uVar8;
          return 0;
        }
        puVar11 = *(uint **)(puVar11 + 4);
      } while (puVar11 != (uint *)0x0);
    }
  }
  return uVar15;
}

