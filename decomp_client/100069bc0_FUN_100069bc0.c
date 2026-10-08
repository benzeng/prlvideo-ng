
undefined8 FUN_100069bc0(undefined8 param_1)

{
  QArrayData *local_30;
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  local_28 = (QArrayData *)QString::fromAscii_helper("bash \"%1\"",9);
  FUN_100d95780(&local_30);
  QString::arg(&local_20,&local_28,&local_30,0,0x20);
  FUN_1000699b0(param_1,&local_20);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100069c3f;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_100069c3f:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100069c6f;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100069c6f:
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

