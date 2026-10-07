
undefined8 * FUN_10026b030(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)*param_2;
  puVar5 = operator_new(0x20);
  *(undefined4 *)(puVar5 + 2) = 1;
  *(undefined4 *)((long)puVar5 + 0x14) = *(undefined4 *)((long)puVar2 + 0x14);
  *(undefined1 *)(puVar5 + 3) = 0xff;
  puVar4 = puVar5;
  for (puVar9 = (undefined8 *)*puVar2; puVar9 != puVar1; puVar9 = (undefined8 *)*puVar9) {
    puVar6 = operator_new(0x18);
    puVar6[2] = puVar9[2];
    *puVar4 = puVar6;
    puVar6[1] = puVar4;
    puVar4 = puVar6;
  }
  *param_1 = puVar4;
  puVar6 = puVar4;
  puVar8 = puVar4;
  puVar9 = puVar1;
  if (puVar1 != puVar2) {
    do {
      puVar6 = operator_new(0x18);
      puVar6[2] = puVar9[2];
      *puVar8 = puVar6;
      puVar6[1] = puVar8;
      puVar9 = (undefined8 *)*puVar9;
      puVar8 = puVar6;
    } while (puVar9 != (undefined8 *)*param_2);
  }
  *puVar6 = puVar5;
  puVar5[1] = puVar6;
  plVar10 = (long *)*param_2;
  if ((int)plVar10[2] != -1) {
    if ((int)plVar10[2] != 0) {
      LOCK();
      plVar10 = plVar10 + 2;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 != 0) goto LAB_10026b179;
      plVar10 = (long *)*param_2;
    }
    plVar7 = (long *)*plVar10;
    if (plVar7 != plVar10) {
      do {
        plVar3 = (long *)*plVar7;
        if (plVar7 != (long *)0x0) {
          operator_delete(plVar7);
        }
        plVar7 = plVar3;
      } while (plVar3 != plVar10);
      if (plVar10 == (long *)0x0) goto LAB_10026b179;
    }
    operator_delete(plVar10);
  }
LAB_10026b179:
  *param_2 = (long)puVar5;
  if (puVar1 != puVar2) {
    *param_1 = *puVar4;
  }
  return param_1;
}

