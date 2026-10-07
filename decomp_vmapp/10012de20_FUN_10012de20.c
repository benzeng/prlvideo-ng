
void FUN_10012de20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  QArrayData *pQVar1;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_10011fac0();
  *param_1 = &PTR_FUN_100baadf0;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("vm_login_in_guest_cmd_user_login",0x20);
  local_38 = pQVar1;
  FUN_10011da30(param_1,param_4,&local_38);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10012de9e;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10012de9e:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("vm_login_in_guest_cmd_user_password",0x23);
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

