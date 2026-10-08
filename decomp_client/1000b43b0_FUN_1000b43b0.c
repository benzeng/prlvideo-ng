
void FUN_1000b43b0(void)

{
  QArrayData *local_28;
  QString local_20;
  undefined1 local_11;
  
  local_20.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("hdiutil eject ",0xe);
  QString::append(&local_20);
  QString::toUtf8();
  _system((char *)(local_28 + *(long *)(local_28 + 0x10)));
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1000b4427;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_1000b4427:
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
  return;
}

