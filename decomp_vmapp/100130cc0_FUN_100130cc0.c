
void FUN_100130cc0(undefined8 *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  QArrayData *pQVar1;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_10011c900(param_1,0,param_5);
  *(undefined4 *)(param_1 + 2) = 0x851;
  *param_1 = &PTR_FUN_100baaf80;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("confirmation_mode_cmd_username",0x1e);
  local_40 = pQVar1;
  FUN_10011da30(param_1,param_3,&local_40);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100130d4d;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100130d4d:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("confirmation_mode_cmd_password",0x1e);
  local_48 = pQVar1;
  FUN_10011da30(param_1,param_4,&local_48);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100130d9f;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100130d9f:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("confirmation_mode_cmd_enable_sign",0x21);
  local_50 = pQVar1;
  FUN_10011cae0(param_1,param_2,&local_50);
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

