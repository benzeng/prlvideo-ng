
void FUN_1001220b0(undefined8 *param_1,undefined8 param_2)

{
  QArrayData *pQVar1;
  undefined4 in_R9D;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_100120de0(param_1,0x822);
  *param_1 = &PTR_FUN_100baaa58;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("basic_vm_cmd_vm_uuid",0x14);
  local_38 = pQVar1;
  FUN_10011da30(param_1,param_2,&local_38);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100122131;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100122131:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("create_unattended_cmd_guest_distro_type",0x27);
  local_40 = pQVar1;
  FUN_10011cae0(param_1,in_R9D,&local_40);
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

