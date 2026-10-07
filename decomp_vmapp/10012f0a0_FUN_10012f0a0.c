
void FUN_10012f0a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  QArrayData *pQVar1;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_10011fac0();
  *param_1 = &PTR_FUN_100baae90;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("backup_proto_version",0x14);
  local_40 = pQVar1;
  FUN_10011cae0(param_1,3,&local_40);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10012f129;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10012f129:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("backup_cmd_server_hostname",0x1a);
  local_48 = pQVar1;
  FUN_10011da30(param_1,param_4,&local_48);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10012f17b;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10012f17b:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("backup_cmd_server_port",0x16);
  local_50 = pQVar1;
  FUN_10011cae0(param_1,param_5,&local_50);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10012f1cd;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10012f1cd:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("backup_cmd_server_session_uuid",0x1e);
  local_58 = pQVar1;
  FUN_10011da30(param_1,param_6,&local_58);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10012f21f;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10012f21f:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("backup_cmd_reserved_flags",0x19);
  local_60 = pQVar1;
  FUN_10011cae0(param_1,param_8,&local_60);
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

