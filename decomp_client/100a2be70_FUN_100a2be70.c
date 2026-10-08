
uint * FUN_100a2be70(undefined8 *param_1,QString *param_2,uint *param_3)

{
  long lVar1;
  uint *puVar2;
  char cVar3;
  uint *puVar4;
  uint *puVar5;
  undefined8 uVar6;
  
  puVar4 = (uint *)*param_1;
  if (1 < *puVar4) {
    FUN_100a2bf70(param_1);
    puVar4 = (uint *)*param_1;
  }
  puVar2 = *(uint **)(puVar4 + 4);
  puVar5 = (uint *)0x0;
  if (*(uint **)(puVar4 + 4) == (uint *)0x0) {
    puVar4 = puVar4 + 2;
    uVar6 = 1;
  }
  else {
    do {
      while (puVar4 = puVar2, cVar3 = operator<((QString *)(puVar4 + 6),param_2), cVar3 != '\0') {
        puVar2 = *(uint **)(puVar4 + 4);
        if (*(uint **)(puVar4 + 4) == (uint *)0x0) {
          uVar6 = 0;
          if (puVar5 == (uint *)0x0) goto LAB_100a2bf3d;
          goto LAB_100a2beea;
        }
      }
      uVar6 = 1;
      puVar2 = *(uint **)(puVar4 + 2);
      puVar5 = puVar4;
    } while (*(uint **)(puVar4 + 2) != (uint *)0x0);
LAB_100a2beea:
    cVar3 = operator<(param_2,(QString *)(puVar5 + 6));
    if (cVar3 == '\0') {
      puVar4 = puVar5 + 8;
      if (puVar4 != param_3) {
        if (*(long *)puVar4 != 0) {
          _PrlHandle_Free();
        }
        lVar1 = *(long *)param_3;
        *(long *)puVar4 = lVar1;
        if (lVar1 != 0) {
          _PrlHandle_AddRef();
        }
      }
      return puVar5;
    }
  }
LAB_100a2bf3d:
  puVar4 = (uint *)FUN_100a2c0c0(*param_1,param_2,param_3,puVar4,uVar6);
  return puVar4;
}

