
void FUN_100124130(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  QArrayData *pQVar1;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_10011fac0();
  *param_1 = &PTR_FUN_100baabc0;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("vm_dev_cmd_device_type",0x16);
  local_40 = pQVar1;
  FUN_10011cae0(param_1,param_4,&local_40);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001241b5;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1001241b5:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("vm_dev_cmd_device_index",0x17);
  local_48 = pQVar1;
  FUN_10011cae0(param_1,param_5,&local_48);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100124207;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100124207:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("vm_dev_cmd_device_config",0x18);
  local_50 = pQVar1;
  FUN_10011da30(param_1,param_6,&local_50);
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

