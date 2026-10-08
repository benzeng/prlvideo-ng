
void FUN_100cbfc70(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  QString QVar2;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  local_38 = (QArrayData *)QString::fromAscii_helper("System",6);
  local_40 = (QArrayData *)QString::fromAscii_helper("OS Type",7);
  FUN_100ccd670(param_2,&local_38,&local_40,10,0x807);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cbfcfd;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100cbfcfd:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cbfd2d;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100cbfd2d:
  CVmConfiguration::getVmSettings();
  uVar1 = CVmSettings::getVmCommonOptions();
  CVmCommonOptions::setOsType(uVar1);
  CVmConfiguration::getVmSettings();
  uVar1 = CVmSettings::getVmCommonOptions();
  CVmCommonOptions::setOsVersion(uVar1);
  CVmConfiguration::getVmSettings();
  QVar2.field0_0x0 = (QTypedArrayData<unsigned_short> *)CVmSettings::getVmCommonOptions();
  local_50 = (QArrayData *)QString::fromAscii_helper("System",6);
  local_58 = (QArrayData *)QString::fromAscii_helper("VM Description",0xe);
  local_60 = (QArrayData *)QString::fromAscii_helper("",0);
  FUN_100ccd600(&local_48,param_2,&local_50,&local_58,&local_60);
  CVmCommonOptions::setVmDescription(QVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cbfe34;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100cbfe34:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cbfe64;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100cbfe64:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100cbfe94;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100cbfe94:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return;
}

