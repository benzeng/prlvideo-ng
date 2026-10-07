
undefined8 * FUN_100350e30(long param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  uint local_1c;
  
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 8);
    plVar6 = (long *)(param_1 + 8);
    do {
      while (plVar5 = plVar2, *(uint *)(plVar5 + 4) < param_2) {
        plVar1 = plVar5 + 1;
        plVar5 = plVar6;
        plVar2 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_100350e80;
      }
      plVar2 = (long *)*plVar5;
      plVar6 = plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
LAB_100350e80:
    if ((plVar5 != (long *)(param_1 + 8)) && (*(uint *)(plVar5 + 4) <= param_2)) {
      return (undefined8 *)0x0;
    }
  }
  local_1c = param_2;
  puVar3 = operator_new(0x78);
  puVar3[0xd] = 0;
  puVar3[0xc] = 0;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[1] = 0;
  *puVar3 = 0;
  *(undefined4 *)(puVar3 + 0xe) = 2;
  *(undefined1 *)((long)puVar3 + 0x74) = 0;
  puVar4 = (undefined8 *)FUN_1003510f0(param_1,&local_1c);
  *puVar4 = puVar3;
  return puVar3;
}

