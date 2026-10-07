
undefined8 FUN_1005b6080(long param_1,QString *param_2,long param_3)

{
  char cVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint *puVar4;
  uint *puVar5;
  long *plVar6;
  
  if (*(int *)(param_2->field0_0x0 + 4) == 0) {
    return 0;
  }
  puVar4 = *(uint **)(param_1 + 8);
  plVar6 = (long *)(param_1 + 8);
  if (1 < *puVar4) {
    FUN_1005b6470(plVar6);
    puVar4 = (uint *)*plVar6;
  }
  puVar2 = *(uint **)(puVar4 + 4);
  puVar5 = (uint *)0x0;
  if (*(uint **)(puVar4 + 4) != (uint *)0x0) {
    do {
      while (puVar4 = puVar2, cVar1 = operator<((QString *)(puVar4 + 6),param_2), cVar1 == '\0') {
        puVar2 = *(uint **)(puVar4 + 2);
        puVar5 = puVar4;
        if (*(uint **)(puVar4 + 2) == (uint *)0x0) goto LAB_1005b610a;
      }
      puVar2 = *(uint **)(puVar4 + 4);
    } while (*(uint **)(puVar4 + 4) != (uint *)0x0);
    puVar4 = puVar5;
    if (puVar5 != (uint *)0x0) {
LAB_1005b610a:
      cVar1 = operator<(param_2,(QString *)(puVar4 + 6));
      if (cVar1 == '\0') goto LAB_1005b6121;
    }
  }
  puVar4 = (uint *)(*plVar6 + 8);
LAB_1005b6121:
  puVar2 = (uint *)*plVar6;
  if (1 < *puVar2) {
    FUN_1005b6470(plVar6);
    puVar2 = (uint *)*plVar6;
  }
  if (puVar4 == puVar2 + 2) {
    puVar3 = (undefined8 *)FUN_1005b6260(plVar6,param_2);
    *puVar3 = 0;
    puVar3[1] = param_3;
  }
  else {
    *(long *)(puVar4 + 10) = *(long *)(puVar4 + 10) + param_3;
  }
  return 1;
}

