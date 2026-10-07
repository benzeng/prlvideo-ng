
void FUN_10059f090(undefined4 *param_1)

{
  QString local_20;
  undefined1 local_11;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  param_1[0x10] = 0;
  param_1[7] = 0x200;
  *(undefined8 *)(param_1 + 8) = 0x200;
  FUN_100098f20(param_1 + 10);
  FUN_1007ea1f0(param_1 + 0x11);
  QByteArray::clear();
  FUN_1007ea1f0(param_1 + 0x18);
  if (*(undefined **)(param_1 + 0x1c) != PTR_shared_null_100ba20d0) {
    local_20.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    QString::operator=((QString *)(param_1 + 0x1c),&local_20);
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

