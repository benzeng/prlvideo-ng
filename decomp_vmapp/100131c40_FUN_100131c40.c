
void FUN_100131c40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  QArrayData *pQVar1;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_10011c900(param_1,0,param_4);
  *(undefined4 *)(param_1 + 2) = 0x856;
  *param_1 = &PTR_FUN_100baaff8;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("srv_reg_3rd_party_vm_cmd_path_to_config",0x27);
  local_38 = pQVar1;
  FUN_10011da30(param_1,param_2,&local_38);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100131cc5;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100131cc5:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("srv_reg_3rd_party_vm_cmd_path_to_root_dir",0x29)
  ;
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

