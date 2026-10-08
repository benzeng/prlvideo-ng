
undefined8 FUN_1005ca590(void)

{
  QString QVar1;
  undefined *puVar2;
  QArrayData *pQVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  size_t sVar8;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  lVar7 = CVmConfiguration::getVmHardwareList();
  if (*(int *)(*(long *)(lVar7 + 0x1b0) + 0xc) != *(int *)(*(long *)(lVar7 + 0x1b0) + 8)) {
    CVmConfiguration::getVmHardwareList();
    iVar5 = CVmDevice::getEmulatedType();
    if (iVar5 == 3) {
      return 1;
    }
    iVar5 = CVmDevice::getEmulatedType();
    if (iVar5 == 0) {
      return 1;
    }
  }
  lVar7 = CVmConfiguration::getVmHardwareList();
  if (*(int *)(*(long *)(lVar7 + 0x1b0) + 0xc) == *(int *)(*(long *)(lVar7 + 0x1b0) + 8)) {
    return 1;
  }
  lVar7 = CVmConfiguration::getVmHardwareList();
  QVar1.field0_0x0 =
       *(QTypedArrayData<unsigned_short> **)
        (*(long *)(lVar7 + 0x1b0) + 0x10 + (long)*(int *)(*(long *)(lVar7 + 0x1b0) + 8) * 8);
  cVar4 = CVmHardDisk::isSplitted();
  if (cVar4 == '\0') {
    CVmConfiguration::getVmIdentification();
    CVmIdentification::getHomePath();
    FUN_100db9710(&local_38);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005ca680;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_1005ca680:
    CVmHardDisk::setSplitted(SUB81(QVar1.field0_0x0,0));
  }
  local_48 = (QArrayData *)QString::fromAscii_helper("",0);
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmName();
  puVar2 = PTR_s_hdd_102270c58;
  iVar5 = -1;
  if (PTR_s_hdd_102270c58 != (undefined *)0x0) {
    sVar8 = _strlen(PTR_s_hdd_102270c58);
    iVar5 = (int)sVar8;
  }
  local_58 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar5);
  uVar6 = CVmDevice::getIndex();
  FUN_10010b100(&local_40,&local_48,&local_50,&local_58,uVar6);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005ca735;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005ca735:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005ca765;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005ca765:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005ca795;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005ca795:
  pQVar3 = local_40;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_29 = *(int *)local_40 != 0;
    UNLOCK();
  }
  CVmDevice::setUserFriendlyName(QVar1);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005ca7ea;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1005ca7ea:
  pQVar3 = local_40;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_29 = *(int *)local_40 != 0;
    UNLOCK();
  }
  CVmDevice::setSystemName(QVar1);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005ca83f;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1005ca83f:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return 1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return 1;
}

