
undefined8 FUN_10028fec0(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  long local_78;
  QVariant local_70;
  Data_conflict local_60;
  undefined4 local_58;
  QArrayData *local_50;
  QVariant local_48;
  QVariant local_38;
  undefined1 local_21;
  
  QSettings::QSettings((QSettings *)&local_48,(QObject *)0x0);
  local_50 = (QArrayData *)QString::fromAscii_helper("LicenseUpgradeToPro",0x13);
  local_58 = 0x80000000;
  local_60.field7 = 0;
  QSettings::value((QString *)&local_38,&local_48);
  cVar1 = QVariant::toBool();
  cVar2 = '\x01';
  if (cVar1 != '\0') {
    uVar4 = FUN_100152280();
    uVar4 = FUN_1001554a0(uVar4);
    uVar4 = FUN_10016f500(uVar4);
    cVar2 = FUN_10061b500(uVar4,0x8000);
  }
  QVariant::~QVariant(&local_38);
  QVariant::~QVariant((QVariant *)&local_60);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10028ff8b;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10028ff8b:
  QSettings::~QSettings((QSettings *)&local_48);
  uVar4 = 0x3bfa;
  if (cVar2 == '\0') {
    CAbstractTask::setWaitForSubTaskCompletion();
    pcVar5 = operator_new(0x50);
    uVar4 = FUN_100152280();
    uVar4 = FUN_1001554a0(uVar4);
    FUN_10028b200(pcVar5,uVar4);
    iVar3 = FUN_1006268d0();
    QVariant::QVariant(&local_70,iVar3);
    QObject::setProperty(pcVar5,(QVariant *)"ProductEdition");
    QVariant::~QVariant(&local_70);
    uVar4 = 0;
    QObject::connect(&local_78,pcVar5,"2taskFinished(PRL_RESULT)",param_1,
                     "1onRenewalLicenseFinished(PRL_RESULT)",0);
    if (local_78 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_78);
    CAbstractTask::execute();
  }
  return uVar4;
}

