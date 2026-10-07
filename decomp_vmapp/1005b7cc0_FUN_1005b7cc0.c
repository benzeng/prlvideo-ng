
undefined8 FUN_1005b7cc0(void)

{
  QArrayData *pQVar1;
  QArrayData *local_28;
  QString local_20;
  undefined1 local_11;
  
  QFileInfo::filePath();
  pQVar1 = (QArrayData *)QString::fromAscii_helper(".lck",4);
  local_20.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_28;
  if (1 < *(int *)local_28 + 1U) {
    LOCK();
    *(int *)local_28 = *(int *)local_28 + 1;
    local_11 = *(int *)local_28 != 0;
    UNLOCK();
  }
  QString::append(&local_20);
  QFile::remove(&local_20);
  if (*(int *)local_20.field0_0x0 != -1) {
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      local_11 = *(int *)local_20.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1005b7d4a;
    }
    QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
  }
LAB_1005b7d4a:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_11 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1005b7d7a;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1005b7d7a:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return 0;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return 0;
}

