
undefined1 FUN_100627030(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  bool bVar6;
  QVariant local_70;
  QVariant local_60;
  QVariant local_50;
  QVariant local_40;
  QVariant local_30;
  
  FUN_10061abe0(&local_30,param_1,0);
  iVar2 = QVariant::toInt((bool *)&local_30);
  if (iVar2 == -0x7ffeefff) {
    QVariant::~QVariant(&local_30);
    uVar5 = 1;
  }
  else {
    FUN_10061abe0(&local_40,param_1,0);
    iVar2 = QVariant::toInt((bool *)&local_40);
    bVar6 = true;
    if (iVar2 != -0x7ffeef8c) {
      FUN_10061abe0(&local_50,param_1,0);
      iVar2 = QVariant::toInt((bool *)&local_50);
      bVar6 = true;
      if (iVar2 != -0x7ffeef89) {
        FUN_10061abe0(&local_60,param_1,0);
        iVar2 = QVariant::toInt((bool *)&local_60);
        bVar6 = iVar2 == -0x7ffeef9b;
        QVariant::~QVariant(&local_60);
      }
      QVariant::~QVariant(&local_50);
    }
    QVariant::~QVariant(&local_40);
    QVariant::~QVariant(&local_30);
    uVar5 = 1;
    if (!bVar6) {
      cVar1 = FUN_100d80630(1);
      if (cVar1 != '\0') {
        FUN_10061abe0(&local_70,param_1,6);
        lVar3 = QVariant::toDate();
        QVariant::~QVariant(&local_70);
        if ((lVar3 + 0xb69eeff91fU < 0x16d3e147974) && (lVar4 = QDate::currentDate(), lVar3 < lVar4)
           ) {
          return 1;
        }
      }
      uVar5 = 0;
    }
  }
  return uVar5;
}

