
void FUN_100120960(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  QArrayData *pQVar1;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_10011c900(param_1,0,0);
  *(undefined4 *)(param_1 + 2) = 0x80b;
  *param_1 = &PTR_FUN_100baa9e0;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("fs_rename_entry_cmd_old_entry_name",0x22);
  local_38 = pQVar1;
  FUN_10011da30(param_1,param_2,&local_38);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001209e5;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1001209e5:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("fs_rename_entry_cmd_new_entry_name",0x22);
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

