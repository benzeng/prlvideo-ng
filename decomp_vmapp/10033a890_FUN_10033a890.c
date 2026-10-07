
void FUN_10033a890(long param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  uint local_1c;
  
  *(uint *)(param_1 + 8) = param_2;
  local_1c = param_2;
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x18);
    plVar5 = (long *)(param_1 + 0x18);
    do {
      while (plVar6 = plVar2, param_2 <= *(uint *)(plVar6 + 4)) {
        plVar2 = (long *)*plVar6;
        plVar5 = plVar6;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_10033a8e0;
      }
      plVar1 = plVar6 + 1;
      plVar2 = (long *)*plVar1;
      plVar6 = plVar5;
    } while ((long *)*plVar1 != (long *)0x0);
LAB_10033a8e0:
    if ((plVar6 != (long *)(param_1 + 0x18)) && (*(uint *)(plVar6 + 4) <= param_2)) {
      FUN_10033d850(plVar6[5]);
      return;
    }
  }
  pvVar3 = operator_new(0xe8);
  ___bzero(pvVar3,0xe8);
  puVar4 = (undefined8 *)FUN_10033f8c0(param_1 + 0x10,&local_1c);
  *puVar4 = pvVar3;
  return;
}

