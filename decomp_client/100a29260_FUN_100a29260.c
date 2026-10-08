
long FUN_100a29260(undefined8 *param_1,QString *param_2)

{
  char cVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_30;
  
  puVar2 = (uint *)*param_1;
  if (1 < *puVar2) {
    FUN_100a2bf70(param_1);
    puVar2 = (uint *)*param_1;
  }
  lVar3 = *(long *)(puVar2 + 4);
  lVar5 = 0;
  if (*(long *)(puVar2 + 4) != 0) {
    do {
      while (lVar4 = lVar3, cVar1 = operator<((QString *)(lVar4 + 0x18),param_2), cVar1 == '\0') {
        lVar3 = *(long *)(lVar4 + 8);
        lVar5 = lVar4;
        if (*(long *)(lVar4 + 8) == 0) goto LAB_100a292d6;
      }
      lVar3 = *(long *)(lVar4 + 0x10);
    } while (*(long *)(lVar4 + 0x10) != 0);
    lVar4 = lVar5;
    if (lVar5 != 0) {
LAB_100a292d6:
      cVar1 = operator<(param_2,(QString *)(lVar4 + 0x18));
      if (cVar1 == '\0') {
        return lVar4 + 0x20;
      }
    }
  }
  local_30 = 0;
  lVar3 = FUN_100a2be70(param_1,param_2,&local_30);
  if (local_30 != 0) {
    _PrlHandle_Free();
  }
  return lVar3 + 0x20;
}

