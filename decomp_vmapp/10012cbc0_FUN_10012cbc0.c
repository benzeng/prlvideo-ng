
void FUN_10012cbc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  QArrayData *pQVar1;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_10011fac0(param_1,0x3f3,param_2,0,param_8);
  *param_1 = &PTR_FUN_100baada0;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("vm_create_snapshot_name",0x17);
  local_40 = pQVar1;
  FUN_10011da30(param_1,param_3,&local_40);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10012cc54;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10012cc54:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("vm_create_snapshot_description",0x1e);
  local_48 = pQVar1;
  FUN_10011da30(param_1,param_4,&local_48);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10012cca6;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10012cca6:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("vm_create_snapshot_uuid",0x17);
  local_50 = pQVar1;
  FUN_10011da30(param_1,param_5,&local_50);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10012ccf8;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10012ccf8:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("vm_create_snapshot_creator",0x1a);
  local_58 = pQVar1;
  FUN_10011da30(param_1,param_6,&local_58);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10012cd4b;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10012cd4b:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("vm_create_snapshot_path",0x17);
  local_60 = pQVar1;
  FUN_10011da30(param_1,param_7,&local_60);
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

