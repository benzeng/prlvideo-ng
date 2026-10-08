
QVariant * FUN_1001eeaf0(QVariant *param_1,long *param_2,QString *param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  Data_conflict *pDVar4;
  long lVar5;
  Data_conflict local_38;
  undefined4 local_30;
  
  local_30 = 0x80000000;
  local_38.field7 = 0;
  lVar1 = *(long *)(*param_2 + 0x10);
  lVar5 = 0;
  if (*(long *)(*param_2 + 0x10) != 0) {
    do {
      while (lVar3 = lVar1, cVar2 = operator<((QString *)(lVar3 + 0x18),param_3), cVar2 != '\0') {
        lVar1 = *(long *)(lVar3 + 0x10);
        if (*(long *)(lVar3 + 0x10) == 0) {
          lVar3 = lVar5;
          if (lVar5 == 0) goto LAB_1001eeb76;
          goto LAB_1001eeb66;
        }
      }
      lVar1 = *(long *)(lVar3 + 8);
      lVar5 = lVar3;
    } while (*(long *)(lVar3 + 8) != 0);
LAB_1001eeb66:
    cVar2 = operator<(param_3,(QString *)(lVar3 + 0x18));
    if (cVar2 == '\0') goto LAB_1001eeb78;
  }
LAB_1001eeb76:
  lVar3 = 0;
LAB_1001eeb78:
  pDVar4 = &local_38;
  if (lVar3 != 0) {
    pDVar4 = (Data_conflict *)(lVar3 + 0x20);
  }
  QVariant::QVariant(param_1,(QVariant *)pDVar4);
  QVariant::~QVariant((QVariant *)&local_38);
  return param_1;
}

