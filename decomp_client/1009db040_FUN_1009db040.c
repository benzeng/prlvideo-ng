
void FUN_1009db040(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  QString local_80;
  QVariant local_78;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  Data_conflict local_50;
  QArrayData *local_48;
  QString local_40;
  QString local_38;
  QString local_30 [2];
  QArrayData *local_20;
  undefined1 local_11;
  
  FUN_100a04400(&local_38);
  uVar1 = FUN_100d7e9e0();
  FUN_100d8e790(&local_48,uVar1);
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_48;
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_11 = *(int *)local_48 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_20,0x1dd8616);
  QString::append(&local_40);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1009db0d0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_1009db0d0:
  QSettings::QSettings((QSettings *)local_30,&local_38,&local_40,(QObject *)0x0);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_11 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1009db113;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1009db113:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_11 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1009db143;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1009db143:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_11 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1009db173;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1009db173:
  local_60 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
  local_68 = (QArrayData *)QString::fromAscii_helper("Posted Reports",0xe);
  QString::arg(&local_58,&local_60,&local_68,0,0x20);
  QString::arg(&local_50,&local_58,param_2,0,0x20);
  local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QVariant::QVariant(&local_78,&local_80);
  QSettings::setValue(local_30,(QVariant *)&local_50);
  QVariant::~QVariant(&local_78);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_11 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1009db230;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1009db230:
  if (*(int *)local_50.field15 != -1) {
    if (*(int *)local_50.field15 != 0) {
      LOCK();
      *(int *)local_50.field15 = *(int *)local_50.field15 + -1;
      local_11 = *(int *)local_50.field15 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1009db260;
    }
    QArrayData::deallocate((QArrayData *)local_50.field15,2,8);
  }
LAB_1009db260:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_11 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1009db290;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1009db290:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_11 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1009db2c0;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1009db2c0:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_11 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1009db2f0;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1009db2f0:
  QSettings::~QSettings((QSettings *)local_30);
  return;
}

