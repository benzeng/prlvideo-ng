
void FUN_1007534d0(undefined8 param_1,QString *param_2)

{
  QVariant local_58;
  Data_conflict local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QString local_30 [2];
  undefined1 local_19;
  
  QSettings::QSettings((QSettings *)local_30,(QObject *)0x0);
  local_38 = (QArrayData *)QString::fromAscii_helper("Third party converted vms",0x19);
  QSettings::beginReadArray(local_30);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10075353d;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10075353d:
  QSettings::endArray();
  local_40 = (QArrayData *)QString::fromAscii_helper("Third party converted vms",0x19);
  QSettings::beginWriteArray(local_30,(int)&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10075359d;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10075359d:
  QSettings::setArrayIndex((int)local_30);
  local_48.field7 = QString::fromAscii_helper("Third party converted vms path",0x1e);
  QVariant::QVariant(&local_58,param_2);
  QSettings::setValue(local_30,(QVariant *)&local_48);
  QVariant::~QVariant(&local_58);
  if (*(int *)local_48.field15 != -1) {
    if (*(int *)local_48.field15 != 0) {
      LOCK();
      *(int *)local_48.field15 = *(int *)local_48.field15 + -1;
      local_19 = *(int *)local_48.field15 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100753613;
    }
    QArrayData::deallocate((QArrayData *)local_48.field15,2,8);
  }
LAB_100753613:
  QSettings::endArray();
  QSettings::~QSettings((QSettings *)local_30);
  return;
}

