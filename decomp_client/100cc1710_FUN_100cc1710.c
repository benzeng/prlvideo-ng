
void FUN_100cc1710(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  QString this;
  CVmSharedFolder *pCVar5;
  ulong uVar6;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
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
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  CVmCommonOptions::getOsType();
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharing();
  bVar1 = (bool)CVmSharing::getHostSharing();
  local_40 = (QArrayData *)QString::fromAscii_helper("Shared folders",0xe);
  local_48 = (QArrayData *)QString::fromAscii_helper("Shared folders enabled",0x16);
  FUN_100ccd670(param_2,&local_40,&local_48,10,1);
  CVmHostSharing::setUserDefinedFoldersEnabled(bVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cc17f4;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100cc17f4:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cc1824;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100cc1824:
  local_50 = (QArrayData *)QString::fromAscii_helper("Shared folders",0xe);
  local_58 = (QArrayData *)QString::fromAscii_helper("Sharing enabled",0xf);
  iVar3 = FUN_100ccd670(param_2,&local_50,&local_58,10,2);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cc189b;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100cc189b:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cc18cb;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100cc18cb:
  if (iVar3 == 3) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharing();
    bVar1 = (bool)CVmSharing::getHostSharing();
    CVmHostSharing::setEnabled(bVar1);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharing();
    bVar1 = (bool)CVmSharing::getHostSharing();
    CVmHostSharing::setShareUserHomeDir(bVar1);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharing();
    uVar2 = CVmSharing::getHostSharing();
LAB_100cc1a25:
    CVmHostSharing::setShareAllMacDisks((bool)uVar2);
  }
  else {
    if (iVar3 == 2) {
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmTools();
      CVmTools::getVmSharing();
      uVar2 = CVmSharing::getHostSharing();
LAB_100cc19ce:
      CVmHostSharing::setEnabled((bool)uVar2);
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmTools();
      CVmTools::getVmSharing();
      bVar1 = (bool)CVmSharing::getHostSharing();
      CVmHostSharing::setShareUserHomeDir(bVar1);
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmTools();
      CVmTools::getVmSharing();
      uVar2 = CVmSharing::getHostSharing();
      goto LAB_100cc1a25;
    }
    if (iVar3 == 0) {
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmTools();
      CVmTools::getVmSharing();
      uVar2 = CVmSharing::getHostSharing();
      goto LAB_100cc19ce;
    }
  }
  local_60 = (QArrayData *)QString::fromAscii_helper("Shared folders",0xe);
  local_68 = (QArrayData *)QString::fromAscii_helper("Shared folders count",0x14);
  uVar4 = FUN_100ccd670(param_2,&local_60,&local_68,10,0);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cc1aa1;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100cc1aa1:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cc1ad1;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100cc1ad1:
  if (uVar4 != 0) {
    uVar6 = 0;
    do {
      this.field0_0x0 = operator_new(200);
      CVmSharedFolder::CVmSharedFolder((CVmSharedFolder *)this.field0_0x0);
      local_78 = (QArrayData *)QString::fromAscii_helper("Folder%1 name",0xd);
      QString::arg(&local_70,&local_78,uVar6,0,10,0x20);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc1b78;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_100cc1b78:
      local_88 = (QArrayData *)QString::fromAscii_helper("Shared folders",0xe);
      local_90 = (QArrayData *)QString::fromAscii_helper("",0);
      FUN_100ccd600(&local_80,param_2,&local_88,&local_70,&local_90);
      CVmSharedFolder::setName(this);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc1bf1;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_100cc1bf1:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc1c27;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_100cc1c27:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc1c57;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_100cc1c57:
      local_a0 = (QArrayData *)QString::fromAscii_helper("Folder%1 path",0xd);
      QString::arg(&local_98,&local_a0,uVar6,0,10,0x20);
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc1cc9;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_100cc1cc9:
      local_b0 = (QArrayData *)QString::fromAscii_helper("Shared folders",0xe);
      local_b8 = (QArrayData *)QString::fromAscii_helper("",0);
      FUN_100ccd600(&local_a8,param_2,&local_b0,&local_98,&local_b8);
      CVmSharedFolder::setPath(this);
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc1d57;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_100cc1d57:
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc1d8d;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_100cc1d8d:
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc1dc3;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_100cc1dc3:
      local_c8 = (QArrayData *)QString::fromAscii_helper("Folder%1 descr",0xe);
      QString::arg(&local_c0,&local_c8,uVar6,0,10,0x20);
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc1e35;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_100cc1e35:
      local_d8 = (QArrayData *)QString::fromAscii_helper("Shared folders",0xe);
      local_e0 = (QArrayData *)QString::fromAscii_helper("",0);
      FUN_100ccd600(&local_d0,param_2,&local_d8,&local_c0,&local_e0);
      CVmSharedFolder::setDescription(this);
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc1ec3;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
LAB_100cc1ec3:
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_31 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc1ef9;
        }
        QArrayData::deallocate(local_e0,2,8);
      }
LAB_100cc1ef9:
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_31 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc1f2f;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
LAB_100cc1f2f:
      local_f0 = (QArrayData *)QString::fromAscii_helper("Folder%1 enabled",0x10);
      QString::arg(&local_e8,&local_f0,uVar6,0,10,0x20);
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_31 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc1fa1;
        }
        QArrayData::deallocate(local_f0,2,8);
      }
LAB_100cc1fa1:
      local_f8 = (QArrayData *)QString::fromAscii_helper("Shared folders",0xe);
      FUN_100ccd670(param_2,&local_f8,&local_e8,10,0);
      CVmSharedFolder::setEnabled(SUB81(this.field0_0x0,0));
      if (*(int *)local_f8 != -1) {
        if (*(int *)local_f8 != 0) {
          LOCK();
          *(int *)local_f8 = *(int *)local_f8 + -1;
          local_31 = *(int *)local_f8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc2019;
        }
        QArrayData::deallocate(local_f8,2,8);
      }
LAB_100cc2019:
      local_108 = (QArrayData *)QString::fromAscii_helper("Folder%1 readonly",0x11);
      QString::arg(&local_100,&local_108,uVar6,0,10,0x20);
      if (*(int *)local_108 != -1) {
        if (*(int *)local_108 != 0) {
          LOCK();
          *(int *)local_108 = *(int *)local_108 + -1;
          local_31 = *(int *)local_108 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc208b;
        }
        QArrayData::deallocate(local_108,2,8);
      }
LAB_100cc208b:
      local_110 = (QArrayData *)QString::fromAscii_helper("Shared folders",0xe);
      FUN_100ccd670(param_2,&local_110,&local_100,10,0);
      CVmSharedFolder::setReadOnly(SUB81(this.field0_0x0,0));
      if (*(int *)local_110 != -1) {
        if (*(int *)local_110 != 0) {
          LOCK();
          *(int *)local_110 = *(int *)local_110 + -1;
          local_31 = *(int *)local_110 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc2103;
        }
        QArrayData::deallocate(local_110,2,8);
      }
LAB_100cc2103:
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmTools();
      CVmTools::getVmSharing();
      pCVar5 = (CVmSharedFolder *)CVmSharing::getHostSharing();
      CVmHostSharing::addSharedFolder(pCVar5);
      if (*(int *)local_100 != -1) {
        if (*(int *)local_100 != 0) {
          LOCK();
          *(int *)local_100 = *(int *)local_100 + -1;
          local_31 = *(int *)local_100 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc2168;
        }
        QArrayData::deallocate(local_100,2,8);
      }
LAB_100cc2168:
      if (*(int *)local_e8 != -1) {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          local_31 = *(int *)local_e8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc219e;
        }
        QArrayData::deallocate(local_e8,2,8);
      }
LAB_100cc219e:
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc21d4;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_100cc21d4:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc220a;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_100cc220a:
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc223a;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_100cc223a:
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharing();
  bVar1 = (bool)CVmSharing::getGuestSharing();
  local_118 = (QArrayData *)QString::fromAscii_helper("Windows sharing",0xf);
  local_120 = (QArrayData *)QString::fromAscii_helper("Windows sharing enabled",0x17);
  FUN_100ccd670(param_2,&local_118,&local_120,10,1);
  CVmGuestSharing::setEnabled(bVar1);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cc2308;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_100cc2308:
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cc233e;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_100cc233e:
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharing();
  bVar1 = (bool)CVmSharing::getGuestSharing();
  local_128 = (QArrayData *)QString::fromAscii_helper("Windows sharing",0xf);
  local_130 = (QArrayData *)QString::fromAscii_helper("AutoMount enabled",0x11);
  FUN_100ccd670(param_2,&local_128,&local_130,10,1);
  CVmGuestSharing::setAutoMount(bVar1);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_31 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cc23fc;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_100cc23fc:
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_31 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cc2432;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_100cc2432:
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharing();
  bVar1 = (bool)CVmSharing::getGuestSharing();
  CVmGuestSharing::setEnableSpotlight(bVar1);
  return;
}

