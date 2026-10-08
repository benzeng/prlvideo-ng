
ulong FUN_1005fca20(ulong param_1,int param_2,int param_3,undefined8 *param_4)

{
  uint uVar1;
  QString *this;
  ulong uVar2;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  if (param_2 != 1) {
    return param_1;
  }
  this = (QString *)*param_4;
  if (param_3 == 1) {
    CAppliance::getApplianceId();
    QString::operator=(this,&local_30);
    uVar1 = *(uint *)local_30.field0_0x0;
    if (uVar1 == 0xffffffff) {
      return 0xffffffff;
    }
    if (uVar1 != 0) {
      LOCK();
      *(uint *)local_30.field0_0x0 = *(uint *)local_30.field0_0x0 - 1;
      UNLOCK();
      if (*(uint *)local_30.field0_0x0 != 0) {
        return (ulong)uVar1;
      }
      local_19 = 0;
    }
  }
  else {
    if (param_3 != 0) {
      return param_1;
    }
    CAppliance::getApplianceName();
    QString::operator=(this,&local_28);
    uVar1 = *(uint *)local_28.field0_0x0;
    if (uVar1 == 0xffffffff) {
      return 0xffffffff;
    }
    local_30.field0_0x0 = local_28.field0_0x0;
    if (uVar1 != 0) {
      LOCK();
      *(uint *)local_28.field0_0x0 = *(uint *)local_28.field0_0x0 - 1;
      UNLOCK();
      if (*(uint *)local_28.field0_0x0 != 0) {
        return (ulong)uVar1;
      }
      local_19 = 0;
    }
  }
  uVar2 = QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  return uVar2;
}

