
void FUN_100acea00(undefined8 param_1,char *param_2,int param_3)

{
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  QByteArray::QByteArray((QByteArray *)&local_20,param_2,param_3);
  local_28 = local_20;
  if (1 < *(int *)local_20 + 1U) {
    LOCK();
    *(int *)local_20 = *(int *)local_20 + 1;
    local_11 = *(int *)local_20 != 0;
    UNLOCK();
  }
  FUN_100ae24b0(param_1,0,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100acea6c;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_100acea6c:
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_20,1,8);
  }
  return;
}

