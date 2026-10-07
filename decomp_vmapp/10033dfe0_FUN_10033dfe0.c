
void FUN_10033dfe0(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
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
        if ((long *)*plVar6 == (long *)0x0) goto LAB_10033e030;
      }
      plVar1 = plVar6 + 1;
      plVar6 = plVar7;
      plVar4 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
LAB_10033e030:
    if ((plVar6 != (long *)(param_1 + 0x18)) && (*(uint *)(plVar6 + 4) <= *(uint *)(param_1 + 8))) {
      lVar2 = plVar6[5];
      puVar5 = *(undefined8 **)(lVar2 + 0x18);
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = operator_new(0x40);
        puVar5[7] = 0;
        puVar5[6] = 0;
        puVar5[5] = 0;
        puVar5[4] = 0;
        puVar5[3] = 0;
        puVar5[2] = 0;
        puVar5[1] = 0;
        *puVar5 = 0;
        puVar3 = *(undefined8 **)(lVar2 + 0x18);
        if ((puVar3 != puVar5) && (puVar3 != (undefined8 *)0x0)) {
          operator_delete(puVar3);
        }
        *(undefined8 **)(lVar2 + 0x18) = puVar5;
      }
      FUN_10038e0c0(puVar5,param_2);
      FUN_10038e0c0(puVar5 + 2,param_2 + 0x20);
      FUN_10038e0c0(puVar5 + 4,param_2 + 0x10);
      *(undefined4 *)(puVar5 + 6) = *(undefined4 *)(param_2 + 0x30);
      *(undefined4 *)((long)puVar5 + 0x34) = *(undefined4 *)(param_2 + 0x34);
      *(undefined4 *)(puVar5 + 7) = *(undefined4 *)(param_2 + 0x38);
      *(undefined4 *)((long)puVar5 + 0x3c) = *(undefined4 *)(param_2 + 0x40);
    }
  }
  return;
}

