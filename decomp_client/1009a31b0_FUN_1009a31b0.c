
QString * FUN_1009a31b0(QString *param_1)

{
  QArrayData *local_58;
  QString local_50;
  QDir local_48 [8];
  QString local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QCoreApplication::applicationDirPath();
  QDir::QDir(local_48,&local_40);
  QDir::cdUp();
  QDir::cdUp();
  QDir::absolutePath();
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_58;
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_21 = *(int *)local_58 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1e2468c);
  QString::append(&local_50);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a3262;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1009a3262:
  param_1->field0_0x0 = local_50.field0_0x0;
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_21 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1de6f1d);
  QString::append(param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a32cb;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1009a32cb:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_21 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a32fb;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1009a32fb:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a332b;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1009a332b:
  QDir::~QDir(local_48);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return param_1;
}

