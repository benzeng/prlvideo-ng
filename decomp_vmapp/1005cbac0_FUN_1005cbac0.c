
QString * FUN_1005cbac0(QString *param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  QArrayData *local_60;
  QArrayData *local_58;
  QDir local_50 [8];
  QTypedArrayData<unsigned_short> *local_48;
  QString local_40;
  undefined1 local_31;
  
  QFileInfo::dir();
  QDir::path();
  local_58 = (QArrayData *)QString::fromAscii_helper("/",1);
  local_40.field0_0x0 = local_48;
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_31 = *(int *)local_48 != 0;
    UNLOCK();
  }
  QString::append(&local_40);
  (**(code **)(*param_2 + 0xf0))(&local_60,param_2,param_3,param_4);
  param_1->field0_0x0 = local_40.field0_0x0;
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_31 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(param_1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005cbba1;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1005cbba1:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005cbbd1;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1005cbbd1:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005cbc01;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005cbc01:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005cbc31;
    }
    QArrayData::deallocate((QArrayData *)local_48,2,8);
  }
LAB_1005cbc31:
  QDir::~QDir(local_50);
  return param_1;
}

