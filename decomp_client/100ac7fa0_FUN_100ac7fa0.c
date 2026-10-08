
uint * FUN_100ac7fa0(undefined8 *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = (uint *)*param_1;
  if (1 < *puVar3) {
    FUN_100ac86d0(param_1);
    puVar3 = (uint *)*param_1;
  }
  if (*(uint **)(puVar3 + 4) != (uint *)0x0) {
    puVar1 = *(uint **)(puVar3 + 4);
    puVar5 = (uint *)0x0;
    do {
      while (puVar2 = puVar1, uVar4 = puVar2[6], *param_2 <= uVar4) {
        puVar1 = *(uint **)(puVar2 + 2);
        puVar5 = puVar2;
        if (*(uint **)(puVar2 + 2) == (uint *)0x0) goto LAB_100ac8019;
      }
      puVar1 = *(uint **)(puVar2 + 4);
    } while (*(uint **)(puVar2 + 4) != (uint *)0x0);
    if (puVar5 != (uint *)0x0) {
      uVar4 = puVar5[6];
      puVar2 = puVar5;
LAB_100ac8019:
      if (uVar4 <= *param_2) goto LAB_100ac80a8;
    }
  }
  if (1 < *puVar3) {
    FUN_100ac86d0(param_1);
    puVar3 = (uint *)*param_1;
  }
  if (*(uint **)(puVar3 + 4) == (uint *)0x0) {
    puVar3 = puVar3 + 2;
LAB_100ac8084:
    puVar2 = (uint *)QMapDataBase::createNode
                               ((int)*param_1,0x28,(QMapNodeBase *)0x8,SUB81(puVar3,0));
    puVar2[6] = *param_2;
  }
  else {
    puVar2 = (uint *)0x0;
    puVar1 = *(uint **)(puVar3 + 4);
    do {
      while (puVar3 = puVar1, uVar4 = puVar3[6], *param_2 <= uVar4) {
        puVar2 = puVar3;
        puVar1 = *(uint **)(puVar3 + 2);
        if (*(uint **)(puVar3 + 2) == (uint *)0x0) goto LAB_100ac8073;
      }
      puVar1 = *(uint **)(puVar3 + 4);
    } while (*(uint **)(puVar3 + 4) != (uint *)0x0);
    if (puVar2 == (uint *)0x0) goto LAB_100ac8084;
    uVar4 = puVar2[6];
LAB_100ac8073:
    if (*param_2 < uVar4) goto LAB_100ac8084;
  }
  puVar2[7] = 0;
  puVar2[8] = 0;
LAB_100ac80a8:
  return puVar2 + 7;
}

