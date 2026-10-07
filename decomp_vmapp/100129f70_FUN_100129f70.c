
void FUN_100129f70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined4 param_9,undefined1 param_10)

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
  
  FUN_10011fac0(param_1,0x7ec,param_2,param_10,param_8);
  *param_1 = &PTR_FUN_100baac88;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("migrate_proto_version",0x15);
  local_40 = pQVar1;
  FUN_10011cae0(param_1,1,&local_40);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10012a00b;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10012a00b:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("migrate_cmd_target_server_hostname",0x22);
  local_48 = pQVar1;
  FUN_10011da30(param_1,param_3,&local_48);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10012a05d;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10012a05d:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("migrate_cmd_target_server_port",0x1e);
  local_50 = pQVar1;
  FUN_10011cae0(param_1,param_4,&local_50);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10012a0af;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10012a0af:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("migrate_cmd_target_server_session_uuid",0x26);
  local_58 = pQVar1;
  FUN_10011da30(param_1,param_5,&local_58);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10012a102;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10012a102:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("migrate_cmd_target_vm_name",0x1a);
  local_60 = pQVar1;
  FUN_10011da30(param_1,param_6,&local_60);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10012a155;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10012a155:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("migrate_cmd_target_vm_home_path",0x1f);
  local_68 = pQVar1;
  FUN_10011da30(param_1,param_7,&local_68);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10012a1a8;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10012a1a8:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("migrate_cmd_reserved_flags",0x1a);
  local_70 = pQVar1;
  FUN_10011cae0(param_1,param_9,&local_70);
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

