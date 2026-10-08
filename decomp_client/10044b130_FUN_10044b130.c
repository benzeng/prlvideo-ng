
undefined8 FUN_10044b130(undefined8 param_1,undefined8 param_2)

{
  QArrayData *local_28;
  Data *local_20;
  undefined1 local_11;
  
  local_28 = (QArrayData *)PTR_shared_null_1021e1288;
  local_20 = (Data *)PTR_shared_null_1021e15e8;
  qt_qFindChildren_helper(param_2,&local_28,PTR_staticMetaObject_1021e1540,&local_20,1);
  FUN_1003bb600(param_1,&local_20);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10044b1a4;
    }
    QListData::dispose(local_20);
  }
LAB_10044b1a4:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return param_1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return param_1;
}

