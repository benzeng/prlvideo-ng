
void FUN_100149280(long param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  QArrayData *pQVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  QString QVar6;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar4 = FUN_10018c2b0(uVar4);
  lVar5 = FUN_10010dec0(uVar4,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  if ((lVar5 == 0) || (*(int *)(param_1 + 0x20) != 10)) {
    if (DAT_10230ffd0 < 1) {
      return;
    }
    FUN_100df99c0("","prl_client_app",1,"Wrong device type");
    return;
  }
  if (2 < DAT_10230ffd0) {
    local_48 = (QArrayData *)*param_2;
    if (1 < *(int *)local_48 + 1U) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_100df99c0("","prl_client_app",3,"Connecting socket: %s",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100149365;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_100149365:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100149395;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100149395:
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar4 = FUN_10018c2b0(uVar4);
  cVar3 = FUN_10010dec0(uVar4,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  CBaseNode::toString(SUB81(&local_50,0),(bool)(cVar3 + '\x10'));
  lVar5 = FUN_10010e020(uVar1,&local_50);
  QVar6.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  if (lVar5 != 0) {
    QVar6.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)
         ___dynamic_cast(lVar5,PTR_typeinfo_1021e1740,PTR_typeinfo_1021e1698,0);
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100149435;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100149435:
  if (QVar6.field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) {
    return;
  }
  pQVar2 = (QArrayData *)*param_2;
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_31 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  CVmDevice::setSystemName(QVar6);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100149492;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100149492:
  pQVar2 = (QArrayData *)*param_2;
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_31 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  CVmDevice::setUserFriendlyName(QVar6);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001494e6;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1001494e6:
  CVmDevice::setEmulatedType((uint)QVar6.field0_0x0);
  CVmSerialPort::setSocketMode(QVar6.field0_0x0,param_3);
  FUN_100147770(param_1,QVar6.field0_0x0);
  (**(code **)(*(long *)QVar6.field0_0x0 + 0x20))(QVar6.field0_0x0);
  return;
}

