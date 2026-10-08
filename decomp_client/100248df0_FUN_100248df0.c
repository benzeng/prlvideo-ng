
uint * FUN_100248df0(undefined8 *param_1,int *param_2,uint *param_3)

{
  long lVar1;
  uint *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar5 = (uint *)*param_1;
  if (1 < *puVar5) {
    FUN_100249120(param_1);
    puVar5 = (uint *)*param_1;
  }
  if (*(uint **)(puVar5 + 4) == (uint *)0x0) {
    puVar5 = puVar5 + 2;
    uVar4 = 1;
  }
  else {
    puVar6 = (uint *)0x0;
    puVar2 = *(uint **)(puVar5 + 4);
    do {
      while (puVar5 = puVar2, param_2[1] + *param_2 <= (int)(puVar5[7] + puVar5[6])) {
        puVar6 = puVar5;
        puVar2 = *(uint **)(puVar5 + 2);
        uVar3 = 1;
        if (*(uint **)(puVar5 + 2) == (uint *)0x0) goto LAB_100248e62;
      }
      puVar2 = *(uint **)(puVar5 + 4);
    } while (*(uint **)(puVar5 + 4) != (uint *)0x0);
    uVar4 = 0;
    uVar3 = 0;
    if (puVar6 != (uint *)0x0) {
LAB_100248e62:
      uVar4 = uVar3;
      if ((int)(puVar6[7] + puVar6[6]) <= param_2[1] + *param_2) {
        puVar5 = puVar6 + 8;
        if (puVar5 != param_3) {
          if (*(long *)puVar5 != 0) {
            _PrlHandle_Free();
          }
          lVar1 = *(long *)param_3;
          *(long *)puVar5 = lVar1;
          if (lVar1 != 0) {
            _PrlHandle_AddRef();
          }
        }
        return puVar6;
      }
    }
  }
  puVar5 = (uint *)FUN_100249270(*param_1,param_2,param_3,puVar5,uVar4);
  return puVar5;
}

