
uint * FUN_10009ebe0(undefined8 *param_1,ulong *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  ulong uVar4;
  uint *puVar5;
  
  puVar3 = (uint *)*param_1;
  if (1 < *puVar3) {
    FUN_1000a04e0(param_1);
    puVar3 = (uint *)*param_1;
  }
  if (*(uint **)(puVar3 + 4) != (uint *)0x0) {
    puVar1 = *(uint **)(puVar3 + 4);
    puVar5 = (uint *)0x0;
    do {
      while (puVar2 = puVar1, uVar4 = *(ulong *)(puVar2 + 6), *param_2 <= uVar4) {
        puVar1 = *(uint **)(puVar2 + 2);
        puVar5 = puVar2;
        if (*(uint **)(puVar2 + 2) == (uint *)0x0) goto LAB_10009ec5a;
      }
      puVar1 = *(uint **)(puVar2 + 4);
    } while (*(uint **)(puVar2 + 4) != (uint *)0x0);
    if (puVar5 != (uint *)0x0) {
      uVar4 = *(ulong *)(puVar5 + 6);
      puVar2 = puVar5;
LAB_10009ec5a:
      if (uVar4 <= *param_2) goto LAB_10009ecfc;
    }
  }
  if (1 < *puVar3) {
    FUN_1000a04e0(param_1);
    puVar3 = (uint *)*param_1;
  }
  if (*(uint **)(puVar3 + 4) == (uint *)0x0) {
    puVar3 = puVar3 + 2;
LAB_10009ecd8:
    puVar2 = (uint *)QMapDataBase::createNode
                               ((int)*param_1,0x28,(QMapNodeBase *)0x8,SUB81(puVar3,0));
    *(ulong *)(puVar2 + 6) = *param_2;
  }
  else {
    puVar2 = (uint *)0x0;
    puVar1 = *(uint **)(puVar3 + 4);
    do {
      while (puVar3 = puVar1, uVar4 = *(ulong *)(puVar3 + 6), *param_2 <= uVar4) {
        puVar2 = puVar3;
        puVar1 = *(uint **)(puVar3 + 2);
        if (*(uint **)(puVar3 + 2) == (uint *)0x0) goto LAB_10009ecc6;
      }
      puVar1 = *(uint **)(puVar3 + 4);
    } while (*(uint **)(puVar3 + 4) != (uint *)0x0);
    if (puVar2 == (uint *)0x0) goto LAB_10009ecd8;
    uVar4 = *(ulong *)(puVar2 + 6);
LAB_10009ecc6:
    if (*param_2 < uVar4) goto LAB_10009ecd8;
  }
  puVar2[8] = 0;
LAB_10009ecfc:
  return puVar2 + 8;
}

