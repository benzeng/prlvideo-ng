
CVmConfiguration * FUN_10015ab80(undefined8 param_1,undefined8 *param_2)

{
  QArrayData *pQVar1;
  uint uVar2;
  CVmConfiguration *this;
  undefined8 uVar3;
  QString QVar4;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  undefined1 local_49;
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  this = operator_new(0xf8);
  CVmConfiguration::CVmConfiguration(this);
  CVmConfiguration::getVmHardwareList();
  uVar3 = CVmHardware::getCpu();
  CVmCpu::setEnableVTxSupport(uVar3,1);
  CVmConfiguration::getVmSettings();
  uVar2 = CVmSettings::getVmCommonOptions();
  CVmCommonOptions::setOsVersion(uVar2);
  CVmConfiguration::getVmSettings();
  uVar2 = CVmSettings::getVmCommonOptions();
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  CVmCommonOptions::getOsVersion();
  CVmCommonOptions::setOsType(uVar2);
  QVar4.field0_0x0 = (QTypedArrayData<unsigned_short> *)CVmConfiguration::getVmIdentification();
  local_58 = (QArrayData *)*param_2;
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_49 = *(int *)local_58 != 0;
    UNLOCK();
  }
  CVmIdentification::setVmName(QVar4);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_49 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10015ac8a;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10015ac8a:
  FUN_100dda3c0(local_48);
  FUN_100dda260(&local_60,local_48);
  local_68 = local_60;
  if (1 < *(int *)local_60 + 1U) {
    LOCK();
    *(int *)local_60 = *(int *)local_60 + 1;
    local_49 = *(int *)local_60 != 0;
    UNLOCK();
  }
  CVmIdentification::setVmUuid(QVar4);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_49 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10015acf7;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10015acf7:
  FUN_100109c10(&local_70,param_1);
  pQVar1 = local_70;
  if (1 < *(int *)local_70 + 1U) {
    LOCK();
    *(int *)local_70 = *(int *)local_70 + 1;
    local_49 = *(int *)local_70 != 0;
    UNLOCK();
  }
  CVmIdentification::setHomePath(QVar4);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_49 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10015ad58;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10015ad58:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_49 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10015ad88;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10015ad88:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_49 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10015adb8;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10015adb8:
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return this;
}

