
void FUN_10069a1b0(long param_1)

{
  void *pvVar1;
  QArrayData *local_30;
  undefined1 local_22;
  
  pvVar1 = operator_new(0x80);
  local_30 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_10026b390(pvVar1,*(undefined8 *)(param_1 + 0x28),2,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_22 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_10069a21d;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10069a21d:
  CAbstractTask::execute();
  return;
}

