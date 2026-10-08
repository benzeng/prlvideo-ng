
bool FUN_100d1dfb0(long *param_1,QString *param_2,QString *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  
  lVar2 = *(long *)(*param_1 + 0x10);
  lVar4 = 0;
  if (*(long *)(*param_1 + 0x10) != 0) {
    do {
      while (lVar3 = lVar2, cVar1 = operator<((QString *)(lVar3 + 0x18),param_2), cVar1 == '\0') {
        lVar2 = *(long *)(lVar3 + 8);
        lVar4 = lVar3;
        if (*(long *)(lVar3 + 8) == 0) goto LAB_100d1e016;
      }
      lVar2 = *(long *)(lVar3 + 0x10);
    } while (*(long *)(lVar3 + 0x10) != 0);
    lVar3 = lVar4;
    if (lVar4 != 0) {
LAB_100d1e016:
      cVar1 = operator<(param_2,(QString *)(lVar3 + 0x18));
      if (cVar1 == '\0') {
        lVar2 = *param_1;
        goto LAB_100d1e032;
      }
    }
  }
  lVar2 = *param_1;
  lVar3 = lVar2 + 8;
LAB_100d1e032:
  bVar5 = lVar2 + 8 != lVar3;
  if (bVar5) {
    QString::operator=(param_3,(QString *)(lVar3 + 0x20));
  }
  return bVar5;
}

