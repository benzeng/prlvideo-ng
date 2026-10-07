
void FUN_10033e940(long param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  undefined4 *puVar5;
  long *plVar6;
  long *plVar7;
  
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    plVar4 = *(long **)(param_1 + 0x18);
    plVar7 = (long *)(param_1 + 0x18);
    do {
      while (plVar6 = plVar4, *(uint *)(param_1 + 8) <= *(uint *)(plVar6 + 4)) {
        plVar4 = (long *)*plVar6;
        plVar7 = plVar6;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_10033e990;
      }
      plVar1 = plVar6 + 1;
      plVar6 = plVar7;
      plVar4 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
LAB_10033e990:
    if ((plVar6 != (long *)(param_1 + 0x18)) && (*(uint *)(plVar6 + 4) <= *(uint *)(param_1 + 8))) {
      lVar2 = plVar6[5];
      puVar5 = *(undefined4 **)(lVar2 + 200);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = operator_new(4);
        *puVar5 = 0;
        puVar3 = *(undefined4 **)(lVar2 + 200);
        if ((puVar3 != puVar5) && (puVar3 != (undefined4 *)0x0)) {
          operator_delete(puVar3);
        }
        *(undefined4 **)(lVar2 + 200) = puVar5;
      }
      *puVar5 = param_2;
    }
  }
  return;
}

