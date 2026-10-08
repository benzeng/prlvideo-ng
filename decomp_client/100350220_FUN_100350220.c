
void FUN_100350220(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  QArrayData *pQVar3;
  QVariant local_80;
  QString local_70;
  QString local_68;
  Data_conflict local_60;
  QString local_58 [2];
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getTravelOptions();
  CVmTravelOptions::getCondition();
  CVmConfiguration::getVmSettings();
  CVmSettings::getTravelOptions();
  CVmTravelOptions::getCondition();
  iVar1 = CVmTravelCondition::getQuit();
  iVar2 = CVmTravelCondition::getQuit();
  if (iVar1 == iVar2) {
    iVar1 = CVmTravelCondition::getEnter();
    iVar2 = CVmTravelCondition::getEnter();
    if (iVar1 == iVar2) {
      iVar1 = CVmTravelCondition::getEnterBetteryThreshold();
      iVar2 = CVmTravelCondition::getEnterBetteryThreshold();
      if (iVar1 == iVar2) {
        return;
      }
    }
  }
  QTimer::stop();
  QSettings::QSettings((QSettings *)local_58,(QObject *)0x0);
  pQVar3 = (QArrayData *)QString::fromAscii_helper("Travel",6);
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_29 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar3;
  QString::fromUtf8_helper((char *)&local_48,0x1e2468c);
  QString::append(&local_70);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100350342;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100350342:
  local_68.field0_0x0 = local_70.field0_0x0;
  if (1 < *(int *)local_70.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
    local_29 = *(int *)local_70.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1dec7b6);
  QString::append(&local_68);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003503ad;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1003503ad:
  local_60.field15 = (QObject *)local_68.field0_0x0;
  if (1 < *(int *)local_68.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
    local_29 = *(int *)local_68.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1dec7bd);
  QString::append((QString *)&local_60);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100350418;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100350418:
  QVariant::QVariant(&local_80,1);
  QSettings::setValue(local_58,(QVariant *)&local_60);
  QVariant::~QVariant(&local_80);
  if (*(int *)local_60.field15 != -1) {
    if (*(int *)local_60.field15 != 0) {
      LOCK();
      *(int *)local_60.field15 = *(int *)local_60.field15 + -1;
      local_29 = *(int *)local_60.field15 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100350470;
    }
    QArrayData::deallocate((QArrayData *)local_60.field15,2,8);
  }
LAB_100350470:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_29 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003504a0;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1003504a0:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_29 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003504d0;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1003504d0:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003504fd;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1003504fd:
  QSettings::~QSettings((QSettings *)local_58);
  FUN_100350790(param_1,0);
  return;
}

