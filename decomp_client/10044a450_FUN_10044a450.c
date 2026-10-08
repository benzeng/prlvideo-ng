
void FUN_10044a450(long param_1)

{
  long lVar1;
  long lVar2;
  QArrayData *local_48;
  Data *local_40;
  Data *local_38;
  Data *local_30;
  Data *local_28;
  int local_20;
  undefined1 local_11;
  
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  qt_qFindChildren_helper
            (*(undefined8 *)(param_1 + 0x10),&local_48,PTR_staticMetaObject_1021e1540,&local_40,1);
  local_38 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_38);
      lVar1 = (long)*(int *)(local_38 + 8);
      if ((local_40 + (long)*(int *)(local_40 + 8) * 8 != local_38 + lVar1 * 8) &&
         (lVar2 = *(int *)(local_38 + 0xc) - lVar1, lVar2 != 0 && lVar1 <= *(int *)(local_38 + 0xc))
         ) {
        _memcpy(local_38 + lVar1 * 8 + 0x10,local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,
                lVar2 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  local_30 = local_38 + (long)*(int *)(local_38 + 8) * 8 + 0x10;
  local_28 = local_38 + (long)*(int *)(local_38 + 0xc) * 8 + 0x10;
  local_20 = 1;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10044a53d;
    }
    QListData::dispose(local_40);
  }
LAB_10044a53d:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_11 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10044a56d;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10044a56d:
  if (local_20 != 0) {
    for (; local_30 != local_28; local_30 = local_30 + 8) {
      FUN_10044a6b0(param_1,*(undefined8 *)local_30);
      local_20 = 1;
    }
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_11 = 0;
    }
    QListData::dispose(local_38);
  }
  return;
}

