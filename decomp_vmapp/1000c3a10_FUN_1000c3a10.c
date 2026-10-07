
undefined8 * FUN_1000c3a10(undefined8 *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  param_3 = (long *)*param_3;
  plVar1 = (long *)*param_2;
  puVar3 = operator_new(0x20);
  *(undefined4 *)(puVar3 + 2) = 1;
  *(undefined4 *)((long)puVar3 + 0x14) = *(undefined4 *)((long)plVar1 + 0x14);
  *(undefined1 *)(puVar3 + 3) = 0xff;
  plVar7 = (long *)*plVar1;
  plVar5 = plVar1;
  puVar6 = puVar3;
  if (plVar7 != param_3) {
    do {
      pvVar4 = operator_new(0x18);
      *(long *)((long)pvVar4 + 0x10) = plVar7[2];
      *puVar6 = pvVar4;
      *(undefined8 **)((long)pvVar4 + 8) = puVar6;
      puVar6 = (undefined8 *)*puVar6;
      plVar7 = (long *)*plVar7;
    } while (plVar7 != param_3);
    plVar5 = (long *)*param_2;
  }
  *param_1 = puVar6;
  plVar7 = param_3;
  if (param_3 != plVar5) {
    do {
      pvVar4 = operator_new(0x18);
      *(long *)((long)pvVar4 + 0x10) = plVar7[2];
      *puVar6 = pvVar4;
      *(undefined8 **)((long)pvVar4 + 8) = puVar6;
      plVar7 = (long *)*plVar7;
      puVar6 = (undefined8 *)*puVar6;
    } while (plVar7 != (long *)*param_2);
  }
  *puVar6 = puVar3;
  puVar3[1] = puVar6;
  plVar7 = (long *)*param_2;
  if ((int)plVar7[2] != -1) {
    if ((int)plVar7[2] != 0) {
      LOCK();
      plVar7 = plVar7 + 2;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 != 0) goto LAB_1000c3b45;
      plVar7 = (long *)*param_2;
    }
    plVar5 = (long *)*plVar7;
    if (plVar5 != plVar7) {
      do {
        plVar2 = (long *)*plVar5;
        if (plVar5 != (long *)0x0) {
          operator_delete(plVar5);
        }
        plVar5 = plVar2;
      } while (plVar2 != plVar7);
      if (plVar7 == (long *)0x0) goto LAB_1000c3b45;
    }
    operator_delete(plVar7);
  }
LAB_1000c3b45:
  *param_2 = (long)puVar3;
  if (param_3 != plVar1) {
    *param_1 = *(undefined8 *)*param_1;
  }
  return param_1;
}

