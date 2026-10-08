
void FUN_1007d45f0(int param_1)

{
  int iVar1;
  QVariant local_58;
  Data_conflict local_48;
  QString local_40;
  QString local_38;
  QString local_30 [2];
  undefined1 local_19;
  
  FUN_100a04400(&local_38);
  FUN_1007caa20(&local_40);
  QSettings::QSettings((QSettings *)local_30,&local_38,&local_40,(QObject *)0x0);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_19 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007d4653;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1007d4653:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_19 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007d4683;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1007d4683:
  iVar1 = ClientStatistics::getOpenInIEClicks();
  ClientStatistics::setOpenInIEClicks(param_1 + 0x10);
  local_48.field7 = QString::fromAscii_helper("Open in IE button clicks",0x18);
  QVariant::QVariant(&local_58,iVar1 + 1);
  QSettings::setValue(local_30,(QVariant *)&local_48);
  QVariant::~QVariant(&local_58);
  if (*(int *)local_48.field15 != -1) {
    if (*(int *)local_48.field15 != 0) {
      LOCK();
      *(int *)local_48.field15 = *(int *)local_48.field15 + -1;
      local_19 = *(int *)local_48.field15 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007d4707;
    }
    QArrayData::deallocate((QArrayData *)local_48.field15,2,8);
  }
LAB_1007d4707:
  QSettings::~QSettings((QSettings *)local_30);
  return;
}

