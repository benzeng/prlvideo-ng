
void FUN_1000475b0(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 local_48;
  undefined4 local_44;
  Data *local_40;
  undefined4 local_38;
  undefined4 local_34;
  Data *local_30;
  undefined1 local_21;
  
  puVar1 = PTR_shared_null_100ba2188;
  local_30 = (Data *)PTR_shared_null_100ba2188;
  local_34 = 0x9040;
  FUN_10003cd80(&local_30,&local_34);
  local_38 = 0x9042;
  FUN_10003cd80(&local_30,&local_38);
  local_40 = (Data *)puVar1;
  local_44 = 0x9041;
  FUN_10003cd80(&local_40,&local_44);
  local_48 = 0x9043;
  FUN_10003cd80(&local_40,&local_48);
  FUN_10051bb70(param_1,param_2,&local_30,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10004765b;
    }
    QListData::dispose(local_40);
  }
LAB_10004765b:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100047681;
    }
    QListData::dispose(local_30);
  }
LAB_100047681:
  *param_1 = &PTR_FUN_100ba81d8;
  param_1[5] = &PTR_FUN_100ba8268;
  FUN_1004c0790(param_1,0x9040,0x9043);
  FUN_10051a6b0(DAT_1011c3698 + 0x10f0,0x10,param_1 + 5);
  return;
}

