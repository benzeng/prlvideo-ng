
void FUN_1000ffc20(long param_1)

{
  QArrayData *local_70;
  undefined1 local_68 [8];
  Data_conflict local_60;
  undefined4 local_58;
  QArrayData *local_50;
  QVariant local_48;
  QArrayData *local_38;
  QArrayData *local_30;
  QVariant local_28;
  undefined1 local_11;
  
  QSettings::QSettings((QSettings *)&local_28,(QObject *)0x0);
  local_30 = (QArrayData *)QString::fromAscii_helper("Shared Applications",0x13);
  QSettings::beginGroup((QString *)&local_28);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1000ffc89;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1000ffc89:
  local_50 = (QArrayData *)QString::fromAscii_helper("Deferred Extensions",0x13);
  local_58 = 0x80000000;
  local_60.field7 = 0;
  QSettings::value((QString *)&local_48,&local_28);
  QVariant::toString();
  QVariant::~QVariant(&local_48);
  QVariant::~QVariant((QVariant *)&local_60);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_11 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1000ffd11;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1000ffd11:
  local_70 = (QArrayData *)QString::fromAscii_helper(".",1);
  QString::split(local_68,&local_38,&local_70,1,1);
  FUN_1000e5fc0(param_1 + 0x18,local_68);
  FUN_100039a80(local_68);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_11 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1000ffd8b;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1000ffd8b:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_11 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1000ffdbb;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1000ffdbb:
  QSettings::~QSettings((QSettings *)&local_28);
  return;
}

