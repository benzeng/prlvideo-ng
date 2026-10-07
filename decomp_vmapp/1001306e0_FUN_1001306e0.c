
void FUN_1001306e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  QArrayData *pQVar1;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_10011fac0(param_1,0x850,param_2,0,0);
  *param_1 = &PTR_FUN_100baaf58;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("vm_resize_disk_image",0x14);
  local_40 = pQVar1;
  FUN_10011da30(param_1,param_3,&local_40);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10013076f;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10013076f:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("vm_resize_disk_size",0x13);
  local_48 = pQVar1;
  FUN_10011cae0(param_1,param_4,&local_48);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001307c1;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1001307c1:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("vm_resize_disk_reserved_flags",0x1d);
  local_50 = pQVar1;
  FUN_10011cae0(param_1,param_5,&local_50);
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

