
undefined8 FUN_10034c410(long param_1,short *param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  uint *puVar11;
  uint *puVar12;
  
  puVar12 = (uint *)0x0;
  if (*param_2 == 0x62) {
    puVar11 = (uint *)(param_2 + 4);
    puVar12 = puVar11;
  }
  else {
    puVar11 = (uint *)0x0;
    if (*param_2 == 0x34) {
      puVar12 = (uint *)(param_2 + 4);
      puVar11 = (uint *)0x0;
    }
  }
  uVar6 = 9;
  if ((uint)(puVar11 != (uint *)0x0) * 4 + 0x34 <= *(uint *)(param_2 + 2)) {
    if (*(long **)(param_1 + 0x27c0) != (long *)0x0) {
      plVar5 = *(long **)(param_1 + 0x27c0);
      plVar10 = (long *)(param_1 + 0x27c0);
      do {
        while (plVar9 = plVar5, *(uint *)(plVar9 + 4) < *puVar12) {
          plVar1 = plVar9 + 1;
          plVar9 = plVar10;
          plVar5 = (long *)*plVar1;
          if ((long *)*plVar1 == (long *)0x0) goto LAB_10034c4b0;
        }
        plVar5 = (long *)*plVar9;
        plVar10 = plVar9;
      } while ((long *)*plVar9 != (long *)0x0);
LAB_10034c4b0:
      if ((plVar9 != (long *)(param_1 + 0x27c0)) && (*(uint *)(plVar9 + 4) <= *puVar12)) {
        return 7;
      }
    }
    puVar7 = operator_new(0x30);
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
    if (puVar11 == (uint *)0x0) {
      uVar6 = *(undefined8 *)(puVar12 + 2);
      *puVar7 = *(undefined8 *)puVar12;
      puVar7[1] = uVar6;
      uVar2 = puVar12[5];
      uVar3 = puVar12[6];
      uVar4 = puVar12[7];
      *(uint *)(puVar7 + 2) = puVar12[4];
      *(uint *)((long)puVar7 + 0x14) = uVar2;
      *(uint *)(puVar7 + 3) = uVar3;
      *(uint *)((long)puVar7 + 0x1c) = uVar4;
      *(uint *)(puVar7 + 4) = puVar12[8];
      *(uint *)((long)puVar7 + 0x24) = puVar12[9];
      *(uint *)(puVar7 + 5) = puVar12[10];
    }
    else {
      uVar6 = *(undefined8 *)(puVar11 + 2);
      *puVar7 = *(undefined8 *)puVar11;
      puVar7[1] = uVar6;
      uVar6 = *(undefined8 *)(puVar11 + 6);
      puVar7[2] = *(undefined8 *)(puVar11 + 4);
      puVar7[3] = uVar6;
      uVar2 = puVar11[9];
      uVar3 = puVar11[10];
      uVar4 = puVar11[0xb];
      *(uint *)(puVar7 + 4) = puVar11[8];
      *(uint *)((long)puVar7 + 0x24) = uVar2;
      *(uint *)(puVar7 + 5) = uVar3;
      *(uint *)((long)puVar7 + 0x2c) = uVar4;
    }
    puVar8 = (undefined8 *)FUN_100350330(param_1 + 0x27b8,puVar12);
    *puVar8 = puVar7;
    uVar6 = 0;
  }
  return uVar6;
}

