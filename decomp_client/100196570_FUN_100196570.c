
undefined8 FUN_100196570(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  Data *local_30;
  undefined8 local_28;
  undefined1 local_19;
  
  local_30 = (Data *)PTR_shared_null_1021e15e8;
  local_28 = param_2;
  FUN_10019ac70(&local_30,&local_28);
  uVar1 = FUN_1001963b0(param_1,&local_30,param_3);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return uVar1;
      }
      local_19 = 0;
    }
    QListData::dispose(local_30);
  }
  return uVar1;
}

