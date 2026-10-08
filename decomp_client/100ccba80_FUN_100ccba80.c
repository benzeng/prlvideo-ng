
void FUN_100ccba80(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  CVmUsbDevice *pCVar6;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  long *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  long *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  long *local_38;
  undefined1 local_29;
  
  local_40 = (QArrayData *)QString::fromAscii_helper("Usb",3);
  local_48 = (QArrayData *)QString::fromAscii_helper("USB enabled",0xb);
  FUN_100ccd530(&local_38,param_2,&local_40,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ccbb06;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100ccbb06:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ccbb36;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100ccbb36:
  if ((local_38 == (long *)0x0) || (local_38[2] == 0)) {
    local_60 = (QArrayData *)QString::fromAscii_helper("USB",3);
    local_68 = (QArrayData *)QString::fromAscii_helper("Usb enabled",0xb);
    FUN_100ccd670(param_2,&local_60,&local_68,10,0);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_29 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100ccbc75;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100ccbc75:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100ccbca5;
      }
      QArrayData::deallocate(local_60,2,8);
    }
  }
  else {
    local_50 = (QArrayData *)QString::fromAscii_helper("Usb",3);
    local_58 = (QArrayData *)QString::fromAscii_helper("USB enabled",0xb);
    FUN_100ccd670(param_2,&local_50,&local_58,10,0);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100ccbbc3;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100ccbbc3:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100ccbca5;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_100ccbca5:
  local_78 = (QArrayData *)QString::fromAscii_helper("Usb",3);
  local_80 = (QArrayData *)QString::fromAscii_helper("USB autoconnect",0xf);
  FUN_100ccd530(&local_70,param_2,&local_78,&local_80);
  plVar2 = local_38;
  if (local_70 != (long *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
  }
  local_38 = local_70;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (local_70 != (long *)0x0) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ccbd6c;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100ccbd6c:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ccbd9c;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100ccbd9c:
  if ((local_38 == (long *)0x0) || (local_38[2] == 0)) {
    local_98 = (QArrayData *)QString::fromAscii_helper("USB",3);
    local_a0 = (QArrayData *)QString::fromAscii_helper("Usb autoconnect",0xf);
    uVar4 = FUN_100ccd670(param_2,&local_98,&local_a0,10,0);
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_29 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100ccbef9;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_100ccbef9:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_29 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100ccbf2f;
      }
      QArrayData::deallocate(local_98,2,8);
    }
  }
  else {
    local_88 = (QArrayData *)QString::fromAscii_helper("Usb",3);
    local_90 = (QArrayData *)QString::fromAscii_helper("USB autoconnect",0xf);
    uVar4 = FUN_100ccd670(param_2,&local_88,&local_90,10,0);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_29 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100ccbe35;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_100ccbe35:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_29 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100ccbf2f;
      }
      QArrayData::deallocate(local_88,2,8);
    }
  }
LAB_100ccbf2f:
  local_b0 = (QArrayData *)QString::fromAscii_helper("Usb",3);
  local_b8 = (QArrayData *)QString::fromAscii_helper("USB",3);
  FUN_100ccd530(&local_a8,param_2,&local_b0,&local_b8);
  plVar2 = local_38;
  if (local_a8 != (long *)0x0) {
    LOCK();
    *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
    UNLOCK();
  }
  local_38 = local_a8;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar2 = local_a8 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_a8 + 0x10))();
    }
  }
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_29 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ccc011;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100ccc011:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_29 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ccc047;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100ccc047:
  if ((local_38 == (long *)0x0) || (local_38[2] == 0)) {
    local_d0 = (QArrayData *)QString::fromAscii_helper("USB",3);
    local_d8 = (QArrayData *)QString::fromAscii_helper("Usb",3);
    iVar5 = FUN_100ccd670(param_2,&local_d0,&local_d8,10,0);
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_29 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100ccc1ae;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
LAB_100ccc1ae:
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_29 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100ccc1e4;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
    goto LAB_100ccc1e4;
  }
  local_c0 = (QArrayData *)QString::fromAscii_helper("Usb",3);
  local_c8 = (QArrayData *)QString::fromAscii_helper("USB",3);
  iVar5 = FUN_100ccd670(param_2,&local_c0,&local_c8,10,0);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_29 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ccc0e5;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100ccc0e5:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_29 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ccc1e4;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100ccc1e4:
  if (iVar5 != 0) {
    pCVar6 = operator_new(0xf0);
    CVmUsbDevice::CVmUsbDevice(pCVar6);
    CVmDevice::setEnabled((uint)pCVar6);
    CVmUsbDevice::setAutoconnectDevices(pCVar6,uVar4);
    pCVar6 = (CVmUsbDevice *)CVmConfiguration::getVmHardwareList();
    CVmHardware::addUsbDevice(pCVar6);
  }
  if (local_38 != (long *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  return;
}

