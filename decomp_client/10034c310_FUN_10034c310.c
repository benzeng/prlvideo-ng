
void FUN_10034c310(long param_1)

{
  undefined8 uVar1;
  QDateTime local_50;
  QVariant local_48;
  Data_conflict local_38;
  QArrayData *local_30;
  QString local_28 [2];
  undefined1 local_11;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1003193e0(&local_30,uVar1);
  FUN_10034d220(local_28,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10034c378;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10034c378:
  local_38.field7 = QString::fromAscii_helper("MaintenanceLastRun",0x12);
  QDateTime::currentDateTime();
  QVariant::QVariant(&local_48,&local_50);
  QSettings::setValue(local_28,(QVariant *)&local_38);
  QVariant::~QVariant(&local_48);
  QDateTime::~QDateTime(&local_50);
  if (*(int *)local_38.field15 != -1) {
    if (*(int *)local_38.field15 != 0) {
      LOCK();
      *(int *)local_38.field15 = *(int *)local_38.field15 + -1;
      local_11 = *(int *)local_38.field15 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10034c3f6;
    }
    QArrayData::deallocate((QArrayData *)local_38.field15,2,8);
  }
LAB_10034c3f6:
  QSettings::~QSettings((QSettings *)local_28);
  return;
}

