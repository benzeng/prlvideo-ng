
void FUN_10033df20(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    plVar5 = *(long **)(param_1 + 0x18);
    plVar8 = (long *)(param_1 + 0x18);
    do {
      while (plVar7 = plVar5, *(uint *)(param_1 + 8) <= *(uint *)(plVar7 + 4)) {
        plVar5 = (long *)*plVar7;
        plVar8 = plVar7;
        if ((long *)*plVar7 == (long *)0x0) goto LAB_10033df70;
      }
      plVar1 = plVar7 + 1;
      plVar7 = plVar8;
      plVar5 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
LAB_10033df70:
    if ((plVar7 != (long *)(param_1 + 0x18)) && (*(uint *)(plVar7 + 4) <= *(uint *)(param_1 + 8))) {
      lVar2 = plVar7[5];
      puVar6 = *(undefined8 **)(lVar2 + 0x10);
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = operator_new(0x10);
        puVar6[1] = 0;
        *puVar6 = 0;
        puVar3 = *(undefined8 **)(lVar2 + 0x10);
        if ((puVar3 != puVar6) && (puVar3 != (undefined8 *)0x0)) {
          operator_delete(puVar3);
        }
        *(undefined8 **)(lVar2 + 0x10) = puVar6;
      }
      uVar4 = *param_2;
      puVar6[1] = param_2[1];
      *puVar6 = uVar4;
    }
  }
  return;
}

