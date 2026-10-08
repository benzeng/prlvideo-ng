
void FUN_100190c90(undefined8 *param_1,uint *param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar3 = (uint *)*param_1;
  if (1 < *puVar3) {
    FUN_1001917b0(param_1);
    puVar3 = (uint *)*param_1;
  }
  if (*(uint **)(puVar3 + 4) == (uint *)0x0) {
    puVar3 = puVar3 + 2;
  }
  else {
    puVar1 = *(uint **)(puVar3 + 4);
    puVar2 = (uint *)0x0;
    do {
      while ((puVar3 = puVar1, *param_2 <= puVar3[6] &&
             ((*param_2 < puVar3[6] || (param_2[1] <= puVar3[7]))))) {
        puVar2 = puVar3;
        puVar1 = *(uint **)(puVar3 + 2);
        if (*(uint **)(puVar3 + 2) == (uint *)0x0) goto LAB_100190d07;
      }
      puVar1 = *(uint **)(puVar3 + 4);
    } while (*(uint **)(puVar3 + 4) != (uint *)0x0);
    if (puVar2 != (uint *)0x0) {
LAB_100190d07:
      if ((puVar2[6] <= *param_2) && ((puVar2[6] < *param_2 || (puVar2[7] <= param_2[1]))))
      goto LAB_100190d44;
    }
  }
  puVar2 = (uint *)QMapDataBase::createNode((int)*param_1,0x28,(QMapNodeBase *)0x8,SUB81(puVar3,0));
  *(undefined8 *)(puVar2 + 6) = *(undefined8 *)param_2;
LAB_100190d44:
  *(undefined8 *)(puVar2 + 8) = *param_3;
  return;
}

