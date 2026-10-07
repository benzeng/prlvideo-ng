
void FUN_10011e1b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  QArrayData *pQVar1;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_10011c900(param_1,0,param_5);
  *(undefined4 *)(param_1 + 2) = 0x7f7;
  *param_1 = &PTR_FUN_100baa8a0;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("login_cmd_username",0x12);
  local_40 = pQVar1;
  FUN_10011da30(param_1,param_2,&local_40);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10011e23d;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10011e23d:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("login_cmd_password",0x12);
  local_48 = pQVar1;
  FUN_10011da30(param_1,param_3,&local_48);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10011e28f;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10011e28f:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("login_cmd_session_uuid_to_restore",0x21);
  local_50 = pQVar1;
  FUN_10011da30(param_1,param_4,&local_50);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
      }
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return;
}

