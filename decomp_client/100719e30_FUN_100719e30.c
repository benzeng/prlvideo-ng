
void FUN_100719e30(undefined8 param_1,QString *param_2)

{
  QVariant local_48;
  QString local_38 [2];
  Data_conflict local_28;
  undefined1 local_19;
  
  local_28.field7 = QString::fromAscii_helper("User Preferences/Keyboard/Profile Assigns/",0x2a);
  QString::append((QString *)&local_28);
  QSettings::QSettings((QSettings *)local_38,(QObject *)0x0);
  QVariant::QVariant(&local_48,param_2);
  QSettings::setValue(local_38,(QVariant *)&local_28);
  QVariant::~QVariant(&local_48);
  QSettings::~QSettings((QSettings *)local_38);
  if (*(int *)local_28.field15 != -1) {
    if (*(int *)local_28.field15 != 0) {
      LOCK();
      *(int *)local_28.field15 = *(int *)local_28.field15 + -1;
      UNLOCK();
      if (*(int *)local_28.field15 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field15,2,8);
  }
  return;
}

