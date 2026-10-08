
void FUN_100cc2c60(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  CVmScreenResolution *pCVar3;
  ulong uVar4;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getVideo();
  bVar1 = (bool)CVmVideo::getVmScreenResolutions();
  local_40 = (QArrayData *)QString::fromAscii_helper("Video",5);
  local_48 = (QArrayData *)QString::fromAscii_helper("Video resolutions enabled",0x19);
  FUN_100ccd670(param_2,&local_40,&local_48,10,0);
  CVmScreenResolutions::setEnabled(bVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cc2d1b;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100cc2d1b:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cc2d4b;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100cc2d4b:
  local_50 = (QArrayData *)QString::fromAscii_helper("Video",5);
  local_58 = (QArrayData *)QString::fromAscii_helper("Video resolutions count",0x17);
  uVar2 = FUN_100ccd670(param_2,&local_50,&local_58,10,0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cc2dbf;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100cc2dbf:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cc2def;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100cc2def:
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      pCVar3 = operator_new(0xb8);
      CVmScreenResolution::CVmScreenResolution(pCVar3);
      local_68 = (QArrayData *)QString::fromAscii_helper("VideoRes%1 enabled",0x12);
      QString::arg(&local_60,&local_68,uVar4,0,10,0x20);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc2e88;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_100cc2e88:
      local_70 = (QArrayData *)QString::fromAscii_helper("Video",5);
      FUN_100ccd670(param_2,&local_70,&local_60,10,0);
      CVmScreenResolution::setEnabled(SUB81(pCVar3,0));
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc2ef1;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_100cc2ef1:
      local_80 = (QArrayData *)QString::fromAscii_helper("VideoRes%1 width",0x10);
      QString::arg(&local_78,&local_80,uVar4,0,10,0x20);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc2f54;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_100cc2f54:
      local_88 = (QArrayData *)QString::fromAscii_helper("Video",5);
      FUN_100ccd670(param_2,&local_88,&local_78,10,0);
      CVmScreenResolution::setWidth((uint)pCVar3);
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc2fb7;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_100cc2fb7:
      local_98 = (QArrayData *)QString::fromAscii_helper("VideoRes%1 height",0x11);
      QString::arg(&local_90,&local_98,uVar4,0,10,0x20);
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc3025;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_100cc3025:
      local_a0 = (QArrayData *)QString::fromAscii_helper("Video",5);
      FUN_100ccd670(param_2,&local_a0,&local_90,10,0);
      CVmScreenResolution::setHeight((uint)pCVar3);
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc3093;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_100cc3093:
      CVmConfiguration::getVmHardwareList();
      CVmHardware::getVideo();
      pCVar3 = (CVmScreenResolution *)CVmVideo::getVmScreenResolutions();
      CVmScreenResolutions::addScreenResolution(pCVar3);
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc30f0;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_100cc30f0:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc3120;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_100cc3120:
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc3150;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_100cc3150:
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return;
}

