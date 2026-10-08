
bool FUN_100624c50(undefined8 param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  QVariant local_58;
  QVariant local_48;
  QVariant local_38;
  
  FUN_10061abe0(&local_38,param_1,6);
  lVar4 = QVariant::toDate();
  QVariant::~QVariant(&local_38);
  FUN_10061abe0(&local_48,param_1,0);
  iVar3 = QVariant::toInt((bool *)&local_48);
  if (iVar3 == 0) {
    bVar1 = false;
LAB_100624cd3:
    bVar2 = FUN_10061b4d0(param_1,0x80);
    if ((-(lVar4 + 0xb69eeff91fU < 0x16d3e147974) & bVar2) == 1) {
      lVar5 = QDate::currentDate();
      bVar6 = lVar4 < lVar5;
    }
    else {
      bVar6 = false;
    }
    if (!bVar1) goto LAB_100624d23;
  }
  else {
    FUN_10061abe0(&local_58,param_1,0);
    iVar3 = QVariant::toInt((bool *)&local_58);
    bVar1 = true;
    if (iVar3 == -0x7ffeefa8) goto LAB_100624cd3;
    bVar6 = false;
  }
  QVariant::~QVariant(&local_58);
LAB_100624d23:
  QVariant::~QVariant(&local_48);
  return bVar6;
}

