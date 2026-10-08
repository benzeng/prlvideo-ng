
undefined1 FUN_100b561b0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  QArrayData *local_20;
  undefined1 local_12;
  
  local_20 = (QArrayData *)PTR_shared_null_1021e1288;
  uVar1 = FUN_100b55960(param_1,param_2,&local_20);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return uVar1;
      }
      local_12 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return uVar1;
}

