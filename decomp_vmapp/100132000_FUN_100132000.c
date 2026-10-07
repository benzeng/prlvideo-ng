
undefined8 FUN_100132000(undefined8 param_1,undefined8 param_2)

{
  QArrayData *pQVar1;
  QArrayData *local_30;
  undefined1 local_22;
  
  pQVar1 = (QArrayData *)QString::fromAscii_helper("srv_reg_3rd_party_vm_cmd_path_to_root_dir",0x29)
  ;
  local_30 = pQVar1;
  FUN_10011cdb0(param_1,param_2,&local_30);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_22 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_22) {
        return param_1;
      }
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return param_1;
}

