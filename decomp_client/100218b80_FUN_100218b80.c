
undefined8 FUN_100218b80(long param_1)

{
  CVmConfiguration *this;
  int iVar1;
  long *plVar2;
  char cVar3;
  undefined4 uVar4;
  CVmConfiguration *pCVar5;
  CVmOpticalDisk *pCVar6;
  QString this_00;
  long lVar7;
  undefined8 uVar8;
  QArrayData *local_48;
  QArrayData *local_40;
  char local_38;
  
  this = (CVmConfiguration *)(param_1 + 0x38);
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  pCVar5 = (CVmConfiguration *)FUN_10018c2b0(uVar8);
  CVmConfiguration::operator=(this,pCVar5);
  COsInstallationInfo::cdInfo();
  cVar3 = CdDvdInfo::isValid();
  if (cVar3 != '\0') {
    pCVar6 = (CVmOpticalDisk *)CVmConfiguration::getVmHardwareList();
    lVar7 = *(long *)(pCVar6 + 0x1a8);
    iVar1 = *(int *)(lVar7 + 8);
    if (*(int *)(lVar7 + 0xc) == iVar1) {
      this_00.field0_0x0 = operator_new(0xf0);
      CVmOpticalDisk::CVmOpticalDisk((CVmOpticalDisk *)this_00.field0_0x0);
      CVmHardware::addOpticalDisk(pCVar6);
      uVar4 = CVmClusteredDevice::getInterfaceType();
      FUN_100117d40(pCVar6,uVar4,5);
      CVmClusteredDevice::setStackIndex((uint)this_00.field0_0x0);
    }
    else {
      this_00.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
      if (iVar1 < *(int *)(lVar7 + 0xc)) {
        this_00.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar7 + 0x10 + (long)iVar1 * 8);
      }
    }
    CVmDevice::setEmulatedType((uint)this_00.field0_0x0);
    if (1 < *(int *)local_48 + 1U) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      UNLOCK();
    }
    CVmDevice::setSystemName(this_00);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        if (*(int *)local_48 != 0) goto LAB_100218cb0;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100218cb0:
    if (1 < *(int *)local_40 + 1U) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      UNLOCK();
    }
    CVmDevice::setUserFriendlyName(this_00);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) goto LAB_100218d05;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_100218d05:
    CVmDevice::setRemote(SUB81(this_00.field0_0x0,0));
    CVmDevice::setConnected((uint)this_00.field0_0x0);
    lVar7 = FUN_1003b7940(8,0,this);
    if ((lVar7 != 0) && (local_38 != '\0')) {
      BootDevice::setInUse(SUB81(lVar7,0));
    }
  }
  if (((*(long *)(param_1 + 0x138) != 0) && (*(int *)(*(long *)(param_1 + 0x138) + 4) != 0)) &&
     (plVar2 = *(long **)(param_1 + 0x140), plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,this);
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_100218d9f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100218d9f:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return 0;
      }
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return 0;
}

