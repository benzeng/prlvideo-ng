
void FUN_1001333b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  QArrayData *pQVar1;
  QArrayData *local_30;
  undefined1 local_22;
  
  FUN_10011fac0(param_1,0x87b,param_2,0,param_4);
  *param_1 = &PTR_FUN_100bab070;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("vm_create_cmd_vm_home_path",0x1a);
  local_30 = pQVar1;
  FUN_10011da30(param_1,param_3,&local_30);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_22 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_22) {
        return;
      }
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return;
}

