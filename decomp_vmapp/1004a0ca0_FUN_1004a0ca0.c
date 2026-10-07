
QVariant * FUN_1004a0ca0(QVariant *param_1,long *param_2,QString *param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  QVariant *pQVar4;
  long lVar5;
  undefined8 local_38;
  undefined4 local_30;
  
  local_30 = 0x80000000;
  local_38 = 0;
  lVar1 = *(long *)(*param_2 + 0x10);
  lVar5 = 0;
  if (*(long *)(*param_2 + 0x10) != 0) {
    do {
      while (lVar3 = lVar1, cVar2 = operator<((QString *)(lVar3 + 0x18),param_3), cVar2 != '\0') {
        lVar1 = *(long *)(lVar3 + 0x10);
        if (*(long *)(lVar3 + 0x10) == 0) {
          lVar3 = lVar5;
          if (lVar5 == 0) goto LAB_1004a0d26;
          goto LAB_1004a0d16;
        }
      }
      lVar1 = *(long *)(lVar3 + 8);
      lVar5 = lVar3;
    } while (*(long *)(lVar3 + 8) != 0);
LAB_1004a0d16:
    cVar2 = operator<(param_3,(QString *)(lVar3 + 0x18));
    if (cVar2 == '\0') goto LAB_1004a0d28;
  }
LAB_1004a0d26:
  lVar3 = 0;
LAB_1004a0d28:
  pQVar4 = (QVariant *)&local_38;
  if (lVar3 != 0) {
    pQVar4 = (QVariant *)(lVar3 + 0x20);
  }
  QVariant::QVariant(param_1,pQVar4);
  QVariant::~QVariant((QVariant *)&local_38);
  return param_1;
}

