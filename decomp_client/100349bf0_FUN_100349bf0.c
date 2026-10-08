
void FUN_100349bf0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  QDateTime local_70;
  Data_conflict local_68;
  undefined4 local_60;
  QArrayData *local_58;
  QVariant local_50;
  QDateTime local_40;
  QArrayData *local_38;
  QVariant local_30;
  undefined1 local_19;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    return;
  }
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1003193e0(&local_38,uVar2);
  FUN_10034d220(&local_30,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100349c68;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100349c68:
  local_58 = (QArrayData *)QString::fromAscii_helper("MaintenanceNextRun",0x12);
  local_60 = 0x80000000;
  local_68.field7 = 0;
  QSettings::value((QString *)&local_50,&local_30);
  QVariant::toDateTime();
  QVariant::~QVariant(&local_50);
  QVariant::~QVariant((QVariant *)&local_68);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100349cf0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100349cf0:
  cVar1 = QDateTime::isNull();
  if (cVar1 == '\0') {
    QDateTime::currentDateTime();
    cVar1 = QDateTime::operator<(&local_40,&local_70);
    QDateTime::~QDateTime(&local_70);
    if (cVar1 != '\0') {
      FUN_10034cdb0(param_1,1);
    }
  }
  QDateTime::~QDateTime(&local_40);
  QSettings::~QSettings((QSettings *)&local_30);
  return;
}

