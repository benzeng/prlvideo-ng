
void FUN_100cc4e80(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  CVmConfiguration::getVmHardwareList();
  uVar3 = CVmHardware::getCpu();
  local_30 = (QArrayData *)QString::fromAscii_helper("System",6);
  local_38 = (QArrayData *)QString::fromAscii_helper("Acceleration level",0x12);
  uVar1 = FUN_100ccd670(param_2,&local_30,&local_38,10,1);
  CVmCpu::setAccelerationLevel(uVar3,uVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc4f25;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100cc4f25:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc4f55;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100cc4f55:
  CVmConfiguration::getVmHardwareList();
  uVar3 = CVmHardware::getCpu();
  local_40 = (QArrayData *)QString::fromAscii_helper("System",6);
  local_48 = (QArrayData *)QString::fromAscii_helper("VT-x support",0xc);
  uVar1 = FUN_100ccd670(param_2,&local_40,&local_48,10,1);
  CVmCpu::setEnableVTxSupport(uVar3,uVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc4fe7;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100cc4fe7:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc5017;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100cc5017:
  CVmConfiguration::getVmHardwareList();
  uVar2 = CVmHardware::getMemory();
  local_50 = (QArrayData *)QString::fromAscii_helper("System",6);
  local_58 = (QArrayData *)QString::fromAscii_helper("Memory",6);
  FUN_100ccd670(param_2,&local_50,&local_58,10,0x80);
  CVmMemory::setRamSize(uVar2);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc50a9;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100cc50a9:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc50d9;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100cc50d9:
  CVmConfiguration::getVmHardwareList();
  uVar2 = CVmHardware::getVideo();
  local_60 = (QArrayData *)QString::fromAscii_helper("System",6);
  local_68 = (QArrayData *)QString::fromAscii_helper("Video Memory",0xc);
  FUN_100ccd670(param_2,&local_60,&local_68,10,0x10);
  CVmVideo::setMemorySize(uVar2);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc516b;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100cc516b:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc519b;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100cc519b:
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getVideo();
  uVar2 = CVmVideo::getMemorySize();
  if (0x20 < uVar2) {
    CVmConfiguration::getVmHardwareList();
    uVar2 = CVmHardware::getVideo();
    CVmVideo::setMemorySize(uVar2);
  }
  CVmConfiguration::getVmHardwareList();
  uVar2 = CVmHardware::getChipset();
  Chipset::setType(uVar2);
  return;
}

