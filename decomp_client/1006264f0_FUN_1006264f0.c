
undefined8 * FUN_1006264f0(undefined8 *param_1)

{
  QArrayData *local_60;
  Data_conflict local_58;
  undefined4 local_50;
  QArrayData *local_48;
  QVariant local_40;
  QArrayData *local_30;
  QVariant local_28;
  undefined1 local_11;
  
  QSettings::QSettings((QSettings *)&local_28,(QObject *)0x0);
  local_48 = (QArrayData *)QString::fromAscii_helper("ProductUpdate/RegisteredLicenseKey",0x22);
  local_50 = 0x80000000;
  local_58.field7 = 0;
  QSettings::value((QString *)&local_40,&local_28);
  QVariant::toString();
  QVariant::~QVariant(&local_40);
  QVariant::~QVariant((QVariant *)&local_58);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_11 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10062658f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10062658f:
  if (*(int *)(local_30 + 4) == 0) {
    *param_1 = local_30;
    if (1 < *(int *)local_30 + 1U) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + 1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
    }
  }
  else {
    local_60 = (QArrayData *)QString::fromAscii_helper("",0);
    FUN_1009e01f0(param_1,&local_60,&local_30);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_11 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_100626609;
      }
      QArrayData::deallocate(local_60,2,8);
    }
  }
LAB_100626609:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100626639;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100626639:
  QSettings::~QSettings((QSettings *)&local_28);
  return param_1;
}

