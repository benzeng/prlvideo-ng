
void FUN_10012ec20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  QArrayData *pQVar1;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_10012e290(param_1,0x416,param_2,param_3,param_6);
  *param_1 = &PTR_FUN_100baae68;
  pQVar1 = (QArrayData *)
           QString::fromAscii_helper("vm_guest_set_user_passwd_cmd_user_login_name",0x2c);
  local_38 = pQVar1;
  FUN_10011da30(param_1,param_4,&local_38);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10012ecad;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10012ecad:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("vm_guest_set_user_passwd_cmd_user_passwd",0x28);
  local_40 = pQVar1;
  FUN_10011da30(param_1,param_5,&local_40);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) {
        return;
      }
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return;
}

