
QHostAddress * FUN_100599810(QHostAddress *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  QHostAddress *pQVar4;
  QHostAddress local_48 [8];
  QHostAddress local_40 [8];
  QHostAddress local_38 [8];
  
  if (DAT_102274470 == 0) {
    DAT_102274470 = FUN_100599470("NetworkUtils::IPv4DHCPScopeInfo",0xffffffffffffffff,1);
  }
  uVar1 = DAT_102274470;
  uVar3 = QVariant::userType();
  if (uVar1 == uVar3) {
    pQVar4 = (QHostAddress *)QVariant::constData();
    QHostAddress::QHostAddress(param_1,pQVar4);
    QHostAddress::QHostAddress(param_1 + 8,pQVar4 + 8);
    QHostAddress::QHostAddress(param_1 + 0x10,pQVar4 + 0x10);
  }
  else {
    QHostAddress::QHostAddress(local_48);
    QHostAddress::QHostAddress(local_40);
    QHostAddress::QHostAddress(local_38);
    cVar2 = QVariant::convert(param_2,(void *)(ulong)uVar1);
    if (cVar2 == '\0') {
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)param_1 = 0;
      QHostAddress::QHostAddress(param_1);
      QHostAddress::QHostAddress(param_1 + 8);
      QHostAddress::QHostAddress(param_1 + 0x10);
    }
    else {
      QHostAddress::QHostAddress(param_1,local_48);
      QHostAddress::QHostAddress(param_1 + 8,local_40);
      QHostAddress::QHostAddress(param_1 + 0x10,local_38);
    }
    QHostAddress::~QHostAddress(local_38);
    QHostAddress::~QHostAddress(local_40);
    QHostAddress::~QHostAddress(local_48);
  }
  return param_1;
}

