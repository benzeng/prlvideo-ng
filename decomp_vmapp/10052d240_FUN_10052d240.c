
undefined4 FUN_10052d240(undefined8 param_1)

{
  undefined1 local_38 [4];
  undefined4 local_34;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_11;
  
  FUN_10052cd00(local_38,param_1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10052d28b;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10052d28b:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return local_34;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return local_34;
}

