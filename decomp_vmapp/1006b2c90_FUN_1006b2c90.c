
uint * FUN_1006b2c90(undefined8 *param_1,QString *param_2,undefined8 param_3)

{
  uint *puVar1;
  char cVar2;
  uint *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  
  puVar3 = (uint *)*param_1;
  if (1 < *puVar3) {
    FUN_1006b2d70(param_1);
    puVar3 = (uint *)*param_1;
  }
  puVar1 = *(uint **)(puVar3 + 4);
  puVar4 = (uint *)0x0;
  if (*(uint **)(puVar3 + 4) == (uint *)0x0) {
    puVar3 = puVar3 + 2;
    uVar5 = 1;
  }
  else {
    do {
      while (puVar3 = puVar1, cVar2 = operator<((QString *)(puVar3 + 6),param_2), cVar2 != '\0') {
        puVar1 = *(uint **)(puVar3 + 4);
        if (*(uint **)(puVar3 + 4) == (uint *)0x0) {
          uVar5 = 0;
          if (puVar4 == (uint *)0x0) goto LAB_1006b2d47;
          goto LAB_1006b2d0a;
        }
      }
      uVar5 = 1;
      puVar1 = *(uint **)(puVar3 + 2);
      puVar4 = puVar3;
    } while (*(uint **)(puVar3 + 2) != (uint *)0x0);
LAB_1006b2d0a:
    cVar2 = operator<(param_2,(QString *)(puVar4 + 6));
    if (cVar2 == '\0') {
      FUN_10051afa0(puVar4 + 8,param_3);
      return puVar4;
    }
  }
LAB_1006b2d47:
  puVar3 = (uint *)FUN_1006b2ec0(*param_1,param_2,param_3,puVar3,uVar5);
  return puVar3;
}

