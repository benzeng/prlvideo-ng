
void FUN_100121450(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  QArrayData *pQVar1;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_10011c900(param_1,0,0);
  *(undefined4 *)(param_1 + 2) = 0x84e;
  *param_1 = &PTR_FUN_100baaa30;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("create_unattended_cd_guest_type",0x1f);
  local_40 = pQVar1;
  FUN_10011cae0(param_1,param_2,&local_40);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001214e3;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1001214e3:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("create_unattended_cd_cmd_username",0x21);
  local_48 = pQVar1;
  FUN_10011da30(param_1,param_3,&local_48);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100121535;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100121535:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("create_unattended_cd_cmd_password",0x21);
  local_50 = pQVar1;
  FUN_10011da30(param_1,param_4,&local_50);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100121587;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100121587:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("create_unattended_cd_cmd_full_username",0x26);
  local_58 = pQVar1;
  FUN_10011da30(param_1,param_5,&local_58);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001215da;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1001215da:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("create_unattended_cd_os_distro_path",0x23);
  local_60 = pQVar1;
  FUN_10011da30(param_1,param_6,&local_60);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10012162d;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10012162d:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("create_unattended_cd_out_image_path",0x23);
  local_68 = pQVar1;
  FUN_10011da30(param_1,param_7,&local_68);
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

