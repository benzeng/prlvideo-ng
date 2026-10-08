
uint * FUN_1000fefb0(undefined8 *param_1,uint *param_2,undefined8 param_3)

{
  uint *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint *puVar4;
  uint *puVar5;
  bool bVar6;
  
  puVar4 = (uint *)*param_1;
  if (1 < *puVar4) {
    FUN_1000e6b10(param_1);
    puVar4 = (uint *)*param_1;
  }
  if (*(uint **)(puVar4 + 4) == (uint *)0x0) {
    puVar4 = puVar4 + 2;
    uVar3 = 1;
  }
  else {
    puVar1 = *(uint **)(puVar4 + 4);
    puVar5 = (uint *)0x0;
    do {
      while( true ) {
        puVar4 = puVar1;
        bVar6 = puVar4[6] < *param_2;
        if (puVar4[6] == *param_2) {
          bVar6 = puVar4[7] < param_2[1];
        }
        if (!bVar6) break;
        puVar1 = *(uint **)(puVar4 + 4);
        if (*(uint **)(puVar4 + 4) == (uint *)0x0) {
          uVar3 = 0;
          uVar2 = 0;
          if (puVar5 == (uint *)0x0) goto LAB_1000ff056;
          goto LAB_1000ff027;
        }
      }
      puVar5 = puVar4;
      puVar1 = *(uint **)(puVar4 + 2);
      uVar2 = 1;
    } while (*(uint **)(puVar4 + 2) != (uint *)0x0);
LAB_1000ff027:
    uVar3 = uVar2;
    bVar6 = *param_2 < puVar5[6];
    if (*param_2 == puVar5[6]) {
      bVar6 = param_2[1] < puVar5[7];
    }
    if (!bVar6) {
      FUN_1000fe4e0(puVar5 + 8,param_3);
      return puVar5;
    }
  }
LAB_1000ff056:
  puVar4 = (uint *)FUN_1000e6c60(*param_1,param_2,param_3,puVar4,uVar3);
  return puVar4;
}

