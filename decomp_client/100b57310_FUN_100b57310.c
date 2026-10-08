
long FUN_100b57310(long param_1,QString *param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined1 local_31;
  
  lVar2 = *(long *)(param_1 + 8);
  if (0 < *(int *)(lVar2 + 4)) {
    lVar3 = 0;
    do {
      cVar1 = operator==((QString *)(*(long *)(lVar2 + *(long *)(lVar2 + 0x10) + lVar3 * 8) + 8),
                         param_2);
      if (cVar1 != '\0') {
        lVar2 = *(long *)(*(long *)(param_1 + 8) + *(long *)(*(long *)(param_1 + 8) + 0x10) +
                         lVar3 * 8);
        if ((lVar2 != 0) && (lVar2 = FUN_100b57f50(lVar2,param_3), lVar2 != 0)) {
          lVar2 = QString::toLongLong((bool *)(lVar2 + 8),(int)&local_31);
          return lVar2;
        }
        break;
      }
      lVar3 = lVar3 + 1;
      lVar2 = *(long *)(param_1 + 8);
    } while (lVar3 < *(int *)(lVar2 + 4));
  }
  return (long)param_5;
}

