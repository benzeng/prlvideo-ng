
byte FUN_100113820(long *param_1,long *param_2)

{
  byte extraout_var;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  (**(code **)(*param_1 + 0xa8))(&local_30,param_1);
  QString::trimmed();
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100113880;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100113880:
  (**(code **)(*param_2 + 0xa8))(&local_40,param_2);
  QString::trimmed();
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001138d0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001138d0:
  QString::compare(&local_28,&local_38,0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100113911;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100113911:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) goto LAB_100113941;
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100113941:
  return extraout_var >> 7;
}

