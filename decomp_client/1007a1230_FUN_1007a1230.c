
undefined8 FUN_1007a1230(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 local_48 [56];
  
  FUN_10079df50(local_48);
  FUN_1007a0a60(param_1,local_48);
  FUN_10079e3c0(local_48);
  puVar1 = PTR_shared_null_1021e1288;
  if (*(int *)PTR_shared_null_1021e1288 != -1) {
    if (*(int *)PTR_shared_null_1021e1288 != 0) {
      LOCK();
      *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + -1;
      local_48[0] = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_48[0]) {
        return param_1;
      }
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
  return param_1;
}

