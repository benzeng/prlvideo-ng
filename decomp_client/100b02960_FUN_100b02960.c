
bool FUN_100b02960(long *param_1,QString *param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(*param_1 + 0x10);
  lVar4 = 0;
  if (*(long *)(*param_1 + 0x10) != 0) {
    do {
      while (lVar3 = lVar1, cVar2 = operator<((QString *)(lVar3 + 0x18),param_2), cVar2 != '\0') {
        lVar1 = *(long *)(lVar3 + 0x10);
        if (*(long *)(lVar3 + 0x10) == 0) {
          lVar3 = lVar4;
          if (lVar4 == 0) goto LAB_100b029c6;
          goto LAB_100b029b6;
        }
      }
      lVar1 = *(long *)(lVar3 + 8);
      lVar4 = lVar3;
    } while (*(long *)(lVar3 + 8) != 0);
LAB_100b029b6:
    cVar2 = operator<(param_2,(QString *)(lVar3 + 0x18));
    if (cVar2 == '\0') goto LAB_100b029c8;
  }
LAB_100b029c6:
  lVar3 = 0;
LAB_100b029c8:
  return lVar3 != 0;
}

