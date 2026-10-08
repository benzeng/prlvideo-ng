
void FUN_1000a5920(long param_1,QString *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  long *plVar5;
  uint *puVar6;
  
  puVar3 = *(uint **)(param_1 + 0x10);
  plVar5 = (long *)(param_1 + 0x10);
  if (1 < *puVar3) {
    FUN_1000a5ea0(plVar5);
    puVar3 = (uint *)*plVar5;
  }
  puVar2 = *(uint **)(puVar3 + 4);
  puVar6 = (uint *)0x0;
  if (*(uint **)(puVar3 + 4) != (uint *)0x0) {
    do {
      while (puVar3 = puVar2, cVar1 = operator<((QString *)(puVar3 + 6),param_2), cVar1 != '\0') {
        puVar2 = *(uint **)(puVar3 + 4);
        if (*(uint **)(puVar3 + 4) == (uint *)0x0) {
          puVar3 = puVar6;
          if (puVar6 == (uint *)0x0) goto LAB_1000a59b6;
          goto LAB_1000a59a6;
        }
      }
      puVar2 = *(uint **)(puVar3 + 2);
      puVar6 = puVar3;
    } while (*(uint **)(puVar3 + 2) != (uint *)0x0);
LAB_1000a59a6:
    cVar1 = operator<(param_2,(QString *)(puVar3 + 6));
    if (cVar1 == '\0') goto LAB_1000a59be;
  }
LAB_1000a59b6:
  puVar3 = (uint *)(*plVar5 + 8);
LAB_1000a59be:
  puVar2 = (uint *)*plVar5;
  if (1 < *puVar2) {
    FUN_1000a5ea0(plVar5);
    puVar2 = (uint *)*plVar5;
  }
  if (puVar2 + 2 == puVar3) {
    return;
  }
  uVar4 = 0;
  if (*(long *)(puVar3 + 8) != 0) {
    uVar4 = *(undefined8 *)(*(long *)(puVar3 + 8) + 0x10);
  }
  FUN_1000a27e0(uVar4,param_3,param_4);
  return;
}

