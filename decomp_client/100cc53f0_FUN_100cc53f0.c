
void FUN_100cc53f0(undefined8 param_1,undefined8 param_2)

{
  QArrayData *pQVar1;
  int iVar2;
  QString this;
  CVmFloppyDisk *pCVar3;
  uint uVar4;
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
  
  this.field0_0x0 = operator_new(0xf0);
  CVmFloppyDisk::CVmFloppyDisk((CVmFloppyDisk *)this.field0_0x0);
  local_38 = (QArrayData *)QString::fromAscii_helper("Floppy disks",0xc);
  local_40 = (QArrayData *)QString::fromAscii_helper("Floppy 0 enabled",0x10);
  FUN_100ccd670(param_2,&local_38,&local_40,10,0);
  uVar4 = (uint)this.field0_0x0;
  CVmDevice::setEnabled(uVar4);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cc5496;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100cc5496:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cc54c6;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100cc54c6:
  local_48 = (QArrayData *)QString::fromAscii_helper("Floppy disks",0xc);
  local_50 = (QArrayData *)QString::fromAscii_helper("Floppy 0 connected",0x12);
  FUN_100ccd670(param_2,&local_48,&local_50,10,1);
  CVmDevice::setConnected(uVar4);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cc5545;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100cc5545:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cc5575;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100cc5575:
  local_58 = (QArrayData *)QString::fromAscii_helper("Floppy disks",0xc);
  local_60 = (QArrayData *)QString::fromAscii_helper("Floppy 0",8);
  iVar2 = FUN_100ccd670(param_2,&local_58,&local_60,10,0);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cc55e9;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100cc55e9:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cc5619;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100cc5619:
  if ((iVar2 == 1) || (iVar2 == 2)) {
    CVmDevice::setEmulatedType(uVar4);
  }
  local_70 = (QArrayData *)QString::fromAscii_helper("Floppy disks",0xc);
  local_78 = (QArrayData *)QString::fromAscii_helper("Floppy 0 image",0xe);
  local_80 = (QArrayData *)QString::fromAscii_helper("floppy0.fdd",0xb);
  FUN_100ccd600(&local_68,param_2,&local_70,&local_78,&local_80);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cc56bb;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100cc56bb:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cc56eb;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100cc56eb:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cc571b;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100cc571b:
  pQVar1 = local_68;
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_29 = *(int *)local_68 != 0;
    UNLOCK();
  }
  CVmDevice::setSystemName(this);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cc5770;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100cc5770:
  pQVar1 = local_68;
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_29 = *(int *)local_68 != 0;
    UNLOCK();
  }
  CVmDevice::setUserFriendlyName(this);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cc57d1;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100cc57d1:
  pCVar3 = (CVmFloppyDisk *)CVmConfiguration::getVmHardwareList();
  CVmHardware::addFloppyDisk(pCVar3);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_68,2,8);
  }
  return;
}

