
void FUN_100036700(undefined8 param_1,undefined1 param_2)

{
  Data *local_40 [2];
  QArrayData *local_30;
  undefined1 local_19;
  
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("PRINTING_TOOL","vm",3,"Default Enable = %d",param_2);
  }
  local_40[0] = (Data *)PTR_shared_null_100ba2188;
  local_30 = (QArrayData *)PTR_shared_null_100ba20d0;
  FUN_100034490(param_1,param_2,local_40);
  FUN_1000361a0(param_1,local_40);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000367a2;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1000367a2:
  if (*(int *)local_40[0] != -1) {
    if (*(int *)local_40[0] != 0) {
      LOCK();
      *(int *)local_40[0] = *(int *)local_40[0] + -1;
      UNLOCK();
      if (*(int *)local_40[0] != 0) {
        return;
      }
      local_19 = 0;
    }
    QListData::dispose(local_40[0]);
  }
  return;
}

