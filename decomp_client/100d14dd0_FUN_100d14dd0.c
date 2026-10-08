
void FUN_100d14dd0(undefined1 *param_1)

{
  QString local_28;
  undefined1 local_1a;
  
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 1;
  *(undefined8 *)(param_1 + 4) = 0x1000000000;
  *(undefined4 *)(param_1 + 0xc) = 0x3f;
  local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("disk.hdd",8);
  QString::operator=((QString *)(param_1 + 0x10),&local_28);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) goto LAB_100d14e53;
      local_1a = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_100d14e53:
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}

