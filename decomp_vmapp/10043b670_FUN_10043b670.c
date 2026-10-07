
uint * FUN_10043b670(undefined8 *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  undefined1 local_530 [1288];
  
  puVar5 = (uint *)*param_1;
  if (1 < *puVar5) {
    FUN_10043bf70(param_1);
    puVar5 = (uint *)*param_1;
  }
  if (*(uint **)(puVar5 + 4) != (uint *)0x0) {
    puVar1 = *(uint **)(puVar5 + 4);
    puVar3 = (uint *)0x0;
    do {
      while (puVar2 = puVar1, uVar4 = puVar2[6], *param_2 <= uVar4) {
        puVar1 = *(uint **)(puVar2 + 2);
        puVar3 = puVar2;
        if (*(uint **)(puVar2 + 2) == (uint *)0x0) goto LAB_10043b6e9;
      }
      puVar1 = *(uint **)(puVar2 + 4);
    } while (*(uint **)(puVar2 + 4) != (uint *)0x0);
    if (puVar3 != (uint *)0x0) {
      uVar4 = puVar3[6];
      puVar2 = puVar3;
LAB_10043b6e9:
      if (uVar4 <= *param_2) goto LAB_10043b7ad;
    }
  }
  ___bzero(local_530,0x508);
  if (1 < *puVar5) {
    FUN_10043bf70(param_1);
    puVar5 = (uint *)*param_1;
  }
  if (*(uint **)(puVar5 + 4) == (uint *)0x0) {
    puVar5 = puVar5 + 2;
LAB_10043b776:
    puVar2 = (uint *)QMapDataBase::createNode
                               ((int)*param_1,0x528,(QMapNodeBase *)&DAT_00000008,SUB81(puVar5,0));
    puVar2[6] = *param_2;
  }
  else {
    puVar2 = (uint *)0x0;
    puVar1 = *(uint **)(puVar5 + 4);
    do {
      while (puVar5 = puVar1, uVar4 = puVar5[6], *param_2 <= uVar4) {
        puVar2 = puVar5;
        puVar1 = *(uint **)(puVar5 + 2);
        if (*(uint **)(puVar5 + 2) == (uint *)0x0) goto LAB_10043b766;
      }
      puVar1 = *(uint **)(puVar5 + 4);
    } while (*(uint **)(puVar5 + 4) != (uint *)0x0);
    if (puVar2 == (uint *)0x0) goto LAB_10043b776;
    uVar4 = puVar2[6];
LAB_10043b766:
    if (*param_2 < uVar4) goto LAB_10043b776;
  }
  _memcpy(puVar2 + 7,local_530,0x508);
LAB_10043b7ad:
  return puVar2 + 7;
}

