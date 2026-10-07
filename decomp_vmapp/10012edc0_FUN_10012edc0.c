
undefined1 FUN_10012edc0(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  pQVar3 = (QArrayData *)
           QString::fromAscii_helper("vm_guest_set_user_passwd_cmd_user_login_name",0x2c);
  local_30 = pQVar3;
  cVar1 = FUN_10011d720(param_1,&local_30,1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    pQVar4 = (QArrayData *)
             QString::fromAscii_helper("vm_guest_set_user_passwd_cmd_user_passwd",0x28);
    local_38 = pQVar4;
    cVar1 = FUN_10011d720(param_1,&local_38,1);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_10012e390(param_1);
    }
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_21 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10012eea3;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
  }
LAB_10012eea3:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_21 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_21) {
        return uVar2;
      }
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
  return uVar2;
}

