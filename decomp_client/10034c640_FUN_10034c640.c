
undefined8 FUN_10034c640(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  QDateTime local_68;
  QVariant local_60;
  QArrayData *local_50;
  QVariant local_48;
  QArrayData *local_38;
  QVariant local_30;
  undefined1 local_19;
  
  uVar1 = 0;
  if ((*(long *)(param_2 + 0x10) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_2 + 0x10) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
  }
  FUN_1003193e0(&local_38,uVar1);
  FUN_10034d220(&local_30,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10034c6b0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10034c6b0:
  local_50 = (QArrayData *)QString::fromAscii_helper("MaintenanceLastRun",0x12);
  QDateTime::QDateTime(&local_68);
  QVariant::QVariant(&local_60,&local_68);
  QSettings::value((QString *)&local_48,&local_30);
  QVariant::toDateTime();
  QVariant::~QVariant(&local_48);
  QVariant::~QVariant(&local_60);
  QDateTime::~QDateTime(&local_68);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10034c747;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10034c747:
  QSettings::~QSettings((QSettings *)&local_30);
  return param_1;
}

