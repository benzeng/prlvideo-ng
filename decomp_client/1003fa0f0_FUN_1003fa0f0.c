
uint * FUN_1003fa0f0(undefined8 *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = (uint *)*param_1;
  if (1 < *puVar3) {
    FUN_1003fa640(param_1);
    puVar3 = (uint *)*param_1;
  }
  if (*(uint **)(puVar3 + 4) != (uint *)0x0) {
    puVar1 = *(uint **)(puVar3 + 4);
    puVar5 = (uint *)0x0;
    do {
      while (puVar2 = puVar1, uVar4 = puVar2[6], (int)*param_2 <= (int)uVar4) {
        puVar1 = *(uint **)(puVar2 + 2);
        puVar5 = puVar2;
        if (*(uint **)(puVar2 + 2) == (uint *)0x0) goto LAB_1003fa169;
      }
      puVar1 = *(uint **)(puVar2 + 4);
    } while (*(uint **)(puVar2 + 4) != (uint *)0x0);
    if (puVar5 != (uint *)0x0) {
      uVar4 = puVar5[6];
      puVar2 = puVar5;
LAB_1003fa169:
      if ((int)uVar4 <= (int)*param_2) goto LAB_1003fa1f7;
    }
  }
  if (1 < *puVar3) {
    FUN_1003fa640(param_1);
    puVar3 = (uint *)*param_1;
  }
  if (*(uint **)(puVar3 + 4) == (uint *)0x0) {
    puVar3 = puVar3 + 2;
LAB_1003fa1d4:
    puVar2 = (uint *)QMapDataBase::createNode
                               ((int)*param_1,0x20,(QMapNodeBase *)0x8,SUB81(puVar3,0));
    puVar2[6] = *param_2;
  }
  else {
    puVar2 = (uint *)0x0;
    puVar1 = *(uint **)(puVar3 + 4);
    do {
      while (puVar3 = puVar1, uVar4 = puVar3[6], (int)*param_2 <= (int)uVar4) {
        puVar2 = puVar3;
        puVar1 = *(uint **)(puVar3 + 2);
        if (*(uint **)(puVar3 + 2) == (uint *)0x0) goto LAB_1003fa1c3;
      }
      puVar1 = *(uint **)(puVar3 + 4);
    } while (*(uint **)(puVar3 + 4) != (uint *)0x0);
    if (puVar2 == (uint *)0x0) goto LAB_1003fa1d4;
    uVar4 = puVar2[6];
LAB_1003fa1c3:
    if ((int)*param_2 < (int)uVar4) goto LAB_1003fa1d4;
  }
  puVar2[7] = 0;
LAB_1003fa1f7:
  return puVar2 + 7;
}

