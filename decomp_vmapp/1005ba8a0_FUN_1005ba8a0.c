
undefined1 FUN_1005ba8a0(void)

{
  undefined1 uVar1;
  QArrayData *pQVar2;
  QArrayData *local_28;
  QString local_20;
  undefined1 local_11;
  
  QFileInfo::filePath();
  pQVar2 = (QArrayData *)QString::fromAscii_helper(".lck",4);
  local_20.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_28;
  if (1 < *(int *)local_28 + 1U) {
    LOCK();
    *(int *)local_28 = *(int *)local_28 + 1;
    local_11 = *(int *)local_28 != 0;
    UNLOCK();
  }
  QString::append(&local_20);
  uVar1 = QFile::exists(&local_20);
  if (*(int *)local_20.field0_0x0 != -1) {
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      local_11 = *(int *)local_20.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1005ba92c;
    }
    QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
  }
LAB_1005ba92c:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_11 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1005ba95c;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1005ba95c:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return uVar1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return uVar1;
}

