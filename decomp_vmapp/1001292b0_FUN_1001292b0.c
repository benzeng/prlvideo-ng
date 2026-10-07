
void FUN_1001292b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  QArrayData *pQVar1;
  QArrayData *local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_10011c900(param_1,0,0);
  *(undefined4 *)(param_1 + 2) = 0x835;
  *param_1 = &PTR_FUN_100baac38;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("fs_generate_entry_name_cmd_dirpath",0x22);
  local_40 = pQVar1;
  FUN_10011da30(param_1,param_2,&local_40);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100129340;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100129340:
  pQVar1 = (QArrayData *)
           QString::fromAscii_helper("fs_generate_entry_name_cmd_filename_prefix",0x2a);
  local_48 = pQVar1;
  FUN_10011da30(param_1,param_3,&local_48);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100129392;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100129392:
  pQVar1 = (QArrayData *)
           QString::fromAscii_helper("fs_generate_entry_name_cmd_filename_suffix",0x2a);
  local_50 = pQVar1;
  FUN_10011da30(param_1,param_4,&local_50);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001293e4;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1001293e4:
  QString::fromUtf8_helper((char *)&local_58,0x9fc2e2);
  QString::append(&local_58);
  pQVar1 = (QArrayData *)
           QString::fromAscii_helper("fs_generate_entry_name_cmd_index_delimiter",0x2a);
  local_60 = pQVar1;
  FUN_10011da30(param_1,&local_58,&local_60);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100129459;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100129459:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_58.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
  return;
}

