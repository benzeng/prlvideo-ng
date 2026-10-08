
void FUN_100106890(long param_1,QString *param_2)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  long *plVar5;
  
  puVar3 = *(uint **)(param_1 + 0x10);
  plVar5 = (long *)(param_1 + 0x10);
  if (1 < *puVar3) {
    FUN_1001073c0(plVar5);
    puVar3 = (uint *)*plVar5;
  }
  puVar2 = *(uint **)(puVar3 + 4);
  puVar4 = (uint *)0x0;
  if (*(uint **)(puVar3 + 4) != (uint *)0x0) {
    do {
      while (puVar3 = puVar2, cVar1 = operator<((QString *)(puVar3 + 6),param_2), cVar1 != '\0') {
        puVar2 = *(uint **)(puVar3 + 4);
        if (*(uint **)(puVar3 + 4) == (uint *)0x0) {
          puVar3 = puVar4;
          if (puVar4 == (uint *)0x0) goto LAB_100106916;
          goto LAB_100106906;
        }
      }
      puVar2 = *(uint **)(puVar3 + 2);
      puVar4 = puVar3;
    } while (*(uint **)(puVar3 + 2) != (uint *)0x0);
LAB_100106906:
    cVar1 = operator<(param_2,(QString *)(puVar3 + 6));
    if (cVar1 == '\0') goto LAB_10010691d;
  }
LAB_100106916:
  puVar3 = (uint *)(*plVar5 + 8);
LAB_10010691d:
  puVar2 = (uint *)*plVar5;
  if (1 < *puVar2) {
    FUN_1001073c0(plVar5);
    puVar2 = (uint *)*plVar5;
  }
  if (puVar2 + 2 == puVar3) {
    return;
  }
  FUN_100107100(plVar5,puVar3);
  return;
}

