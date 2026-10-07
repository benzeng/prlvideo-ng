
void FUN_1001202e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  QArrayData *pQVar1;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_10011fac0(param_1,0x874,param_2,0,param_6);
  *param_1 = &PTR_FUN_100baa9b8;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("copy_image_cmd_image_config",0x1b);
  local_40 = pQVar1;
  FUN_10011da30(param_1,param_3,&local_40);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10012036f;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10012036f:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("copy_image_cmd_new_image_name",0x1d);
  local_48 = pQVar1;
  FUN_10011da30(param_1,param_4,&local_48);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001203c1;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1001203c1:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("copy_image_cmd_target_path",0x1a);
  local_50 = pQVar1;
  FUN_10011da30(param_1,param_5,&local_50);
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

