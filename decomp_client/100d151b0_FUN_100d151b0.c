
void FUN_100d151b0(undefined1 *param_1)

{
  QString local_20;
  undefined1 local_12;
  
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 1;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  local_20.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("serial.txt",10);
  QString::operator=((QString *)(param_1 + 8),&local_20);
  if (*(int *)local_20.field0_0x0 != -1) {
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_20.field0_0x0 != 0) {
        return;
      }
      local_12 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
  }
  return;
}

