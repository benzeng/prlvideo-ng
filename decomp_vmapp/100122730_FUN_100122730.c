
void FUN_100122730(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,uint param_6)

{
  QArrayData *pQVar1;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_10011fac0(param_1,0x7e9,param_2,0,param_6);
  *param_1 = &PTR_FUN_100baaaa8;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("vm_clone_cmd_vm_name",0x14);
  local_40 = pQVar1;
  FUN_10011da30(param_1,param_3,&local_40);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001227c7;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1001227c7:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("vm_clone_cmd_create_template",0x1c);
  local_48 = pQVar1;
  FUN_10011cae0(param_1,param_6 & 0x800,&local_48);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100122822;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100122822:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("vm_create_cmd_vm_home_path",0x1a);
  local_50 = pQVar1;
  FUN_10011da30(param_1,param_4,&local_50);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100122874;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100122874:
  if (*(int *)(*param_5 + 4) != 0) {
    pQVar1 = (QArrayData *)QString::fromAscii_helper("vm_clone_cmd_snapshot_uuid",0x1a);
    local_58 = pQVar1;
    FUN_10011da30(param_1,param_5,&local_58);
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
  }
  return;
}

