
undefined8 FUN_100418f80(long param_1)

{
  int iVar1;
  QArrayData *local_30;
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  QByteArray::QByteArray((QByteArray *)&local_28,"",-1);
  local_30 = (QArrayData *)PTR_shared_null_100ba20d0;
  iVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  *(int *)(param_1 + 0x638) = iVar1;
  *(undefined4 *)(param_1 + 0x63c) = 0;
  QString::sprintf((char *)&local_30,"m%.04x",(ulong)(iVar1 + 1));
  QString::toUtf8();
  QByteArray::append((QByteArray *)&local_28);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10041902b;
    }
    QArrayData::deallocate(local_20,1,8);
  }
LAB_10041902b:
  *(int *)(param_1 + 0x638) = *(int *)(param_1 + 0x638) + 1;
  *(int *)(param_1 + 0x63c) = *(int *)(param_1 + 0x63c) + 1;
  FUN_100419170(param_1,&local_28);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100419073;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100419073:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return 1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_28,1,8);
  }
  return 1;
}

