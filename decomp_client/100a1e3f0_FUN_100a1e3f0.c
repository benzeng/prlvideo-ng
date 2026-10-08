
long FUN_100a1e3f0(undefined8 *param_1,QString *param_2)

{
  long lVar1;
  char cVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  undefined4 local_2c;
  
  puVar3 = (uint *)*param_1;
  if (1 < *puVar3) {
    FUN_100a1e600(param_1);
    puVar3 = (uint *)*param_1;
  }
  lVar1 = *(long *)(puVar3 + 4);
  lVar5 = 0;
  if (*(long *)(puVar3 + 4) != 0) {
    do {
      while (lVar4 = lVar1, cVar2 = operator<((QString *)(lVar4 + 0x18),param_2), cVar2 != '\0') {
        lVar1 = *(long *)(lVar4 + 0x10);
        if (*(long *)(lVar4 + 0x10) == 0) {
          lVar4 = lVar5;
          if (lVar5 == 0) goto LAB_100a1e476;
          goto LAB_100a1e466;
        }
      }
      lVar1 = *(long *)(lVar4 + 8);
      lVar5 = lVar4;
    } while (*(long *)(lVar4 + 8) != 0);
LAB_100a1e466:
    cVar2 = operator<(param_2,(QString *)(lVar4 + 0x18));
    if (cVar2 == '\0') goto LAB_100a1e48f;
  }
LAB_100a1e476:
  local_2c = 0;
  lVar4 = FUN_100a1e510(param_1,param_2,&local_2c);
LAB_100a1e48f:
  return lVar4 + 0x20;
}

