
undefined8 FUN_100797a50(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_shared_null_1021e1288;
  FUN_100798150();
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (*(int *)puVar1 != 0) {
        return param_1;
      }
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
  return param_1;
}

