
void FUN_1007d0bb0(undefined8 param_1,undefined8 param_2)

{
  QArrayData *local_20;
  undefined1 local_12;
  
  local_20 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_1007d0c60(param_1,param_2,&local_20);
  FUN_1007d1110(param_1,&local_20);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return;
      }
      local_12 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return;
}

