
undefined4 FUN_100075b40(long param_1,undefined8 param_2,QString param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  (**(code **)(*(long *)param_3.field0_0x0 + 0x68))(param_3.field0_0x0);
  CVmEventBase::setEventType(param_3.field0_0x0,0x186b5);
  local_40 = *(QArrayData **)(*(long *)(param_1 + 0x10) + 0x18);
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_31 = *(int *)local_40 != 0;
    UNLOCK();
  }
  CVmEventBase::setEventIssuerId(param_3);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100075bc9;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100075bc9:
  local_48 = *(QArrayData **)(*(long *)(param_1 + 0x10) + 0x18);
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_31 = *(int *)local_48 != 0;
    UNLOCK();
  }
  CVmEventBase::setInitRequestId(param_3);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100075c22;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100075c22:
  CVmEventBase::setEventIssuerType(param_3.field0_0x0,0);
  CVmConfiguration::getVmSettings();
  uVar6 = CVmSettings::getVmTools();
  local_58 = (QArrayData *)QString::fromAscii_helper("Tools",5);
  FUN_10007fd70(&local_50,uVar6,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100075c99;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100075c99:
  CVmConfiguration::getVmSettings();
  uVar7 = CVmSettings::getVmTools();
  local_68 = (QArrayData *)QString::fromAscii_helper("Tools",5);
  FUN_10007fd70(&local_60,uVar7,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100075d05;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100075d05:
  CVmTools::getSmoothScrolling();
  bVar1 = SmoothScrolling::isEnabled();
  CVmTools::getSmoothScrolling();
  bVar2 = SmoothScrolling::isEnabled();
  if ((bVar1 ^ bVar2) == 1) {
    FUN_100091780(DAT_1011c3698,bVar2);
  }
  bVar1 = CVmTools::isIsolatedVm();
  bVar2 = CVmTools::isIsolatedVm();
  if ((bVar1 ^ bVar2) == 1) {
    CVmTools::setIsolatedVm(SUB81(uVar6,0));
    (**(code **)(**(long **)(*(long *)(param_1 + 0x20) + 0x1a18) + 0x68))();
  }
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmRuntimeOptions();
  bVar1 = CVmRunTimeOptions::isDisableWin7Logo();
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmRuntimeOptions();
  bVar2 = CVmRunTimeOptions::isDisableWin7Logo();
  uVar5 = 0;
  if ((bVar1 ^ bVar2) == 1) {
    CVmConfiguration::getVmSettings();
    bVar3 = (bool)CVmSettings::getVmRuntimeOptions();
    CVmRunTimeOptions::setDisableWin7Logo(bVar3);
    uVar5 = FUN_10009f600(DAT_1011c3698,&local_50,&local_60);
  }
  cVar4 = operator==(&local_60,&local_50);
  if (cVar4 == '\0') {
    FUN_100080150(uVar6,&local_60);
    uVar5 = FUN_10009f600(DAT_1011c3698,&local_50,&local_60);
  }
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100075e64;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100075e64:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_50.field0_0x0 != 0) {
        return uVar5;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
  return uVar5;
}

