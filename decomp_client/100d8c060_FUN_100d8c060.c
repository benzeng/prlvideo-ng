
undefined8 * FUN_100d8c060(undefined8 *param_1)

{
  int *piVar1;
  QDir local_40 [8];
  QString local_38;
  QString local_30;
  QArrayData *local_28;
  char local_20;
  undefined7 uStack_1f;
  undefined1 local_11;
  
  QCoreApplication::applicationDirPath();
  QString::fromUtf8_helper((char *)&local_28,0x1dc1b8b);
  QString::append(&local_30);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100d8c0c7;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100d8c0c7:
  QDir::QDir(local_40,&local_30);
  QDir::absolutePath();
  QString::operator=(&local_30,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_11 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100d8c11e;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100d8c11e:
  QDir::~QDir(local_40);
  QString::fromUtf8_helper(&local_20,0x1efe6fd);
  QString::append(&local_30);
  piVar1 = (int *)CONCAT71(uStack_1f,local_20);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      local_11 = *piVar1 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100d8c179;
    }
    QArrayData::deallocate((QArrayData *)CONCAT71(uStack_1f,local_20),2,8);
  }
LAB_100d8c179:
  *param_1 = local_30.field0_0x0;
  if (1 < *(int *)local_30.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
    local_20 = *(int *)local_30.field0_0x0 != 0;
    UNLOCK();
  }
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return param_1;
      }
      local_20 = '\0';
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return param_1;
}

