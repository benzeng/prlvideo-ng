
void FUN_10072e3c0(long param_1,QString *param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  Data_conflict *pDVar4;
  long lVar5;
  Data_conflict local_50;
  undefined4 local_48;
  QVariant local_40;
  
  local_48 = 0x80000000;
  local_50.field7 = 0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x78) + 0x10);
  lVar5 = 0;
  if (lVar1 != 0) {
    do {
      while (lVar3 = lVar1, cVar2 = operator<((QString *)(lVar3 + 0x18),param_2), cVar2 != '\0') {
        lVar1 = *(long *)(lVar3 + 0x10);
        if (*(long *)(lVar3 + 0x10) == 0) {
          lVar3 = lVar5;
          if (lVar5 == 0) goto LAB_10072e446;
          goto LAB_10072e436;
        }
      }
      lVar1 = *(long *)(lVar3 + 8);
      lVar5 = lVar3;
    } while (*(long *)(lVar3 + 8) != 0);
LAB_10072e436:
    cVar2 = operator<(param_2,(QString *)(lVar3 + 0x18));
    if (cVar2 == '\0') goto LAB_10072e448;
  }
LAB_10072e446:
  lVar3 = 0;
LAB_10072e448:
  pDVar4 = &local_50;
  if (lVar3 != 0) {
    pDVar4 = (Data_conflict *)(lVar3 + 0x20);
  }
  QVariant::QVariant(&local_40,(QVariant *)pDVar4);
  QVariant::~QVariant((QVariant *)&local_50);
  FUN_10008d1b0(param_1 + 0x78,param_2,param_3);
  cVar2 = QVariant::cmp(&local_40);
  if (cVar2 == '\0') {
    FUN_100855790(param_1,param_1 + 0x78);
  }
  QVariant::~QVariant(&local_40);
  return;
}

