
long FUN_1000bd960(undefined8 *param_1,QString *param_2)

{
  long lVar1;
  char cVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  undefined4 local_2c;
  
  puVar3 = (uint *)*param_1;
  if (1 < *puVar3) {
    FUN_1000be650(param_1);
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
          if (lVar5 == 0) goto LAB_1000bd9e6;
          goto LAB_1000bd9d6;
        }
      }
      lVar1 = *(long *)(lVar4 + 8);
      lVar5 = lVar4;
    } while (*(long *)(lVar4 + 8) != 0);
LAB_1000bd9d6:
    cVar2 = operator<(param_2,(QString *)(lVar4 + 0x18));
    if (cVar2 == '\0') goto LAB_1000bd9ff;
  }
LAB_1000bd9e6:
  local_2c = 0;
  lVar4 = FUN_1000be560(param_1,param_2,&local_2c);
LAB_1000bd9ff:
  return lVar4 + 0x20;
}

