
long FUN_1005042c0(undefined8 param_1)

{
  long lVar1;
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  lVar1 = 0;
  FUN_100503d00(&local_20,param_1,0);
  if (*(int *)(local_20 + 4) != 0) {
    FUN_100503e00(&local_28,&local_20);
    lVar1 = (long)*(int *)(local_28 + 4);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        local_11 = *(int *)local_28 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_100504323;
      }
      QArrayData::deallocate(local_28,1,8);
    }
  }
LAB_100504323:
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return lVar1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return lVar1;
}

