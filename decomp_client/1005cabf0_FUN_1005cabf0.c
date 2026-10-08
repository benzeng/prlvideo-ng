
undefined1 FUN_1005cabf0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  QString QVar1;
  long lVar2;
  QString this;
  undefined8 uVar3;
  char *pcVar4;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QTypedArrayData<unsigned_short> *local_40;
  undefined1 local_31;
  
  if (*(int *)(*param_3 + 4) == 0) {
    pcVar4 = "(!)Error: Bootcamp partition are empty.";
    goto LAB_1005cae1e;
  }
  lVar2 = CVmConfiguration::getVmHardwareList();
  if (*(int *)(*(long *)(lVar2 + 0x1b0) + 0xc) == *(int *)(*(long *)(lVar2 + 0x1b0) + 8)) {
    pcVar4 = "(!)Error: Invalid VmConfig.";
    goto LAB_1005cae1e;
  }
  lVar2 = CVmConfiguration::getVmHardwareList();
  QVar1.field0_0x0 =
       *(QTypedArrayData<unsigned_short> **)
        (*(long *)(lVar2 + 0x1b0) + 0x10 + (long)*(int *)(*(long *)(lVar2 + 0x1b0) + 8) * 8);
  this.field0_0x0 = operator_new(0xb0);
  CVmHddPartition::CVmHddPartition((CVmHddPartition *)this.field0_0x0);
  local_48 = (QArrayData *)*param_3;
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_31 = *(int *)local_48 != 0;
    UNLOCK();
  }
  local_40 = this.field0_0x0;
  CVmHddPartition::setSystemName(this);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005cace5;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005cace5:
  FUN_1001297e0(QVar1.field0_0x0 + 0xf0,&local_40);
  CVmDevice::setEmulatedType((uint)QVar1.field0_0x0);
  CVmHddPartition::getSystemName();
  uVar3 = FUN_10015a340(param_2);
  lVar2 = FUN_100112d30(&local_50,uVar3);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005cad55;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005cad55:
  if (lVar2 == 0) {
    pcVar4 = "(!)Error: Can\'t get real hard disk info to configure bootcamp.";
LAB_1005cae1e:
    FUN_100df99c0("","prl_client_app",0,pcVar4);
    return 0;
  }
  CHwHardDisk::getDeviceId();
  CVmDevice::setSystemName(QVar1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005cada8;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005cada8:
  CHwHardDisk::getDeviceName();
  CVmDevice::setUserFriendlyName(QVar1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005cadf2;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1005cadf2:
  CHwHardDisk::getDeviceSize();
  CVmHardDisk::setSize((ulong)QVar1.field0_0x0);
  return 1;
}

