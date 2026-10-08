
void FUN_100b60fd0(long param_1)

{
  undefined *puVar1;
  QString local_b0;
  QString local_a8;
  QString local_a0;
  QString local_98;
  QDateTime local_90;
  QString local_88;
  QString local_80;
  QDateTime local_78;
  QString local_70;
  QString local_68;
  QDateTime local_60;
  QDateTime local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_100b7c6f0(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = 0;
  puVar1 = PTR_shared_null_1021e1288;
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QString::operator=((QString *)(param_1 + 8),&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b61043;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100b61043:
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  QString::operator=((QString *)(param_1 + 0x30),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b61084;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100b61084:
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  QString::operator=((QString *)(param_1 + 0x38),&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_29 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b610c5;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100b610c5:
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  QString::operator=((QString *)(param_1 + 0x40),&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_29 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b61106;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100b61106:
  *(undefined1 *)(param_1 + 0x48) = 0;
  QDateTime::QDateTime(&local_58);
  QDateTime::operator=((QDateTime *)(param_1 + 0x50),&local_58);
  QDateTime::~QDateTime(&local_58);
  QDateTime::QDateTime(&local_60);
  QDateTime::operator=((QDateTime *)(param_1 + 0x58),&local_60);
  QDateTime::~QDateTime(&local_60);
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  QString::operator=((QString *)(param_1 + 0x60),&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_29 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b61194;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_100b61194:
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  QString::operator=((QString *)(param_1 + 0x68),&local_70);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_29 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b611d5;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100b611d5:
  QDateTime::QDateTime(&local_78);
  QDateTime::operator=((QDateTime *)(param_1 + 0x70),&local_78);
  QDateTime::~QDateTime(&local_78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0xffff00000000;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  QString::operator=((QString *)(param_1 + 0xa8),&local_80);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_29 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b61282;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_100b61282:
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  QString::operator=((QString *)(param_1 + 0xc0),&local_88);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_29 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b612e7;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_100b612e7:
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  QDateTime::QDateTime(&local_90);
  QDateTime::operator=((QDateTime *)(param_1 + 0xe0),&local_90);
  QDateTime::~QDateTime(&local_90);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  QString::operator=((QString *)(param_1 + 0xf0),&local_98);
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_29 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b61385;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_100b61385:
  local_a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  QString::operator=((QString *)(param_1 + 0xf8),&local_a0);
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_29 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b613d5;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_100b613d5:
  *(undefined4 *)(param_1 + 0x100) = 0;
  local_a8.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  QString::operator=((QString *)(param_1 + 0x108),&local_a8);
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_29 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b61430;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_100b61430:
  *(undefined4 *)(param_1 + 0x110) = 0;
  local_b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  QString::operator=((QString *)(param_1 + 0x118),&local_b0);
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_b0.field0_0x0 != 0) goto LAB_100b6148b;
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_100b6148b:
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined1 *)(param_1 + 0x125) = 0;
  *(undefined1 *)(param_1 + 0xec) = 0;
  return;
}

