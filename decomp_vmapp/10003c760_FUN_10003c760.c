
void FUN_10003c760(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  Data *local_40;
  undefined4 local_34;
  Data *local_30;
  undefined1 local_21;
  
  puVar1 = PTR_shared_null_100ba2188;
  local_30 = (Data *)PTR_shared_null_100ba2188;
  local_34 = 0x9050;
  FUN_10003cd80(&local_30,&local_34);
  local_40 = (Data *)puVar1;
  FUN_10051bb70(param_1,param_2,&local_30,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10003c7cf;
    }
    QListData::dispose(local_40);
  }
LAB_10003c7cf:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10003c7f5;
    }
    QListData::dispose(local_30);
  }
LAB_10003c7f5:
  *param_1 = &PTR_FUN_100ba7ec8;
  param_1[5] = &PTR_FUN_100ba7f58;
  param_1[0x16] = PTR_shared_null_100ba20d0;
  QMutex::QMutex((QMutex *)(param_1 + 0x17),0);
  param_1[0x15] = *(undefined8 *)(param_2 + 0x20);
  FUN_1004c0790(param_1,0x9050,0x9050);
  FUN_10051a6b0(DAT_1011c3698 + 0x10f0,0x11,param_1 + 5);
  return;
}

