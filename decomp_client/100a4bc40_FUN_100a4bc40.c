
undefined8 FUN_100a4bc40(long param_1,int param_2,QString *param_3)

{
  int iVar1;
  undefined8 uVar2;
  QArrayData *pQVar3;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  uVar2 = FUN_100319390(*(undefined8 *)(param_1 + 0x10));
  FUN_10018c2b0(uVar2);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  iVar1 = CVmCommonOptions::getOsType();
  if (iVar1 == 7) {
    return 0x80000008;
  }
  if (iVar1 == 8) {
    pQVar3 = (QArrayData *)QString::fromAscii_helper("\\\\Mac\\Home",10);
    QString::mid((int)&local_50,param_2);
    FUN_100a4b830(&local_48,&local_50,8);
    if (1 < *(int *)pQVar3 + 1U) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
    }
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar3;
    QString::append(&local_40);
    QString::operator=(param_3,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a4bd3e;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_100a4bd3e:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a4bd6e;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100a4bd6e:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a4bd9e;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100a4bd9e:
    if (*(int *)pQVar3 == -1) {
      return 0;
    }
    if (*(int *)pQVar3 == 0) goto LAB_100a4beff;
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + -1;
    iVar1 = *(int *)pQVar3;
    UNLOCK();
  }
  else {
    pQVar3 = (QArrayData *)QString::fromAscii_helper("//.psf/Home",0xb);
    QString::mid((int)&local_68,param_2);
    FUN_100a4b830(&local_60,&local_68,iVar1);
    if (1 < *(int *)pQVar3 + 1U) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
    }
    local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar3;
    QString::append(&local_58);
    QString::operator=(param_3,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a4be74;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_100a4be74:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a4bea4;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_100a4bea4:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a4bed4;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100a4bed4:
    if (*(int *)pQVar3 == -1) {
      return 0;
    }
    if (*(int *)pQVar3 == 0) goto LAB_100a4beff;
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + -1;
    iVar1 = *(int *)pQVar3;
    UNLOCK();
  }
  local_31 = iVar1 != 0;
  if ((bool)local_31) {
    return 0;
  }
LAB_100a4beff:
  QArrayData::deallocate(pQVar3,2,8);
  return 0;
}

