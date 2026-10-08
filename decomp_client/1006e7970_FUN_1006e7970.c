
void FUN_1006e7970(void)

{
  undefined8 uVar1;
  QArrayData *local_d0;
  undefined1 local_c8 [56];
  uint local_90;
  QVariant local_88;
  Data_conflict local_78;
  QString local_70 [2];
  QArrayData *local_60;
  char local_58 [71];
  undefined1 local_11;
  
  uVar1 = FUN_100748240();
  local_60 = (QArrayData *)QString::fromAscii_helper("version",7);
  FUN_100748290(uVar1,&local_60);
  FUN_100746ae0(local_58);
  FUN_10012ac30(local_58);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_11 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1006e79ed;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1006e79ed:
  if (local_58[0] != '\0') {
    return;
  }
  QSettings::QSettings((QSettings *)local_70,(QObject *)0x0);
  local_78.field7 = QString::fromAscii_helper("LastReleasedVersion",0x13);
  uVar1 = FUN_100748240();
  local_d0 = (QArrayData *)QString::fromAscii_helper("version",7);
  uVar1 = FUN_100748290(uVar1,&local_d0);
  FUN_100746ae0(local_c8,uVar1);
  QVariant::QVariant(&local_88,local_90);
  QSettings::setValue(local_70,(QVariant *)&local_78);
  QVariant::~QVariant(&local_88);
  FUN_10012ac30(local_c8);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_11 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1006e7abe;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1006e7abe:
  if (*(int *)local_78.field15 != -1) {
    if (*(int *)local_78.field15 != 0) {
      LOCK();
      *(int *)local_78.field15 = *(int *)local_78.field15 + -1;
      local_11 = *(int *)local_78.field15 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1006e7aee;
    }
    QArrayData::deallocate((QArrayData *)local_78.field15,2,8);
  }
LAB_1006e7aee:
  QSettings::~QSettings((QSettings *)local_70);
  return;
}

