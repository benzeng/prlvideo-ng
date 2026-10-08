
bool FUN_1001b7bd0(undefined8 param_1)

{
  long lVar1;
  QArrayData *local_20;
  undefined1 local_12;
  
  FUN_100188480(&local_20,param_1);
  lVar1 = FUN_10025b4b0(&local_20);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) goto LAB_1001b7c26;
      local_12 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_1001b7c26:
  return lVar1 != 0;
}

