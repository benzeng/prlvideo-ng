
void FUN_10034cdb0(long param_1,int param_2)

{
  undefined8 uVar1;
  QVariant local_50;
  Data_conflict local_40;
  QArrayData *local_38;
  QString local_30 [2];
  undefined1 local_19;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1003193e0(&local_38,uVar1);
  FUN_10034d220(local_30,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10034ce1d;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10034ce1d:
  local_40.field7 = QString::fromAscii_helper("MaintenanceSkippedReason",0x18);
  QVariant::QVariant(&local_50,param_2);
  QSettings::setValue(local_30,(QVariant *)&local_40);
  QVariant::~QVariant(&local_50);
  if (*(int *)local_40.field15 != -1) {
    if (*(int *)local_40.field15 != 0) {
      LOCK();
      *(int *)local_40.field15 = *(int *)local_40.field15 + -1;
      local_19 = *(int *)local_40.field15 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10034ce88;
    }
    QArrayData::deallocate((QArrayData *)local_40.field15,2,8);
  }
LAB_10034ce88:
  QSettings::~QSettings((QSettings *)local_30);
  return;
}

