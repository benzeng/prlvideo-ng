
byte FUN_100624d80(undefined8 param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 local_78 [2];
  QVariant local_70;
  undefined8 local_60;
  QDateTime local_58;
  QVariant local_50;
  QDateTime local_40;
  QDateTime local_38;
  QVariant local_30;
  QDateTime local_20;
  
  cVar1 = FUN_10061b4d0(param_1,0x8000);
  if ((cVar1 == '\0') && (cVar1 = FUN_10061b4d0(param_1,0x2010), cVar1 == '\0')) {
    return 0;
  }
  FUN_10061abe0(&local_30,param_1,8);
  QVariant::toDateTime();
  QVariant::~QVariant(&local_30);
  QDateTime::currentDateTime();
  FUN_10061abe0(&local_50,param_1,9);
  QVariant::toDateTime();
  QVariant::~QVariant(&local_50);
  FUN_10061abe0(&local_70,param_1,6);
  local_60 = QVariant::toDate();
  local_78[0] = QDateTime::time();
  QDateTime::QDateTime(&local_58,&local_60,local_78,0);
  QVariant::~QVariant(&local_70);
  cVar1 = QDateTime::operator<(&local_38,&local_20);
  bVar2 = 1;
  if (cVar1 == '\0') {
    bVar2 = QDateTime::operator<(&local_38,&local_58);
    bVar2 = bVar2 ^ 1;
  }
  QDateTime::~QDateTime(&local_58);
  QDateTime::~QDateTime(&local_40);
  QDateTime::~QDateTime(&local_38);
  QDateTime::~QDateTime(&local_20);
  return bVar2;
}

