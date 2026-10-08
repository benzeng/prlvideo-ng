
undefined8 FUN_1007055e0(undefined8 param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  QArrayData *local_30;
  undefined1 local_22;
  
  lVar1 = *(long *)(param_2 + 0x10);
  FUN_1006946e0(&local_30,param_3);
  FUN_100707540(param_1,lVar1 + 0x30,&local_30);
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

