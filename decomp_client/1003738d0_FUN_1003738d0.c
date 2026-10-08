
void FUN_1003738d0(void)

{
  QString local_30;
  QString local_28 [2];
  undefined1 local_11;
  
  QSettings::QSettings((QSettings *)local_28,(QObject *)0x0);
  QString::fromUtf8_helper((char *)&local_30,0x1def0c2);
  QString::append(&local_30);
  QSettings::remove(local_28);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_11 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100373945;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_100373945:
  QSettings::~QSettings((QSettings *)local_28);
  return;
}

