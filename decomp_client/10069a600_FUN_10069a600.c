
void FUN_10069a600(long param_1)

{
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  local_20 = (QArrayData *)PTR_shared_null_1021e1288;
  local_28 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_100193360(*(undefined8 *)(param_1 + 0x28),&local_20,&local_28,0x1c9);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10069a65e;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10069a65e:
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
    QArrayData::deallocate(local_20,2,8);
  }
  return;
}

