
void FUN_100120de0(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  QArrayData *pQVar1;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_10011c900(param_1,0,param_6);
  *(undefined4 *)(param_1 + 2) = param_2;
  *param_1 = &PTR_FUN_100baaa08;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("serial_num_cmd_user_name",0x18);
  local_40 = pQVar1;
  FUN_10011da30(param_1,param_3,&local_40);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100120e6b;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100120e6b:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("serial_num_cmd_company_name",0x1b);
  local_48 = pQVar1;
  FUN_10011da30(param_1,param_4,&local_48);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100120ebd;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100120ebd:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("serial_num_cmd_serial_number",0x1c);
  local_50 = pQVar1;
  FUN_10011da30(param_1,param_5,&local_50);
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

