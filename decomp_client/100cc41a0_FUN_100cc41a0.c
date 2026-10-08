
void FUN_100cc41a0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  iVar2 = CVmCommonOptions::getOsType();
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  bVar1 = (bool)CVmTools::getVmSharedProfile();
  local_38 = (QArrayData *)QString::fromAscii_helper("Shared Profiles",0xf);
  local_40 = (QArrayData *)QString::fromAscii_helper("Shared Profiles enabled",0x17);
  FUN_100ccd670(param_2,&local_38,&local_40,10,iVar2 == 8);
  CVmSharedProfile::setEnabled(bVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cc4273;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100cc4273:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cc42a3;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100cc42a3:
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  bVar1 = (bool)CVmTools::getVmSharedProfile();
  local_48 = (QArrayData *)QString::fromAscii_helper("Shared Profiles",0xf);
  local_50 = (QArrayData *)QString::fromAscii_helper("Shared Profiles use desktop",0x1b);
  FUN_100ccd670(param_2,&local_48,&local_50,10,1);
  CVmSharedProfile::setUseDesktop(bVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cc4343;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100cc4343:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cc4373;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100cc4373:
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  bVar1 = (bool)CVmTools::getVmSharedProfile();
  local_58 = (QArrayData *)QString::fromAscii_helper("Shared Profiles",0xf);
  local_60 = (QArrayData *)QString::fromAscii_helper("Shared Profiles use documents",0x1d);
  FUN_100ccd670(param_2,&local_58,&local_60,10,1);
  CVmSharedProfile::setUseDocuments(bVar1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cc4413;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100cc4413:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cc4443;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100cc4443:
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  bVar1 = (bool)CVmTools::getVmSharedProfile();
  local_68 = (QArrayData *)QString::fromAscii_helper("Shared Profiles",0xf);
  local_70 = (QArrayData *)QString::fromAscii_helper("Shared Profiles use pictures",0x1c);
  FUN_100ccd670(param_2,&local_68,&local_70,10,1);
  CVmSharedProfile::setUsePictures(bVar1);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cc44e3;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100cc44e3:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cc4513;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100cc4513:
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  bVar1 = (bool)CVmTools::getVmSharedProfile();
  local_78 = (QArrayData *)QString::fromAscii_helper("Shared Profiles",0xf);
  local_80 = (QArrayData *)QString::fromAscii_helper("Shared Profiles use music",0x19);
  FUN_100ccd670(param_2,&local_78,&local_80,10,1);
  CVmSharedProfile::setUseMusic(bVar1);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cc45b3;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100cc45b3:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      UNLOCK();
      if (*(int *)local_78 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_78,2,8);
  }
  return;
}

