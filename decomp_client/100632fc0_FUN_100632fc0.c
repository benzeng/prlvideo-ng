
byte FUN_100632fc0(long param_1)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined4 local_78 [2];
  QVariant local_70;
  undefined8 local_60;
  QDateTime local_58;
  QVariant local_50;
  QDateTime local_40;
  QDateTime local_38;
  QVariant local_30;
  QDateTime local_20;
  
  if (((*(long *)(param_1 + 0x68) == 0) || (*(int *)(*(long *)(param_1 + 0x68) + 4) == 0)) ||
     (*(long *)(param_1 + 0x70) == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: License is null.");
    bVar2 = 1;
  }
  else {
    FUN_10061abe0(&local_30,*(long *)(param_1 + 0x70),8);
    QVariant::toDateTime();
    QVariant::~QVariant(&local_30);
    QDateTime::currentDateTime();
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x70);
    }
    FUN_10061abe0(&local_50,uVar3,9);
    QVariant::toDateTime();
    QVariant::~QVariant(&local_50);
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x70);
    }
    FUN_10061abe0(&local_70,uVar3,6);
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
  }
  return bVar2;
}

