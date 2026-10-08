
void FUN_100699d80(long param_1)

{
  void *pvVar1;
  QArrayData *local_30;
  undefined1 local_22;
  
  pvVar1 = operator_new(0x80);
  local_30 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_10026b390(pvVar1,*(undefined8 *)(param_1 + 0x28),3,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_22 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_100699ded;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100699ded:
  CAbstractTask::execute();
  return;
}

