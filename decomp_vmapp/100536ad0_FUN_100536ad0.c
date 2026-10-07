
bool FUN_100536ad0(long param_1,QString *param_2)

{
  char cVar1;
  bool bVar2;
  QDir local_40 [8];
  QArrayData *local_38;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  QString::QString(&local_30,0x2f);
  local_28.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 8);
  if (1 < *(int *)local_28.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + 1;
    local_19 = *(int *)local_28.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_28);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_19 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100536b45;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_100536b45:
  QDir::QDir(local_40,param_2);
  QDir::canonicalPath();
  QDir::~QDir(local_40);
  cVar1 = QString::endsWith(&local_38,0x2f,1);
  if (cVar1 != '\0') {
    QString::chop((int)&local_38);
  }
  bVar2 = true;
  if ((*(int *)(local_38 + 4) < *(int *)(local_28.field0_0x0 + 4)) &&
     (cVar1 = QString::startsWith(&local_28,&local_38,1), cVar1 != '\0')) {
    bVar2 = *(short *)(local_28.field0_0x0 +
                      (long)*(int *)(local_38 + 4) * 2 + *(long *)(local_28.field0_0x0 + 0x10)) !=
            0x2f;
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100536bfa;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100536bfa:
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return bVar2;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return bVar2;
}

