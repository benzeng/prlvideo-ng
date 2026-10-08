
undefined8 * FUN_1005ce450(undefined8 *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  QArrayData *pQVar5;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if ((param_2 == 0) || (lVar4 = CHwHddPartition::getOsDistrInfo(), lVar4 == 0)) {
LAB_1005ce606:
    *param_1 = PTR_shared_null_1021e1288;
    return param_1;
  }
  CHwHddPartition::getOsDistrInfo();
  uVar1 = CHwOsDistrInfo::getOsVersion();
  if (uVar1 < 0x701) goto LAB_1005ce606;
  CHwHddPartition::getOsDistrInfo();
  uVar1 = CHwOsDistrInfo::getOsVersion();
  if (0x703 < uVar1) goto LAB_1005ce606;
  CHwHddPartition::getOsDistrInfo();
  iVar2 = CHwOsDistrInfo::getMajor();
  if (iVar2 == 0) goto LAB_1005ce606;
  CHwHddPartition::getOsDistrInfo();
  iVar2 = CHwOsDistrInfo::getPatch();
  if (iVar2 == 0) {
    local_48 = (QArrayData *)QString::fromAscii_helper("%1.%2",5);
    CHwHddPartition::getOsDistrInfo();
    uVar3 = CHwOsDistrInfo::getMajor();
    QString::arg(&local_40,&local_48,uVar3,0,10,0x20);
    CHwHddPartition::getOsDistrInfo();
    uVar3 = CHwOsDistrInfo::getMinor();
    QString::arg(param_1,&local_40,uVar3,0,10,0x20);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_19 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1005ce6ba;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1005ce6ba:
    if (*(int *)local_48 == -1) {
      return param_1;
    }
    pQVar5 = local_48;
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    goto LAB_1005ce6e3;
  }
  local_38 = (QArrayData *)QString::fromAscii_helper("%1.%2.%3",8);
  CHwHddPartition::getOsDistrInfo();
  uVar3 = CHwOsDistrInfo::getMajor();
  QString::arg(&local_30,&local_38,uVar3,0,10,0x20);
  CHwHddPartition::getOsDistrInfo();
  uVar3 = CHwOsDistrInfo::getMinor();
  QString::arg(&local_28,&local_30,uVar3,0,10,0x20);
  CHwHddPartition::getOsDistrInfo();
  uVar3 = CHwOsDistrInfo::getPatch();
  QString::arg(param_1,&local_28,uVar3,0,10,0x20);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005ce5ac;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1005ce5ac:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005ce5dc;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005ce5dc:
  if (*(int *)local_38 == -1) {
    return param_1;
  }
  pQVar5 = local_38;
  if (*(int *)local_38 != 0) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + -1;
    UNLOCK();
    if (*(int *)local_38 != 0) {
      return param_1;
    }
    local_19 = 0;
  }
LAB_1005ce6e3:
  QArrayData::deallocate(pQVar5,2,8);
  return param_1;
}

