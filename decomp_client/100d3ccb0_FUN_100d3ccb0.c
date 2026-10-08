
void FUN_100d3ccb0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *local_28;
  undefined1 local_1a;
  
  puVar1 = PTR_shared_null_1021e15e8;
  local_28 = PTR_shared_null_1021e15e8;
  FUN_100d3ce50(param_1,&local_28);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_1a = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_1a) {
        return;
      }
    }
    QListData::dispose((Data *)PTR_shared_null_1021e15e8);
  }
  return;
}

