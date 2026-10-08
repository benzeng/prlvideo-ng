
uint * FUN_100b90560(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar4 = (uint *)*param_1;
  if (1 < *puVar4) {
    FUN_100b90660(param_1);
    puVar4 = (uint *)*param_1;
  }
  if (*(uint **)(puVar4 + 4) == (uint *)0x0) {
    puVar4 = puVar4 + 2;
  }
  else {
    puVar1 = *(uint **)(puVar4 + 4);
    puVar3 = (uint *)0x0;
    do {
      while (puVar4 = puVar1, iVar2 = _memcmp(puVar4 + 6,param_2,0xb), iVar2 < 0) {
        puVar1 = *(uint **)(puVar4 + 4);
        if (*(uint **)(puVar4 + 4) == (uint *)0x0) {
          if (puVar3 == (uint *)0x0) goto LAB_100b905fd;
          goto LAB_100b905df;
        }
      }
      puVar1 = *(uint **)(puVar4 + 2);
      puVar3 = puVar4;
    } while (*(uint **)(puVar4 + 2) != (uint *)0x0);
LAB_100b905df:
    iVar2 = _memcmp(param_2,puVar3 + 6,0xb);
    if (-1 < iVar2) goto LAB_100b90635;
  }
LAB_100b905fd:
  puVar3 = (uint *)QMapDataBase::createNode((int)*param_1,0x28,(QMapNodeBase *)0x8,SUB81(puVar4,0));
  *(undefined1 *)((long)puVar3 + 0x22) = *(undefined1 *)((long)param_2 + 10);
  *(undefined2 *)(puVar3 + 8) = *(undefined2 *)(param_2 + 1);
  *(undefined8 *)(puVar3 + 6) = *param_2;
LAB_100b90635:
  puVar3[9] = *param_3;
  return puVar3;
}

