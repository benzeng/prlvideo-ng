
void FUN_100132600(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  QArrayData *pQVar1;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_10011c900(param_1,0,param_7);
  *(undefined4 *)(param_1 + 2) = 0x86e;
  *param_1 = &PTR_FUN_100bab048;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("copy_ct_tmpl_proto_version",0x1a);
  local_40 = pQVar1;
  FUN_10011cae0(param_1,1,&local_40);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10013269a;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10013269a:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("copy_ct_tmpl_tmpl_name",0x16);
  local_48 = pQVar1;
  FUN_10011da30(param_1,param_2,&local_48);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001326ec;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1001326ec:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("copy_ct_tmpl_os_tmpl_name",0x19);
  local_50 = pQVar1;
  FUN_10011da30(param_1,param_3,&local_50);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10013273e;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10013273e:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("copy_ct_tmpl_target_server_hostname",0x23);
  local_58 = pQVar1;
  FUN_10011da30(param_1,param_4,&local_58);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100132791;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100132791:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("copy_ct_tmpl_target_server_port",0x1f);
  local_60 = pQVar1;
  FUN_10011cae0(param_1,param_5,&local_60);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001327e3;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1001327e3:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("copy_ct_tmpl_target_server_session_uuid",0x27);
  local_68 = pQVar1;
  FUN_10011da30(param_1,param_6,&local_68);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100132836;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100132836:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("copy_ct_tmpl_reserved_flags",0x1b);
  local_70 = pQVar1;
  FUN_10011cae0(param_1,param_8,&local_70);
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

