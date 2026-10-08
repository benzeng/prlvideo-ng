
char FUN_1006271d0(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  QVariant local_48;
  QVariant local_38;
  
  FUN_10061abe0(&local_38,param_1,6);
  lVar2 = QVariant::toDate();
  if (lVar2 + 0xb69eeff91fU < 0x16d3e147974) {
    FUN_10061abe0(&local_48,param_1,6);
    lVar2 = QVariant::toDate();
    lVar3 = QDate::currentDate();
    QVariant::~QVariant(&local_48);
    QVariant::~QVariant(&local_38);
    cVar1 = '\0';
    if (lVar3 <= lVar2) {
      cVar1 = FUN_10061c2b0(param_1,0x20);
      cVar1 = (cVar1 == '\0') + '\x01';
    }
  }
  else {
    QVariant::~QVariant(&local_38);
    cVar1 = '\0';
  }
  return cVar1;
}

