
longlong FUN_100612440(longlong param_1)

{
  char cVar1;
  QDateTime local_78;
  QDateTime local_70;
  QDateTime local_68;
  Data_conflict local_60;
  undefined4 local_58;
  QString local_50;
  QVariant local_48;
  QVariant local_38;
  QDateTime local_28;
  undefined1 local_19;
  
  QSettings::QSettings((QSettings *)&local_48,(QObject *)0x0);
  QString::fromUtf8_helper((char *)&local_50,0x1e0721e);
  QString::append(&local_50);
  local_58 = 0x80000000;
  local_60.field7 = 0;
  QSettings::value((QString *)&local_38,&local_48);
  QVariant::toDateTime();
  QVariant::~QVariant(&local_38);
  QVariant::~QVariant((QVariant *)&local_60);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_19 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006124f0;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1006124f0:
  QSettings::~QSettings((QSettings *)&local_48);
  cVar1 = QDateTime::isValid();
  if (cVar1 == '\0') {
    QDateTime::currentDateTime();
  }
  else {
    QDateTime::addMSecs((longlong)&local_68);
    QDateTime::currentDateTime();
    QDateTime::addMSecs((longlong)&local_70);
    cVar1 = QDateTime::operator<(&local_70,&local_68);
    QDateTime::~QDateTime(&local_70);
    QDateTime::~QDateTime(&local_78);
    QDateTime::~QDateTime(&local_68);
    if (cVar1 == '\0') {
      QDateTime::addMSecs(param_1);
    }
    else {
      QDateTime::currentDateTime();
    }
  }
  QDateTime::~QDateTime(&local_28);
  return param_1;
}

