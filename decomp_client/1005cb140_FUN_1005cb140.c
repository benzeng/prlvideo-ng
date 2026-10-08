
undefined8 FUN_1005cb140(undefined8 param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  CVmOpticalDisk *pCVar5;
  QTypedArrayData<unsigned_short> *pQVar6;
  QTypedArrayData<unsigned_short> *pQVar7;
  QString this;
  int iVar8;
  CVmOpticalDisk *pCVar9;
  uint uVar10;
  QString QVar11;
  undefined8 uVar12;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_100109d60(&local_58,param_1,1);
  QDir::fromNativeSeparators(&local_50);
  QString::fromUtf8_helper((char *)&local_40,0x1dda693);
  puVar4 = (undefined8 *)QString::append(&local_50);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005cb1cc;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005cb1cc:
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)*puVar4;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_31 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005cb214;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1005cb214:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005cb248;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005cb248:
  pCVar5 = (CVmOpticalDisk *)CVmConfiguration::getVmHardwareList();
  pCVar9 = pCVar5 + 0x1a8;
  iVar2 = *(int *)(*(long *)(pCVar5 + 0x1a8) + 8);
  iVar8 = *(int *)(*(long *)(pCVar5 + 0x1a8) + 0xc);
  pQVar6 = (QTypedArrayData<unsigned_short> *)0x0;
  if (iVar8 - iVar2 == 1) {
    pQVar6 = (QTypedArrayData<unsigned_short> *)FUN_1005cf210(pCVar9,0);
    iVar2 = *(int *)(*(long *)pCVar9 + 8);
    iVar8 = *(int *)(*(long *)pCVar9 + 0xc);
  }
  else if (iVar8 == iVar2) {
    uVar12 = 0x80000009;
    FUN_100df99c0("","prl_client_app",0,"(!)Error: In Vm configuration absent distro Cd.");
    goto LAB_1005cb4f0;
  }
  if (iVar8 - iVar2 < 2) {
LAB_1005cb376:
    this.field0_0x0 = operator_new(0xf0);
    CVmOpticalDisk::CVmOpticalDisk((CVmOpticalDisk *)this.field0_0x0);
  }
  else {
    pQVar6 = (QTypedArrayData<unsigned_short> *)FUN_1005cf2d0(pCVar9);
    pQVar7 = (QTypedArrayData<unsigned_short> *)FUN_1005cf2d0(pCVar9);
    CVmDevice::getSystemName();
    QDir::fromNativeSeparators(&local_60);
    cVar1 = operator==(&local_60,&local_48);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005cb334;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_1005cb334:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005cb364;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1005cb364:
    this.field0_0x0 = pQVar7;
    if (cVar1 != '\0') {
      this.field0_0x0 = pQVar6;
      pQVar6 = pQVar7;
    }
    if (this.field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) goto LAB_1005cb376;
  }
  uVar10 = (uint)this.field0_0x0;
  CVmDevice::setEnabled(uVar10);
  CVmDevice::setEmulatedType(uVar10);
  CVmClusteredDevice::getInterfaceType();
  CVmClusteredDevice::setInterfaceType(uVar10);
  QVar11.field0_0x0 = local_48.field0_0x0;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_31 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  CVmDevice::setSystemName(this);
  if (*(int *)QVar11.field0_0x0 != -1) {
    if (*(int *)QVar11.field0_0x0 != 0) {
      LOCK();
      *(int *)QVar11.field0_0x0 = *(int *)QVar11.field0_0x0 + -1;
      local_31 = *(int *)QVar11.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005cb40c;
    }
    QArrayData::deallocate((QArrayData *)QVar11.field0_0x0,2,8);
  }
LAB_1005cb40c:
  QVar11.field0_0x0 = local_48.field0_0x0;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_31 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  CVmDevice::setUserFriendlyName(this);
  if (*(int *)QVar11.field0_0x0 != -1) {
    if (*(int *)QVar11.field0_0x0 != 0) {
      LOCK();
      *(int *)QVar11.field0_0x0 = *(int *)QVar11.field0_0x0 + -1;
      local_31 = *(int *)QVar11.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005cb461;
    }
    QArrayData::deallocate((QArrayData *)QVar11.field0_0x0,2,8);
  }
LAB_1005cb461:
  CVmDevice::setEnabled((uint)pQVar6);
  QVar11.field0_0x0 = pQVar6;
  if (param_2 != '\0') {
    QVar11.field0_0x0 = this.field0_0x0;
    this.field0_0x0 = pQVar6;
  }
  uVar3 = CVmClusteredDevice::getInterfaceType();
  FUN_100117d40(pCVar5,uVar3,5);
  CVmClusteredDevice::setStackIndex((uint)this.field0_0x0);
  CVmDevice::setIndex((uint)this.field0_0x0);
  CVmHardware::addOpticalDisk(pCVar5);
  uVar3 = CVmClusteredDevice::getInterfaceType();
  FUN_100117d40(pCVar5,uVar3,5);
  CVmClusteredDevice::setStackIndex((uint)QVar11.field0_0x0);
  CVmDevice::setIndex((uint)QVar11.field0_0x0);
  uVar12 = 0;
  CVmHardware::addOpticalDisk(pCVar5);
LAB_1005cb4f0:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return uVar12;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return uVar12;
}

