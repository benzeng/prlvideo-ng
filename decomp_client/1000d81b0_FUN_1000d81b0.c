
QString * FUN_1000d81b0(QString *param_1,undefined8 param_2,QString *param_3)

{
  undefined2 uVar1;
  uint uVar2;
  QDir local_58 [8];
  QTypedArrayData<unsigned_short> *local_50;
  QTypedArrayData<unsigned_short> *local_48;
  QString local_40;
  QFileInfo local_38 [8];
  QArrayData *local_30;
  undefined1 local_21;
  
  QFileInfo::QFileInfo(local_38,param_3);
  QFileInfo::dir();
  QDir::absolutePath();
  uVar1 = QDir::separator();
  local_48 = local_50;
  if (1 < *(uint *)local_50 + 1) {
    LOCK();
    *(uint *)local_50 = *(uint *)local_50 + 1;
    local_21 = *(uint *)local_50 != 0;
    UNLOCK();
  }
  uVar2 = *(uint *)(local_50 + 4);
  if ((1 < *(uint *)local_50) || ((*(uint *)(local_50 + 8) & 0x7fffffff) < uVar2 + 2)) {
    QString::reallocData((uint)&local_48,SUB41(uVar2 + 2,0));
    uVar2 = *(uint *)(local_48 + 4);
  }
  *(uint *)(local_48 + 4) = uVar2 + 1;
  *(undefined2 *)(local_48 + (long)(int)uVar2 * 2 + *(long *)(local_48 + 0x10)) = uVar1;
  *(undefined2 *)(local_48 + (long)(int)*(uint *)(local_48 + 4) * 2 + *(long *)(local_48 + 0x10)) =
       0;
  if (1 < *(uint *)local_48 + 1) {
    LOCK();
    *(uint *)local_48 = *(uint *)local_48 + 1;
    local_21 = *(uint *)local_48 != 0;
    UNLOCK();
  }
  local_40.field0_0x0 = local_48;
  QString::append(&local_40);
  param_1->field0_0x0 = local_40.field0_0x0;
  if (1 < *(uint *)local_40.field0_0x0 + 1) {
    LOCK();
    *(uint *)local_40.field0_0x0 = *(uint *)local_40.field0_0x0 + 1;
    local_21 = *(uint *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1db674c);
  QString::append(param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000d82eb;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1000d82eb:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000d831b;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1000d831b:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000d834b;
    }
    QArrayData::deallocate((QArrayData *)local_48,2,8);
  }
LAB_1000d834b:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000d837b;
    }
    QArrayData::deallocate((QArrayData *)local_50,2,8);
  }
LAB_1000d837b:
  QDir::~QDir(local_58);
  QFileInfo::~QFileInfo(local_38);
  return param_1;
}

