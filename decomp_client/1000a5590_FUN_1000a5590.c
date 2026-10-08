
void FUN_1000a5590(long param_1,QString *param_2)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  uint *puVar5;
  long *plVar6;
  
  puVar3 = *(uint **)(param_1 + 0x10);
  plVar6 = (long *)(param_1 + 0x10);
  if (1 < *puVar3) {
    FUN_1000a5ea0(plVar6);
    puVar3 = (uint *)*plVar6;
  }
  puVar2 = *(uint **)(puVar3 + 4);
  puVar5 = (uint *)0x0;
  if (*(uint **)(puVar3 + 4) != (uint *)0x0) {
    do {
      while (puVar3 = puVar2, cVar1 = operator<((QString *)(puVar3 + 6),param_2), cVar1 != '\0') {
        puVar2 = *(uint **)(puVar3 + 4);
        if (*(uint **)(puVar3 + 4) == (uint *)0x0) {
          puVar3 = puVar5;
          if (puVar5 == (uint *)0x0) goto LAB_1000a5616;
          goto LAB_1000a5606;
        }
      }
      puVar2 = *(uint **)(puVar3 + 2);
      puVar5 = puVar3;
    } while (*(uint **)(puVar3 + 2) != (uint *)0x0);
LAB_1000a5606:
    cVar1 = operator<(param_2,(QString *)(puVar3 + 6));
    if (cVar1 == '\0') goto LAB_1000a561d;
  }
LAB_1000a5616:
  puVar3 = (uint *)(*plVar6 + 8);
LAB_1000a561d:
  puVar2 = (uint *)*plVar6;
  if (1 < *puVar2) {
    FUN_1000a5ea0(plVar6);
    puVar2 = (uint *)*plVar6;
  }
  if (puVar2 + 2 == puVar3) {
    return;
  }
  uVar4 = 0;
  if (*(long *)(puVar3 + 8) != 0) {
    uVar4 = *(undefined8 *)(*(long *)(puVar3 + 8) + 0x10);
  }
  FUN_1000a1330(uVar4);
  return;
}

