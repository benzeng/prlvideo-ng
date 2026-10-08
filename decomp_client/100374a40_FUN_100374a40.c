
byte FUN_100374a40(undefined8 param_1,long *param_2)

{
  byte bVar1;
  QVariant local_50;
  QString local_40;
  QVariant local_38;
  QVariant local_28;
  undefined1 local_11;
  
  if (*(int *)(*param_2 + 4) == 0) {
    return 0;
  }
  QSettings::QSettings((QSettings *)&local_28,(QObject *)0x0);
  QString::fromUtf8_helper((char *)&local_40,0x1def2ac);
  QString::append(&local_40);
  QVariant::QVariant(&local_50,true);
  QSettings::value((QString *)&local_38,&local_28);
  bVar1 = QVariant::toBool();
  QVariant::~QVariant(&local_38);
  QVariant::~QVariant(&local_50);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_11 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100374af5;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100374af5:
  QSettings::~QSettings((QSettings *)&local_28);
  return bVar1 ^ 1;
}

