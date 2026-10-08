
void FUN_100d14bf0(undefined1 *param_1)

{
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 1;
  *(undefined4 *)(param_1 + 4) = 0;
  local_30.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("floppy.fdd",10);
  QString::operator=((QString *)(param_1 + 8),&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_19 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d14c65;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_100d14c65:
  if (*(undefined **)(param_1 + 0x10) != PTR_shared_null_1021e1288) {
    local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    QString::operator=((QString *)(param_1 + 0x10),&local_28);
    if (*(int *)local_28.field0_0x0 != -1) {
      if (*(int *)local_28.field0_0x0 != 0) {
        LOCK();
        *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_28.field0_0x0 != 0) {
          return;
        }
        local_19 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
    }
  }
  return;
}

