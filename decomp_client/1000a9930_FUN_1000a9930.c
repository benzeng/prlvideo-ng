
bool FUN_1000a9930(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  QMutex::lock();
  lVar2 = DAT_1023108a8;
  if (DAT_1023108a8 == 0) {
    QMutex::unlock();
    return false;
  }
  DAT_1023108b0 = DAT_1023108b0 + 1;
  QMutex::unlock();
  local_28 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_1000b0fc0(lVar2,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000a99b3;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1000a99b3:
  FUN_1000a9a70(&local_30,lVar2,param_1);
  iVar1 = *(int *)(local_30 + 4);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000a99f1;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1000a99f1:
  FUN_100055290(&DAT_102310898);
  return iVar1 != 0;
}

