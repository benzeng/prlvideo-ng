
undefined8 FUN_100a4c1c0(long param_1,QString *param_2,QString *param_3)

{
  QArrayData *pQVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  QArrayData *local_68;
  QString local_60;
  QString local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  uVar4 = FUN_100319390(*(undefined8 *)(param_1 + 0x10));
  FUN_10018c2b0(uVar4);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  iVar2 = CVmCommonOptions::getOsType();
  if (2 < iVar2 - 7U) {
    return 0x80000008;
  }
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("/",1);
  if (iVar2 != 8) {
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("\\",1);
    QString::operator=(&local_38,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_29 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a4c280;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
LAB_100a4c280:
  iVar3 = QString::lastIndexOf(param_2,&local_38,0xffffffff,1);
  if (iVar3 == -1) {
    pQVar1 = (QArrayData *)param_2->field0_0x0;
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    local_50 = pQVar1;
    FUN_100a4c600(&local_48,&local_50,iVar2);
    QString::operator=(param_3,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_29 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a4c3f4;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_100a4c3f4:
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_29 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a4c41f;
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
    goto LAB_100a4c41f;
  }
  QString::right((int)&local_58);
  QString::operator=(param_2,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a4c2f2;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100a4c2f2:
  pQVar1 = (QArrayData *)param_2->field0_0x0;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_29 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  local_68 = pQVar1;
  FUN_100a4c600(&local_60,&local_68,iVar2);
  QString::operator=(param_3,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_29 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a4c357;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100a4c357:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a4c41f;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100a4c41f:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return 0;
}

