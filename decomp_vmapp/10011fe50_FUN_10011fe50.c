
void FUN_10011fe50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  QArrayData *pQVar1;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_10011fac0(param_1,0x7f0,param_2,param_5,0);
  *param_1 = &PTR_FUN_100baa990;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("create_image_cmd_image_config",0x1d);
  local_38 = pQVar1;
  FUN_10011da30(param_1,param_3,&local_38);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10011fedb;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10011fedb:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("create_image_cmd_recreate_sign",0x1e);
  local_40 = pQVar1;
  FUN_10011cae0(param_1,param_4,&local_40);
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

