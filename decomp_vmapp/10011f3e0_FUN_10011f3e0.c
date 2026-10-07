
void FUN_10011f3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  QArrayData *pQVar1;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  pQVar1 = (QArrayData *)QString::fromAscii_helper("vm_create_cmd_vm_config",0x17);
  local_38 = pQVar1;
  FUN_10011da30(param_1,param_2,&local_38);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10011f44e;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10011f44e:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("vm_create_cmd_vm_home_path",0x1a);
  local_40 = pQVar1;
  FUN_10011da30(param_1,param_3,&local_40);
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

