
uint * FUN_1004be870(undefined8 *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = (uint *)*param_1;
  if (1 < *puVar3) {
    FUN_1004be9d0(param_1);
    puVar3 = (uint *)*param_1;
  }
  if (*(uint **)(puVar3 + 4) != (uint *)0x0) {
    puVar1 = *(uint **)(puVar3 + 4);
    puVar5 = (uint *)0x0;
    do {
      while (puVar2 = puVar1, uVar4 = puVar2[6], *param_2 <= uVar4) {
        puVar1 = *(uint **)(puVar2 + 2);
        puVar5 = puVar2;
        if (*(uint **)(puVar2 + 2) == (uint *)0x0) goto LAB_1004be8e9;
      }
      puVar1 = *(uint **)(puVar2 + 4);
    } while (*(uint **)(puVar2 + 4) != (uint *)0x0);
    if (puVar5 != (uint *)0x0) {
      uVar4 = puVar5[6];
      puVar2 = puVar5;
LAB_1004be8e9:
      if (uVar4 <= *param_2) goto LAB_1004be9b8;
    }
  }
  if (1 < *puVar3) {
    FUN_1004be9d0(param_1);
    puVar3 = (uint *)*param_1;
  }
  if (*(uint **)(puVar3 + 4) == (uint *)0x0) {
    puVar3 = puVar3 + 2;
LAB_1004be974:
    puVar2 = (uint *)QMapDataBase::createNode
                               ((int)*param_1,0x48,(QMapNodeBase *)&DAT_00000008,SUB81(puVar3,0));
    puVar2[6] = *param_2;
  }
  else {
    puVar2 = (uint *)0x0;
    puVar1 = *(uint **)(puVar3 + 4);
    do {
      while (puVar3 = puVar1, uVar4 = puVar3[6], *param_2 <= uVar4) {
        puVar2 = puVar3;
        puVar1 = *(uint **)(puVar3 + 2);
        if (*(uint **)(puVar3 + 2) == (uint *)0x0) goto LAB_1004be963;
      }
      puVar1 = *(uint **)(puVar3 + 4);
    } while (*(uint **)(puVar3 + 4) != (uint *)0x0);
    if (puVar2 == (uint *)0x0) goto LAB_1004be974;
    uVar4 = puVar2[6];
LAB_1004be963:
    if (*param_2 < uVar4) goto LAB_1004be974;
  }
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
LAB_1004be9b8:
  return puVar2 + 8;
}

