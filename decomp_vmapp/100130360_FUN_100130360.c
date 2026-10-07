
void FUN_100130360(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  QArrayData *pQVar1;
  QArrayData *local_30;
  undefined1 local_22;
  
  FUN_10012f0a0(param_1,0x848,param_2);
  *param_1 = &PTR_FUN_100baaf08;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("backup_cmd_backup_uuid",0x16);
  local_30 = pQVar1;
  FUN_10011da30(param_1,param_3,&local_30);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_22 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_22) {
        return;
      }
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return;
}

