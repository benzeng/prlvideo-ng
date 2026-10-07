
undefined1 FUN_10011e3f0(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  QArrayData *pQVar5;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pQVar3 = (QArrayData *)QString::fromAscii_helper("login_cmd_username",0x12);
  local_40 = pQVar3;
  cVar1 = FUN_10011d720(param_1,&local_40,1);
  if (cVar1 == '\0') {
    uVar2 = 0;
    goto LAB_10011e52f;
  }
  pQVar4 = (QArrayData *)QString::fromAscii_helper("login_cmd_password",0x12);
  local_48 = pQVar4;
  cVar1 = FUN_10011d720(param_1,&local_48,1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    pQVar5 = (QArrayData *)QString::fromAscii_helper("login_cmd_session_uuid_to_restore",0x21);
    local_50 = pQVar5;
    uVar2 = FUN_10011d720(param_1,&local_50,1);
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        local_31 = *(int *)pQVar5 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011e502;
      }
      QArrayData::deallocate(pQVar5,2,8);
    }
  }
LAB_10011e502:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10011e52f;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_10011e52f:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return uVar2;
      }
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
  return uVar2;
}

