
long FUN_1003bc2d0(undefined8 *param_1,QString *param_2)

{
  long lVar1;
  char cVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  undefined4 local_2c;
  
  puVar3 = (uint *)*param_1;
  if (1 < *puVar3) {
    FUN_1003bd690(param_1);
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
          if (lVar5 == 0) goto LAB_1003bc356;
          goto LAB_1003bc346;
        }
      }
      lVar1 = *(long *)(lVar4 + 8);
      lVar5 = lVar4;
    } while (*(long *)(lVar4 + 8) != 0);
LAB_1003bc346:
    cVar2 = operator<(param_2,(QString *)(lVar4 + 0x18));
    if (cVar2 == '\0') goto LAB_1003bc36f;
  }
LAB_1003bc356:
  local_2c = 0;
  lVar4 = FUN_1003bd5a0(param_1,param_2,&local_2c);
LAB_1003bc36f:
  return lVar4 + 0x20;
}

