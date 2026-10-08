
void FUN_100d15970(undefined1 *param_1)

{
  QString local_28;
  QString local_20;
  undefined1 local_11;
  
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 1;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  param_1[3] = 0;
  if (*(undefined **)(param_1 + 8) != PTR_shared_null_1021e1288) {
    local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    QString::operator=((QString *)(param_1 + 8),&local_28);
    if (*(int *)local_28.field0_0x0 != -1) {
      if (*(int *)local_28.field0_0x0 != 0) {
        LOCK();
        *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
        local_11 = *(int *)local_28.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_100d159e7;
      }
      QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
    }
  }
LAB_100d159e7:
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  if (*(undefined **)(param_1 + 0x18) != PTR_shared_null_1021e1288) {
    local_20.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    QString::operator=((QString *)(param_1 + 0x18),&local_20);
    if (*(int *)local_20.field0_0x0 != -1) {
      if (*(int *)local_20.field0_0x0 != 0) {
        LOCK();
        *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_20.field0_0x0 != 0) {
          return;
        }
        local_11 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
    }
  }
  return;
}

