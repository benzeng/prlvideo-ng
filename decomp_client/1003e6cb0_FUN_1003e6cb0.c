
undefined4 FUN_1003e6cb0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  QArrayData *local_30;
  undefined1 local_22;
  
  QMetaObject::normalizedType((char *)&local_30);
  uVar1 = FUN_1003e6d70(&local_30,param_2,param_3);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return uVar1;
      }
      local_22 = 0;
    }
    QArrayData::deallocate(local_30,1,8);
  }
  return uVar1;
}

