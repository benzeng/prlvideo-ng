
void FUN_10033eaa0(long param_1,uint param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  uint *puVar3;
  long *plVar4;
  uint *puVar5;
  long *plVar6;
  long *plVar7;
  
  if ((param_2 < 0x10) && (*(long **)(param_1 + 0x18) != (long *)0x0)) {
    plVar4 = *(long **)(param_1 + 0x18);
    plVar7 = (long *)(param_1 + 0x18);
    do {
      while (plVar6 = plVar4, *(uint *)(param_1 + 8) <= *(uint *)(plVar6 + 4)) {
        plVar4 = (long *)*plVar6;
        plVar7 = plVar6;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_10033eb00;
      }
      plVar1 = plVar6 + 1;
      plVar6 = plVar7;
      plVar4 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
LAB_10033eb00:
    if ((plVar6 != (long *)(param_1 + 0x18)) && (*(uint *)(plVar6 + 4) <= *(uint *)(param_1 + 8))) {
      lVar2 = plVar6[5];
      puVar5 = *(uint **)(lVar2 + 0xe0);
      if (puVar5 == (uint *)0x0) {
        puVar5 = operator_new(0x44);
        *puVar5 = 0;
        puVar3 = *(uint **)(lVar2 + 0xe0);
        if ((puVar3 != puVar5) && (puVar3 != (uint *)0x0)) {
          operator_delete(puVar3);
        }
        *(uint **)(lVar2 + 0xe0) = puVar5;
      }
      puVar5[(ulong)param_2 + 1] = param_3;
      *puVar5 = *puVar5 | 1 << ((byte)param_2 & 0x1f);
    }
  }
  return;
}

