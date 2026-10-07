
void FUN_10012fa50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
                  undefined1 param_9)

{
  QArrayData *pQVar1;
  QArrayData *pQVar2;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_10012f0a0(param_1,0x846,param_2,param_3,param_4,param_5,param_7,param_8,param_9);
  *param_1 = &PTR_FUN_100baaeb8;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("backup_cmd_backup_description",0x1d);
  local_38 = pQVar1;
  FUN_10011da30(param_1,param_6,&local_38);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10012faf6;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10012faf6:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("",0);
  local_40 = pQVar1;
  pQVar2 = (QArrayData *)QString::fromAscii_helper("backup_cmd_backup_uuid",0x16);
  local_48 = pQVar2;
  FUN_10011da30(param_1,&local_40,&local_48);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10012fb5e;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10012fb5e:
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

