
void FUN_1005caf40(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  QString this;
  CVmFloppyDisk *pCVar3;
  QArrayData *pQVar4;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  uVar1 = CVmCommonOptions::getOsVersion();
  if (0x80e < uVar1) {
    FUN_1005cb140(param_1,1);
    return;
  }
  lVar2 = CVmConfiguration::getVmHardwareList();
  if (*(int *)(*(long *)(lVar2 + 0x1a0) + 0xc) == *(int *)(*(long *)(lVar2 + 0x1a0) + 8)) {
    this.field0_0x0 = operator_new(0xf0);
    CVmFloppyDisk::CVmFloppyDisk((CVmFloppyDisk *)this.field0_0x0);
    CVmDevice::setEnabled((uint)this.field0_0x0);
    pCVar3 = (CVmFloppyDisk *)CVmConfiguration::getVmHardwareList();
    CVmHardware::setFdd(pCVar3);
  }
  else {
    lVar2 = CVmConfiguration::getVmHardwareList();
    this.field0_0x0 =
         *(QTypedArrayData<unsigned_short> **)
          (*(long *)(lVar2 + 0x1a0) + 0x10 + (long)*(int *)(*(long *)(lVar2 + 0x1a0) + 8) * 8);
  }
  CVmDevice::setEmulatedType((uint)this.field0_0x0);
  CVmDevice::setConnected((uint)this.field0_0x0);
  pQVar4 = (QArrayData *)QString::fromAscii_helper("unattended.fdd",0xe);
  CVmDevice::setUserFriendlyName(this);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1005cb054;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1005cb054:
  pQVar4 = (QArrayData *)QString::fromAscii_helper("unattended.fdd",0xe);
  CVmDevice::setSystemName(this);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) {
        return;
      }
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
  return;
}

