
void FUN_10012fd80(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  QArrayData *pQVar1;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  FUN_10012f0a0(param_1,0x847,param_2);
  *param_1 = &PTR_FUN_100baaee0;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("backup_cmd_backup_uuid",0x16);
  local_30 = pQVar1;
  FUN_10011da30(param_1,param_3,&local_30);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_21 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10012fe14;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10012fe14:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("backup_cmd_target_vm_home_path",0x1e);
  local_38 = pQVar1;
  FUN_10011da30(param_1,in_stack_00000008,&local_38);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_21 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10012fe67;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10012fe67:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("backup_cmd_target_vm_name",0x19);
  local_40 = pQVar1;
  FUN_10011da30(param_1,in_stack_00000010,&local_40);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_21 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_21) {
        return;
      }
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return;
}

