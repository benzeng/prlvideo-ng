
void FUN_1000ace70(undefined8 param_1,undefined8 param_2,bool param_3)

{
  QVariant local_58;
  Data_conflict local_48;
  QArrayData *local_40;
  QString local_38 [2];
  QArrayData *local_28;
  undefined1 local_19;
  
  if (2 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",3,"Set \"%s\" flag for vmUuid=\"%s\" to %u",
                  "Apps folder added to Dock",local_28 + *(long *)(local_28 + 0x10),param_3);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        local_19 = *(int *)local_28 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1000acf00;
      }
      QArrayData::deallocate(local_28,1,8);
    }
  }
LAB_1000acf00:
  QSettings::QSettings((QSettings *)local_38,(QObject *)0x0);
  local_40 = (QArrayData *)QString::fromAscii_helper("Shared Applications",0x13);
  QSettings::beginGroup(local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000acf5d;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1000acf5d:
  QSettings::beginGroup(local_38);
  local_48.field7 = QString::fromAscii_helper("Apps folder added to Dock",0x19);
  QVariant::QVariant(&local_58,param_3);
  QSettings::setValue(local_38,(QVariant *)&local_48);
  QVariant::~QVariant(&local_58);
  if (*(int *)local_48.field15 != -1) {
    if (*(int *)local_48.field15 != 0) {
      LOCK();
      *(int *)local_48.field15 = *(int *)local_48.field15 + -1;
      local_19 = *(int *)local_48.field15 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000acfd5;
    }
    QArrayData::deallocate((QArrayData *)local_48.field15,2,8);
  }
LAB_1000acfd5:
  QSettings::~QSettings((QSettings *)local_38);
  return;
}

