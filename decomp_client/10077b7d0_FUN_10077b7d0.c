
QDateTime * FUN_10077b7d0(QDateTime *param_1)

{
  char cVar1;
  QArrayData *pQVar2;
  QString local_a8;
  QVariant local_a0;
  Data_conflict local_90;
  QDateTime local_88;
  QArrayData *local_80;
  Data_conflict local_78;
  undefined4 local_70;
  QArrayData *local_68;
  QVariant local_60;
  QString local_50;
  QDateTime local_48;
  QArrayData *local_40;
  QVariant local_38;
  undefined1 local_21;
  
  QSettings::QSettings((QSettings *)&local_38,(QObject *)0x0);
  QDateTime::QDateTime(param_1);
  local_40 = (QArrayData *)QString::fromAscii_helper("Antivirus/FirstStartApp",0x17);
  cVar1 = QSettings::contains((QString *)&local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10077b84a;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10077b84a:
  if (cVar1 != '\0') {
    local_68 = (QArrayData *)QString::fromAscii_helper("Antivirus/FirstStartApp",0x17);
    local_70 = 0x80000000;
    local_78.field7 = 0;
    QSettings::value((QString *)&local_60,&local_38);
    QVariant::toString();
    local_80 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
    QDateTime::fromString((QString *)&local_48,&local_50);
    QDateTime::operator=(param_1,&local_48);
    QDateTime::~QDateTime(&local_48);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_21 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10077b903;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_10077b903:
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_21 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10077b933;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_10077b933:
    QVariant::~QVariant(&local_60);
    QVariant::~QVariant((QVariant *)&local_78);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_21 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10077b975;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
LAB_10077b975:
  cVar1 = QDateTime::isValid();
  if (cVar1 != '\0') goto LAB_10077bac1;
  QDateTime::currentDateTime();
  QDateTime::operator=(param_1,&local_88);
  QDateTime::~QDateTime(&local_88);
  local_90.field7 = QString::fromAscii_helper("Antivirus/FirstStartApp",0x17);
  pQVar2 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
  QDateTime::toString(&local_a8);
  QVariant::QVariant(&local_a0,&local_a8);
  QSettings::setValue((QString *)&local_38,(QVariant *)&local_90);
  QVariant::~QVariant(&local_a0);
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_21 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10077ba55;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_10077ba55:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10077ba8b;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10077ba8b:
  if (*(int *)local_90.field15 != -1) {
    if (*(int *)local_90.field15 != 0) {
      LOCK();
      *(int *)local_90.field15 = *(int *)local_90.field15 + -1;
      local_21 = *(int *)local_90.field15 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10077bac1;
    }
    QArrayData::deallocate((QArrayData *)local_90.field15,2,8);
  }
LAB_10077bac1:
  QSettings::~QSettings((QSettings *)&local_38);
  return param_1;
}

