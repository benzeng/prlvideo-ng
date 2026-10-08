
void FUN_100375300(undefined8 param_1,undefined8 param_2,int param_3)

{
  QVariant local_48;
  Data_conflict local_38;
  QString local_30 [2];
  undefined1 local_19;
  
  QSettings::QSettings((QSettings *)local_30,(QObject *)0x0);
  QString::fromUtf8_helper(&local_38.field0,0x1def2e0);
  QString::append((QString *)&local_38);
  QVariant::QVariant(&local_48,param_3);
  QSettings::setValue(local_30,(QVariant *)&local_38);
  QVariant::~QVariant(&local_48);
  if (*(int *)local_38.field15 != -1) {
    if (*(int *)local_38.field15 != 0) {
      LOCK();
      *(int *)local_38.field15 = *(int *)local_38.field15 + -1;
      local_19 = *(int *)local_38.field15 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100375393;
    }
    QArrayData::deallocate((QArrayData *)local_38.field15,2,8);
  }
LAB_100375393:
  QSettings::~QSettings((QSettings *)local_30);
  return;
}

