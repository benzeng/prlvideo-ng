
undefined8 FUN_100d975a0(undefined8 param_1,undefined8 param_2)

{
  QArrayData *local_30;
  undefined1 local_22;
  
  FUN_100d97390(&local_30);
  FUN_100d80240(param_1,param_2,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_22 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return param_1;
}

