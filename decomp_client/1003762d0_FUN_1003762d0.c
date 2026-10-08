
long FUN_1003762d0(long param_1,QString *param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    lVar3 = 0;
    do {
      while( true ) {
        lVar4 = lVar1;
        cVar2 = operator<((QString *)(lVar4 + 0x18),param_2);
        if ((cVar2 == '\0') &&
           ((cVar2 = operator<(param_2,(QString *)(lVar4 + 0x18)), cVar2 != '\0' ||
            (*(uint *)&param_2[1].field0_0x0 <= *(uint *)(lVar4 + 0x20))))) break;
        lVar1 = *(long *)(lVar4 + 0x10);
        if (*(long *)(lVar4 + 0x10) == 0) {
          lVar4 = lVar3;
          if (lVar3 == 0) {
            return 0;
          }
          goto LAB_100376353;
        }
      }
      lVar1 = *(long *)(lVar4 + 8);
      lVar3 = lVar4;
    } while (*(long *)(lVar4 + 8) != 0);
LAB_100376353:
    cVar2 = operator<(param_2,(QString *)(lVar4 + 0x18));
    if (cVar2 == '\0') {
      cVar2 = operator<((QString *)(lVar4 + 0x18),param_2);
      if (cVar2 != '\0') {
        return lVar4;
      }
      if (*(uint *)(lVar4 + 0x20) <= *(uint *)&param_2[1].field0_0x0) {
        return lVar4;
      }
    }
  }
  return 0;
}

