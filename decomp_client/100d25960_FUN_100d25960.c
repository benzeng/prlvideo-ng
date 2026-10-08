
undefined8 * FUN_100d25960(undefined8 *param_1,undefined8 *param_2,QString *param_3)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  char cVar2;
  QString local_58;
  QString local_50;
  QFileInfo local_48 [8];
  QFileInfo local_40 [8];
  QArrayData *local_38;
  undefined1 local_29;
  
  QFileInfo::QFileInfo(local_40,param_3);
  cVar2 = QFileInfo::isRelative();
  QFileInfo::~QFileInfo(local_40);
  if (cVar2 == '\0') {
    pQVar1 = param_3->field0_0x0;
    *param_1 = pQVar1;
    if (*(int *)pQVar1 + 1U < 2) {
      return param_1;
    }
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
    return param_1;
  }
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
  if (1 < *(int *)local_58.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
    local_29 = *(int *)local_58.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1e2468c);
  QString::append(&local_58);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d25a0d;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100d25a0d:
  local_50.field0_0x0 = local_58.field0_0x0;
  if (1 < *(int *)local_58.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
    local_29 = *(int *)local_58.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_50);
  QFileInfo::QFileInfo(local_48,&local_50);
  QFileInfo::absoluteFilePath();
  QFileInfo::~QFileInfo(local_48);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_29 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d25a84;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100d25a84:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_58.field0_0x0 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
  return param_1;
}

