
QString * FUN_1009c8d90(QString *param_1)

{
  QString local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  FUN_100d814b0(&local_30,0);
  if (*(int *)(local_30 + 4) == 0) goto LAB_1009c8e64;
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_30;
  if (1 < *(int *)local_30 + 1U) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_19 = *(int *)local_30 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_28,0x1e38c8e);
  QString::append(&local_38);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009c8e28;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1009c8e28:
  QString::operator=(param_1,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_19 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009c8e64;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1009c8e64:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return param_1;
}

