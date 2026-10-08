
void FUN_1001bad90(long *param_1,undefined8 param_2,uint param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  QString QVar7;
  size_t sVar8;
  CVmFloppyDisk *pCVar9;
  undefined8 uVar10;
  QVariant local_c0;
  QArrayData *local_b0;
  QArrayData *local_a8;
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
  
  lVar6 = CVmConfiguration::getVmHardwareList();
  if (*(int *)(*(long *)(lVar6 + 0x1d0) + 0xc) == *(int *)(*(long *)(lVar6 + 0x1d0) + 8)) {
    return;
  }
  FUN_10015a330(param_2);
  CDispCommonPreferences::getMemoryPreferences();
  uVar3 = CDispMemoryPreferences::getRecommendedMaxVmMemory();
  CVmConfiguration::getVmHardwareList();
  CVmHardware::getMemory();
  uVar4 = CVmMemory::getRamSize();
  if (uVar3 < uVar4) {
    CVmConfiguration::getVmHardwareList();
    uVar3 = CVmHardware::getMemory();
    CVmMemory::setRamSize(uVar3);
  }
  if ((param_3 & 1) != 0) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmCommonOptions();
    iVar5 = CVmCommonOptions::getOsType();
    if (iVar5 == 9) {
      CVmConfiguration::getVmHardwareList();
      CVmHardware::getMemory();
      uVar3 = CVmMemory::getRamSize();
      if (0x300 < uVar3) {
        CVmConfiguration::getVmHardwareList();
        uVar3 = CVmHardware::getMemory();
        CVmMemory::setRamSize(uVar3);
      }
    }
  }
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  iVar5 = CVmCommonOptions::getOsType();
  if (iVar5 == 9) {
    CVmConfiguration::getVmHardwareList();
    CVmHardware::getMemory();
    uVar3 = CVmMemory::getRamSize();
    if (((uVar3 < 0x300) && (uVar3 = CDispMemoryPreferences::getMaxVmMemory(), 0x2ff < uVar3)) &&
       (uVar3 = CDispMemoryPreferences::getHostRamSize(), 0x2ff < uVar3)) {
      CVmConfiguration::getVmHardwareList();
      uVar3 = CVmHardware::getMemory();
      CVmMemory::setRamSize(uVar3);
    }
  }
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  iVar5 = CVmCommonOptions::getOsType();
  if (iVar5 == 7) {
    CVmConfiguration::getVmHardwareList();
    CVmHardware::getMemory();
    uVar3 = CVmMemory::getRamSize();
    if (((uVar3 < 0x800) && (uVar3 = CDispMemoryPreferences::getMaxVmMemory(), 0xf3b < uVar3)) &&
       (uVar3 = CDispMemoryPreferences::getHostRamSize(), 0xf3c < uVar3)) {
      CVmConfiguration::getVmHardwareList();
      uVar3 = CVmHardware::getMemory();
      CVmMemory::setRamSize(uVar3);
    }
    lVar6 = *(long *)(param_4 + 0x38);
    iVar5 = QString::compare_helper
                      (*(long *)(lVar6 + 0x10) + lVar6,*(undefined4 *)(lVar6 + 4),"13A476u",
                       0xffffffff,1);
    if (iVar5 == 0) {
      CVmConfiguration::getVmHardwareList();
      uVar3 = CVmHardware::getVideo();
      CVmVideo::setMemorySize(uVar3);
    }
  }
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  iVar5 = CVmCommonOptions::getOsVersion();
  if (iVar5 == 0x807) {
LAB_1001bb013:
    QVar7.field0_0x0 = operator_new(0xf0);
    CVmFloppyDisk::CVmFloppyDisk((CVmFloppyDisk *)QVar7.field0_0x0);
    uVar3 = (uint)QVar7.field0_0x0;
    CVmDevice::setEnabled(uVar3);
    CVmDevice::setConnected(uVar3);
    CVmDevice::setEmulatedType(uVar3);
    local_50 = (QArrayData *)QString::fromAscii_helper("%1.%2",5);
    puVar2 = PTR_s_unattended_102270c38;
    iVar5 = -1;
    if (PTR_s_unattended_102270c38 != (undefined *)0x0) {
      sVar8 = _strlen(PTR_s_unattended_102270c38);
      iVar5 = (int)sVar8;
    }
    local_58 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar5);
    QString::arg(&local_48,&local_50,&local_58,0,0x20);
    puVar2 = PTR_s_fdd_102270c50;
    iVar5 = -1;
    if (PTR_s_fdd_102270c50 != (undefined *)0x0) {
      sVar8 = _strlen(PTR_s_fdd_102270c50);
      iVar5 = (int)sVar8;
    }
    local_60 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar5);
    QString::arg(&local_40,&local_48,&local_60,0,0x20);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001bb11c;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_1001bb11c:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001bb14c;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1001bb14c:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001bb17c;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1001bb17c:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001bb1ac;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1001bb1ac:
    local_68 = local_40;
    if (1 < *(int *)local_40 + 1U) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
    CVmDevice::setUserFriendlyName(QVar7);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001bb201;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1001bb201:
    local_70 = local_40;
    if (1 < *(int *)local_40 + 1U) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
    CVmDevice::setSystemName(QVar7);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001bb256;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1001bb256:
    pCVar9 = (CVmFloppyDisk *)CVmConfiguration::getVmHardwareList();
    CVmHardware::setFdd(pCVar9);
    if (*(int *)local_40 == -1) goto LAB_1001bb567;
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      iVar5 = *(int *)local_40;
      UNLOCK();
joined_r0x0001001bb288:
      local_31 = iVar5 != 0;
      if ((bool)local_31) goto LAB_1001bb567;
    }
  }
  else {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmCommonOptions();
    iVar5 = CVmCommonOptions::getOsVersion();
    if (iVar5 == 0x806) goto LAB_1001bb013;
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmCommonOptions();
    iVar5 = CVmCommonOptions::getOsVersion();
    if (iVar5 == 0x808) goto LAB_1001bb013;
    lVar6 = CVmConfiguration::getVmHardwareList();
    if (*(int *)(*(long *)(lVar6 + 0x1a0) + 0xc) == *(int *)(*(long *)(lVar6 + 0x1a0) + 8))
    goto LAB_1001bb567;
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmCommonOptions();
    iVar5 = CVmCommonOptions::getOsVersion();
    if (iVar5 == 0xb) goto LAB_1001bb567;
    lVar6 = CVmConfiguration::getVmHardwareList();
    QVar7.field0_0x0 =
         *(QTypedArrayData<unsigned_short> **)
          (*(long *)(lVar6 + 0x1a0) + 0x10 + (long)*(int *)(*(long *)(lVar6 + 0x1a0) + 8) * 8);
    iVar5 = CVmDevice::getEmulatedType();
    if (iVar5 != 1) goto LAB_1001bb567;
    local_88 = (QArrayData *)QString::fromAscii_helper("%1.%2",5);
    puVar2 = PTR_s_floppy_102270c30;
    iVar5 = -1;
    if (PTR_s_floppy_102270c30 != (undefined *)0x0) {
      sVar8 = _strlen(PTR_s_floppy_102270c30);
      iVar5 = (int)sVar8;
    }
    local_90 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar5);
    QString::arg(&local_80,&local_88,&local_90,0,0x20);
    puVar2 = PTR_s_fdd_102270c50;
    iVar5 = -1;
    if (PTR_s_fdd_102270c50 != (undefined *)0x0) {
      sVar8 = _strlen(PTR_s_fdd_102270c50);
      iVar5 = (int)sVar8;
    }
    local_98 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar5);
    QString::arg(&local_78,&local_80,&local_98,0,0x20);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001bb3ea;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_1001bb3ea:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001bb41a;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_1001bb41a:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001bb450;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_1001bb450:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001bb480;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_1001bb480:
    local_a0 = local_78;
    if (1 < *(int *)local_78 + 1U) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
    }
    CVmDevice::setUserFriendlyName(QVar7);
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001bb4e1;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_1001bb4e1:
    local_a8 = local_78;
    if (1 < *(int *)local_78 + 1U) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
    }
    CVmDevice::setSystemName(QVar7);
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001bb542;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_1001bb542:
    if (*(int *)local_78 == -1) goto LAB_1001bb567;
    local_40 = local_78;
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      iVar5 = *(int *)local_78;
      UNLOCK();
      goto joined_r0x0001001bb288;
    }
  }
  QArrayData::deallocate(local_40,2,8);
LAB_1001bb567:
  CVmConfiguration::getVmSettings();
  uVar10 = CVmSettings::getShutdown();
  Shutdown::setOnVmWindowClose(uVar10,1);
  FUN_1001bba40(param_1);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  iVar5 = CVmCommonOptions::getOsType();
  if (iVar5 == 8) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmCommonOptions();
    uVar3 = CVmCommonOptions::getOsVersion();
    if (((0x80b < uVar3) && (*(uint *)(param_4 + 4) != 0)) && ((*(uint *)(param_4 + 4) & 1) == 0)) {
      pcVar1 = *(code **)(*param_1 + 0x88);
      local_b0 = (QArrayData *)QString::fromAscii_helper("Settings.Startup.Bios.EfiEnabled",0x20);
      QVariant::QVariant(&local_c0,true);
      (*pcVar1)(param_1,&local_b0,&local_c0,0);
      QVariant::~QVariant(&local_c0);
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          UNLOCK();
          if (*(int *)local_b0 != 0) {
            return;
          }
          local_31 = 0;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
    }
  }
  return;
}

