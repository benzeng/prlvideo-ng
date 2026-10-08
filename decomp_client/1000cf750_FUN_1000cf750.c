
void FUN_1000cf750(undefined8 param_1)

{
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  QString::toUtf8();
  local_28 = (QArrayData *)PTR_shared_null_1021e1288;
  QByteArray::resize((int)&local_28);
  QByteArray::append((char *)&local_28,(int)*(undefined8 *)(local_20 + 0x10) + (int)local_20);
  if ((1 < *(uint *)local_28) || (*(long *)(local_28 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_28,*(uint *)(local_28 + 4) + 1,*(uint *)(local_28 + 8) >> 0x1f);
  }
  FUN_1000c4970(param_1,0x90,local_28 + *(long *)(local_28 + 0x10),*(uint *)(local_28 + 4));
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1000cf806;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_1000cf806:
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_20,1,8);
  }
  return;
}

