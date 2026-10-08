
undefined8 FUN_10028e640(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_c0;
  undefined4 local_bc;
  Data_conflict local_b8;
  undefined4 local_b0;
  QArrayData *local_a8;
  QVariant local_a0;
  QVariant local_90;
  QVariant local_80;
  QString local_70;
  Data_conflict local_68;
  undefined4 local_60;
  QArrayData *local_58;
  QVariant local_50;
  QVariant local_40;
  QString local_30;
  undefined1 local_21;
  
  CAbstractTask::getDefaultSubTaskList();
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001554a0(uVar3);
  if (lVar4 == 0) {
    return param_1;
  }
  QSettings::QSettings((QSettings *)&local_50,(QObject *)0x0);
  local_58 = (QArrayData *)QString::fromAscii_helper("AccountLocaleUpdated",0x14);
  local_60 = 0x80000000;
  local_68.field7 = 0;
  QSettings::value((QString *)&local_40,&local_50);
  QVariant::toString();
  uVar3 = FUN_10016f500(lVar4);
  FUN_10061abe0(&local_80,uVar3,0x12);
  QVariant::toString();
  cVar1 = operator==(&local_30,&local_70);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_21 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10028e727;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_10028e727:
  QVariant::~QVariant(&local_80);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10028e760;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_10028e760:
  QVariant::~QVariant(&local_40);
  QVariant::~QVariant((QVariant *)&local_68);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10028e7a2;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10028e7a2:
  QSettings::~QSettings((QSettings *)&local_50);
  if (cVar1 == '\0') goto LAB_10028e8bc;
  QSettings::QSettings((QSettings *)&local_a0,(QObject *)0x0);
  local_a8 = (QArrayData *)QString::fromAscii_helper("LicenseUpgradeToPro",0x13);
  local_b0 = 0x80000000;
  local_b8.field7 = 0;
  QSettings::value((QString *)&local_90,&local_a0);
  cVar1 = QVariant::toBool();
  cVar2 = '\x01';
  if (cVar1 != '\0') {
    uVar3 = FUN_100152280();
    uVar3 = FUN_1001554a0(uVar3);
    uVar3 = FUN_10016f500(uVar3);
    cVar2 = FUN_10061b500(uVar3,0x8000);
  }
  QVariant::~QVariant(&local_90);
  QVariant::~QVariant((QVariant *)&local_b8);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_21 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10028e893;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10028e893:
  QSettings::~QSettings((QSettings *)&local_a0);
  if (cVar2 != '\0') {
    local_bc = 5;
    FUN_1001298a0(param_1,&local_bc);
  }
LAB_10028e8bc:
  cVar1 = FUN_10028ea80(lVar4);
  if (cVar1 != '\0') {
    local_c0 = 7;
    FUN_1001298a0(param_1,&local_c0);
  }
  return param_1;
}

