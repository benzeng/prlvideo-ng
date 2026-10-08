
undefined8 FUN_100a1c6c0(undefined8 param_1)

{
  QArrayData *local_28;
  undefined1 local_1a;
  
  FUN_100226f20(&local_28);
  FUN_100a1f320(param_1,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return param_1;
      }
      local_1a = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return param_1;
}

