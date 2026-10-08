
undefined8 * FUN_10069de20(undefined8 *param_1,long *param_2)

{
  char cVar1;
  QArrayData *local_30;
  undefined1 local_22;
  undefined1 local_21;
  
  cVar1 = (**(code **)(*param_2 + 0x80))(param_2);
  if (cVar1 == '\0') {
    *param_1 = PTR_shared_null_1021e1288;
  }
  else {
    FUN_10069df10(&local_30,param_2,0);
    if (*(int *)(local_30 + 4) == 0) {
      QAction::text();
    }
    else {
      *param_1 = local_30;
      if (1 < *(int *)local_30 + 1U) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + 1;
        local_22 = *(int *)local_30 != 0;
        UNLOCK();
      }
    }
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_21) {
          return param_1;
        }
      }
      QArrayData::deallocate(local_30,2,8);
    }
  }
  return param_1;
}

