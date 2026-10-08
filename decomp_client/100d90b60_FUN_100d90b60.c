
QString * FUN_100d90b60(QString *param_1)

{
  char cVar1;
  QArrayData *local_48;
  QString local_40;
  QString local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  FUN_100d8bea0(&local_40);
  QString::operator=(&local_38,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_19 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d90bbf;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100d90bbf:
  cVar1 = FUN_100d875e0();
  if (cVar1 == '\0') {
    param_1->field0_0x0 = local_38.field0_0x0;
    if (1 < *(int *)local_38.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
      local_19 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_28,0x1efeaeb);
    QString::append(param_1);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        local_19 = *(int *)local_28 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100d90d1f;
      }
      QArrayData::deallocate(local_28,2,8);
    }
    goto LAB_100d90d1f;
  }
  QCoreApplication::applicationDirPath();
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)local_48;
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_19 = *(int *)local_48 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1efeab0);
  QString::append(param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d90c3e;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100d90c3e:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d90d1f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d90d1f:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return param_1;
}

