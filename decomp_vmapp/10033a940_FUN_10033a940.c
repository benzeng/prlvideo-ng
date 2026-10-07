
void FUN_10033a940(long param_1,uint param_2)

{
  long *plVar1;
  void *pvVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint local_1c;
  
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    plVar3 = *(long **)(param_1 + 0x18);
    plVar4 = (long *)(param_1 + 0x18);
    do {
      while (plVar5 = plVar3, param_2 <= *(uint *)(plVar5 + 4)) {
        plVar3 = (long *)*plVar5;
        plVar4 = plVar5;
        if ((long *)*plVar5 == (long *)0x0) goto LAB_10033a990;
      }
      plVar1 = plVar5 + 1;
      plVar3 = (long *)*plVar1;
      plVar5 = plVar4;
    } while ((long *)*plVar1 != (long *)0x0);
LAB_10033a990:
    if ((plVar5 != (long *)(param_1 + 0x18)) && (*(uint *)(plVar5 + 4) <= param_2)) {
      pvVar2 = (void *)plVar5[5];
      local_1c = param_2;
      if (pvVar2 != (void *)0x0) {
        FUN_100340040(pvVar2);
        operator_delete(pvVar2);
      }
      FUN_100340540(param_1 + 0x10,&local_1c);
    }
  }
  return;
}

