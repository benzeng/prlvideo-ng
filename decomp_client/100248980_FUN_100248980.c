
long FUN_100248980(undefined8 *param_1,int *param_2)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long local_28;
  
  puVar1 = (uint *)*param_1;
  if (1 < *puVar1) {
    FUN_100249120(param_1);
    puVar1 = (uint *)*param_1;
  }
  if (*(long *)(puVar1 + 4) != 0) {
    lVar2 = *(long *)(puVar1 + 4);
    lVar3 = 0;
    do {
      while( true ) {
        lVar5 = lVar2;
        iVar4 = *(int *)(lVar5 + 0x18);
        iVar6 = *(int *)(lVar5 + 0x1c);
        if (param_2[1] + *param_2 <= iVar6 + iVar4) break;
        lVar2 = *(long *)(lVar5 + 0x10);
        if (*(long *)(lVar5 + 0x10) == 0) {
          if (lVar3 == 0) goto LAB_100248a02;
          iVar4 = *(int *)(lVar3 + 0x18);
          iVar6 = *(int *)(lVar3 + 0x1c);
          lVar5 = lVar3;
          goto LAB_1002489fc;
        }
      }
      lVar2 = *(long *)(lVar5 + 8);
      lVar3 = lVar5;
    } while (*(long *)(lVar5 + 8) != 0);
LAB_1002489fc:
    if (iVar6 + iVar4 <= param_2[1] + *param_2) {
      return lVar5 + 0x20;
    }
  }
LAB_100248a02:
  local_28 = 0;
  lVar2 = FUN_100248df0(param_1,param_2,&local_28);
  if (local_28 != 0) {
    _PrlHandle_Free();
  }
  return lVar2 + 0x20;
}

