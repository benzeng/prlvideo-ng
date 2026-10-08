
void FUN_100149970(long param_1,undefined8 *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  QArrayData *pQVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  QString QVar6;
  uint uVar7;
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
  if ((lVar5 == 0) || (*(int *)(param_1 + 0x20) != 8)) {
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
    FUN_100df99c0("","prl_client_app",3,
                  "Connecting network adapter. \n Adapter name: %s \n Adapter index: %.8X",
                  local_40 + *(long *)(local_40 + 0x10),param_3);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100149a66;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_100149a66:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100149a96;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100149a96:
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
         ___dynamic_cast(lVar5,PTR_typeinfo_1021e1740,PTR_typeinfo_1021e16f8,0);
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100149b47;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100149b47:
  if (QVar6.field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) {
    return;
  }
  uVar7 = (uint)QVar6.field0_0x0;
  CVmDevice::setEmulatedType(uVar7);
  if ((param_3 == -1) || (param_4 != 0)) {
    CVmGenericNetworkAdapter::setBoundAdapterIndex(uVar7);
  }
  else {
    CVmGenericNetworkAdapter::setBoundAdapterIndex(uVar7);
  }
  pQVar2 = (QArrayData *)*param_2;
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_31 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  CVmGenericNetworkAdapter::setBoundAdapterName(QVar6);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100149c14;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100149c14:
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
      if ((bool)local_31) goto LAB_100149c68;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100149c68:
  FUN_100147770(param_1,QVar6.field0_0x0);
  (**(code **)(*(long *)QVar6.field0_0x0 + 0x20))(QVar6.field0_0x0);
  return;
}

