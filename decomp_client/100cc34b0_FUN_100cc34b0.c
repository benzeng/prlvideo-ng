
void FUN_100cc34b0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
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
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  bVar1 = (bool)CVmTools::getVmCoherence();
  local_30 = (QArrayData *)QString::fromAscii_helper("Coherence",9);
  local_38 = (QArrayData *)QString::fromAscii_helper("Show taskbar",0xc);
  FUN_100ccd670(param_2,&local_30,&local_38,10,1);
  CVmCoherence::setShowTaskBar(bVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc3566;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100cc3566:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc3596;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100cc3596:
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  bVar1 = (bool)CVmTools::getVmCoherence();
  local_40 = (QArrayData *)QString::fromAscii_helper("Coherence",9);
  local_48 = (QArrayData *)QString::fromAscii_helper("Show taskbar in Coherence",0x19);
  FUN_100ccd670(param_2,&local_40,&local_48,10,1);
  CVmCoherence::setShowTaskBarInCoherence(bVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc3636;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100cc3636:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc3666;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100cc3666:
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  bVar1 = (bool)CVmTools::getVmCoherence();
  local_50 = (QArrayData *)QString::fromAscii_helper("Coherence",9);
  local_58 = (QArrayData *)QString::fromAscii_helper("Relocate taskbar",0x10);
  FUN_100ccd670(param_2,&local_50,&local_58,10,0);
  CVmCoherence::setRelocateTaskBar(bVar1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc3703;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100cc3703:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc3733;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100cc3733:
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  bVar1 = (bool)CVmTools::getVmCoherence();
  local_60 = (QArrayData *)QString::fromAscii_helper("Coherence",9);
  local_68 = (QArrayData *)QString::fromAscii_helper("Exclude Dock",0xc);
  FUN_100ccd670(param_2,&local_60,&local_68,10,1);
  CVmCoherence::setExcludeDock(bVar1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc37d3;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100cc37d3:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc3803;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100cc3803:
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  bVar1 = (bool)CVmTools::getVmCoherence();
  local_70 = (QArrayData *)QString::fromAscii_helper("Coherence",9);
  local_78 = (QArrayData *)QString::fromAscii_helper("Multiple displays",0x11);
  FUN_100ccd670(param_2,&local_70,&local_78,10,0);
  CVmCoherence::setMultiDisplay(bVar1);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc38a0;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100cc38a0:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc38d0;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100cc38d0:
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  bVar1 = (bool)CVmTools::getVmCoherence();
  local_80 = (QArrayData *)QString::fromAscii_helper("Coherence",9);
  local_88 = (QArrayData *)QString::fromAscii_helper("Group all windows",0x11);
  FUN_100ccd670(param_2,&local_80,&local_88,10,0);
  CVmCoherence::setGroupAllWindows(bVar1);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_21 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc396d;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100cc396d:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc399d;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100cc399d:
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  bVar1 = (bool)CVmTools::getVmCoherence();
  local_90 = (QArrayData *)QString::fromAscii_helper("Coherence",9);
  local_98 = (QArrayData *)QString::fromAscii_helper("Disable drop shadow",0x13);
  FUN_100ccd670(param_2,&local_90,&local_98,10,0);
  CVmCoherence::setDisableDropShadow(bVar1);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_21 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc3a4c;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100cc3a4c:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_21 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc3a82;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100cc3a82:
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  bVar1 = (bool)CVmTools::getVmCoherence();
  local_a0 = (QArrayData *)QString::fromAscii_helper("Coherence",9);
  local_a8 = (QArrayData *)QString::fromAscii_helper("Do Not Minimize to doc",0x16);
  FUN_100ccd670(param_2,&local_a0,&local_a8,10,0);
  CVmCoherence::setDoNotMinimizeToDock(bVar1);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_21 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc3b31;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100cc3b31:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_21 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc3b67;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100cc3b67:
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  bVar1 = (bool)CVmTools::getVmCoherence();
  local_b0 = (QArrayData *)QString::fromAscii_helper("Coherence",9);
  local_b8 = (QArrayData *)QString::fromAscii_helper("Bring to front",0xe);
  FUN_100ccd670(param_2,&local_b0,&local_b8,10,0);
  CVmCoherence::setBringToFront(bVar1);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_21 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100cc3c16;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100cc3c16:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      UNLOCK();
      if (*(int *)local_b0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
  return;
}

