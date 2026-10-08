
QString * FUN_100d86520(QString *param_1)

{
  QTypedArrayData<unsigned_short> *local_40;
  QString local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  FUN_100d86380(&local_40);
  local_38.field0_0x0 = local_40;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_19 = *(int *)local_40 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1e2468c);
  QString::append(&local_38);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d865a2;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100d865a2:
  param_1->field0_0x0 = local_38.field0_0x0;
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_19 = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_28,0x1efe3d6);
  QString::append(param_1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d8660b;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100d8660b:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_19 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d8663b;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100d8663b:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40,2,8);
  }
  return param_1;
}

