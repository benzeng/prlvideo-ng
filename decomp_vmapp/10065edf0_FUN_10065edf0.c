
void FUN_10065edf0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *local_28;
  undefined1 local_1a;
  
  puVar1 = PTR_shared_null_100ba2188;
  local_28 = PTR_shared_null_100ba2188;
  FUN_10065ebb0(param_1,&local_28);
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
    QListData::dispose((Data *)PTR_shared_null_100ba2188);
  }
  return;
}

