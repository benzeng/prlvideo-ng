
undefined8 FUN_10069df10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *local_28;
  undefined1 local_1a;
  
  puVar1 = PTR_shared_null_1021e1288;
  local_28 = PTR_shared_null_1021e1288;
  FUN_10069ef80(param_1,param_2,"get%1Text",&local_28,param_3);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_1a = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_1a) {
        return param_1;
      }
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
  return param_1;
}

