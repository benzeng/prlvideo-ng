
void FUN_10033dd70(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    plVar4 = *(long **)(param_1 + 0x18);
    plVar7 = (long *)(param_1 + 0x18);
    do {
      while (plVar6 = plVar4, *(uint *)(param_1 + 8) <= *(uint *)(plVar6 + 4)) {
        plVar4 = (long *)*plVar6;
        plVar7 = plVar6;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_10033ddd0;
      }
      plVar1 = plVar6 + 1;
      plVar6 = plVar7;
      plVar4 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
LAB_10033ddd0:
    if ((plVar6 != (long *)(param_1 + 0x18)) && (*(uint *)(plVar6 + 4) <= *(uint *)(param_1 + 8))) {
      puVar2 = (undefined8 *)plVar6[5];
      puVar5 = (undefined8 *)*puVar2;
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = operator_new(0x10);
        puVar5[1] = 0;
        *puVar5 = 0;
        puVar3 = (undefined8 *)*puVar2;
        if ((puVar3 != puVar5) && (puVar3 != (undefined8 *)0x0)) {
          operator_delete(puVar3);
        }
        *puVar2 = puVar5;
      }
      *(undefined4 *)puVar5 = param_2;
      *(undefined4 *)((long)puVar5 + 4) = param_3;
      *(undefined4 *)(puVar5 + 1) = param_4;
      *(undefined4 *)((long)puVar5 + 0xc) = param_5;
    }
  }
  return;
}

