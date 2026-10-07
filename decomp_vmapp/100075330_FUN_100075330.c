
undefined1 FUN_100075330(long param_1,QString param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_40 = (QArrayData *)QString::fromAscii_helper("license_info",0xc);
  lVar3 = CVmEvent::getEventParameter(param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007539b;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10007539b:
  if (lVar3 == 0) {
    return 0;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper("license_trial_info",0x12);
  lVar3 = CVmEvent::getEventParameter(param_2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000753f8;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1000753f8:
  if (lVar3 == 0) {
    return 0;
  }
  local_50 = (QArrayData *)QString::fromAscii_helper("license_lang",0xc);
  lVar3 = CVmEvent::getEventParameter(param_2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100075455;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100075455:
  if (lVar3 == 0) {
    return 0;
  }
  local_58 = (QArrayData *)QString::fromAscii_helper("license_edition",0xf);
  lVar3 = CVmEvent::getEventParameter(param_2);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000754b2;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1000754b2:
  if (lVar3 == 0) {
    return 0;
  }
  CVmEventParameter::getParamValue();
  iVar1 = QString::toUInt((bool *)&local_60,0);
  *(bool *)(param_1 + 0x20) = iVar1 != 0;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100075514;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100075514:
  CVmEventParameter::getParamValue();
  iVar1 = QString::toUInt((bool *)&local_68,0);
  *(bool *)(param_1 + 0x21) = iVar1 != 0;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100075569;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100075569:
  CVmEventParameter::getParamValue();
  uVar2 = QString::toUInt((bool *)&local_70,0);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000755bb;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1000755bb:
  CVmEventParameter::getParamValue();
  uVar2 = QString::toUInt((bool *)&local_78,0);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      UNLOCK();
      if (*(int *)local_78 != 0) {
        return 1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_78,2,8);
  }
  return 1;
}

