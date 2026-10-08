
undefined8 FUN_100a4b310(long param_1,undefined8 *param_2,QString *param_3)

{
  QArrayData *pQVar1;
  int iVar2;
  undefined8 uVar3;
  QArrayData *pQVar4;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  bool local_31;
  
  uVar3 = FUN_100319390(*(undefined8 *)(param_1 + 0x10));
  FUN_10018c2b0(uVar3);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  iVar2 = CVmCommonOptions::getOsType();
  if (iVar2 == 7) {
    return 0x80000008;
  }
  if (iVar2 == 8) {
    pQVar4 = (QArrayData *)QString::fromAscii_helper("\\\\Mac\\AllFiles",0xe);
    pQVar1 = (QArrayData *)*param_2;
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    local_50 = pQVar1;
    FUN_100a4b830(&local_48,&local_50,8);
    if (1 < *(int *)pQVar4 + 1U) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + 1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
    }
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar4;
    QString::append(&local_40);
    QString::operator=(param_3,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if (local_31) goto LAB_100a4b40d;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_100a4b40d:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if (local_31) goto LAB_100a4b43d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100a4b43d:
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_31 = *(int *)pQVar1 != 0;
        UNLOCK();
        if (local_31) goto LAB_100a4b46c;
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
LAB_100a4b46c:
    if (*(int *)pQVar4 == -1) {
      return 0;
    }
    if (*(int *)pQVar4 == 0) goto LAB_100a4b5ae;
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + -1;
    iVar2 = *(int *)pQVar4;
    UNLOCK();
  }
  else {
    pQVar4 = (QArrayData *)QString::fromAscii_helper("//.psf/AllFiles",0xf);
    pQVar1 = (QArrayData *)*param_2;
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    local_68 = pQVar1;
    FUN_100a4b830(&local_60,&local_68,iVar2);
    if (1 < *(int *)pQVar4 + 1U) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + 1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
    }
    local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar4;
    QString::append(&local_58);
    QString::operator=(param_3,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if (local_31) goto LAB_100a4b531;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_100a4b531:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if (local_31) goto LAB_100a4b561;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_100a4b561:
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_31 = *(int *)pQVar1 != 0;
        UNLOCK();
        if (local_31) goto LAB_100a4b590;
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
LAB_100a4b590:
    if (*(int *)pQVar4 == -1) {
      return 0;
    }
    if (*(int *)pQVar4 == 0) goto LAB_100a4b5ae;
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + -1;
    iVar2 = *(int *)pQVar4;
    UNLOCK();
  }
  local_31 = iVar2 != 0;
  if (local_31) {
    return 0;
  }
LAB_100a4b5ae:
  QArrayData::deallocate(pQVar4,2,8);
  return 0;
}

