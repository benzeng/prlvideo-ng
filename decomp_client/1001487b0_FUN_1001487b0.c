
void FUN_1001487b0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  QString QVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  QArrayData *pQVar6;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (2 < DAT_10230ffd0) {
    local_48 = (QArrayData *)*param_2;
    if (1 < *(int *)local_48 + 1U) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    pQVar6 = local_40 + *(long *)(local_40 + 0x10);
    local_58 = (QArrayData *)*param_3;
    if (1 < *(int *)local_58 + 1U) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_100df99c0("","prl_client_app",3,
                  "Connecting sound output device. \n System name: %s \n Friendly name: %s",pQVar6,
                  local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10014888a;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_10014888a:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001488ba;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1001488ba:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001488ea;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_1001488ea:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10014891a;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10014891a:
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar3 = FUN_10018c2b0(uVar3);
  lVar4 = FUN_10010dec0(uVar3,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  if ((lVar4 == 0) || (*(int *)(param_1 + 0x20) != 0xc)) {
    if (DAT_10230ffd0 < 1) {
      return;
    }
    FUN_100df99c0("","prl_client_app",1,"Wrong device type");
    return;
  }
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar3 = FUN_10018c2b0(uVar3);
  cVar2 = FUN_10010dec0(uVar3,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  CBaseNode::toString(SUB81(&local_60,0),(bool)(cVar2 + '\x10'));
  lVar4 = FUN_10010e020(0xc,&local_60);
  plVar5 = (long *)0x0;
  if (lVar4 != 0) {
    plVar5 = (long *)___dynamic_cast(lVar4,PTR_typeinfo_1021e1740,PTR_typeinfo_1021e16b8,0);
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001489fa;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1001489fa:
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar4 = CVmSoundDevice::getSoundOutputs();
  if (*(int *)(*(long *)(lVar4 + 0xa8) + 0xc) == *(int *)(*(long *)(lVar4 + 0xa8) + 8))
  goto LAB_100148afb;
  lVar4 = CVmSoundDevice::getSoundOutputs();
  QVar1.field0_0x0 =
       *(QTypedArrayData<unsigned_short> **)
        (*(long *)(lVar4 + 0xa8) + 0x10 + (long)*(int *)(*(long *)(lVar4 + 0xa8) + 8) * 8);
  pQVar6 = (QArrayData *)*param_2;
  if (1 < *(int *)pQVar6 + 1U) {
    LOCK();
    *(int *)pQVar6 = *(int *)pQVar6 + 1;
    local_31 = *(int *)pQVar6 != 0;
    UNLOCK();
  }
  CVmDevice::setSystemName(QVar1);
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100148a87;
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_100148a87:
  lVar4 = CVmSoundDevice::getSoundOutputs();
  QVar1.field0_0x0 =
       *(QTypedArrayData<unsigned_short> **)
        (*(long *)(lVar4 + 0xa8) + 0x10 + (long)*(int *)(*(long *)(lVar4 + 0xa8) + 8) * 8);
  pQVar6 = (QArrayData *)*param_3;
  if (1 < *(int *)pQVar6 + 1U) {
    LOCK();
    *(int *)pQVar6 = *(int *)pQVar6 + 1;
    local_31 = *(int *)pQVar6 != 0;
    UNLOCK();
  }
  CVmDevice::setUserFriendlyName(QVar1);
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100148af0;
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_100148af0:
  FUN_100147770(param_1,plVar5);
LAB_100148afb:
  (**(code **)(*plVar5 + 0x20))(plVar5);
  return;
}

