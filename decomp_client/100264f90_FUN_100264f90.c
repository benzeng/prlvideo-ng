
undefined4 FUN_100264f90(long param_1)

{
  long *plVar1;
  QArrayData *pQVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  QString this;
  QString QVar6;
  undefined8 uVar7;
  QArrayData *local_a8;
  QArrayData *local_a0;
  long local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QTypedArrayData<unsigned_short> *local_48;
  QString local_40;
  undefined1 local_31;
  
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  QString::operator=((QString *)(param_1 + 0x140),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100265004;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100265004:
  lVar5 = CVmConfiguration::getVmHardwareList();
  QVar6.field0_0x0 =
       *(QTypedArrayData<unsigned_short> **)
        (*(long *)(lVar5 + 0x1b0) + 0x10 + (long)*(int *)(*(long *)(lVar5 + 0x1b0) + 8) * 8);
  CVmDevice::setEmulatedType((uint)QVar6.field0_0x0);
  lVar5 = *(long *)(*(long *)(param_1 + 0x128) + 0xf0);
  if (*(int *)(lVar5 + 8) < *(int *)(lVar5 + 0xc)) {
    this.field0_0x0 = operator_new(0xb0);
    CVmHddPartition::CVmHddPartition((CVmHddPartition *)this.field0_0x0);
    local_48 = this.field0_0x0;
    FUN_100265b30(*(long *)(param_1 + 0x128) + 0xf0,0);
    CVmHddPartition::getSystemName();
    CVmHddPartition::setSystemName(this);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002650cc;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1002650cc:
    FUN_1001297e0(QVar6.field0_0x0 + 0xf0,&local_48);
  }
  CVmDevice::getSystemName();
  CVmDevice::setSystemName(QVar6);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100265127;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100265127:
  CVmDevice::getUserFriendlyName();
  CVmDevice::setUserFriendlyName(QVar6);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100265171;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100265171:
  CVmHardDisk::getSize();
  CVmHardDisk::setSize((ulong)QVar6.field0_0x0);
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getHomePath();
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmName();
  FUN_1005cb9c0(&local_70,uVar7,&local_78,&local_68);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10026520b;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10026520b:
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    pQVar2 = local_80;
    lVar5 = *(long *)(local_80 + 0x10);
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",2,
                  "Try to create vm on Boot Camp with name \'%s\' in location \'%s\'",pQVar2 + lVar5
                  ,local_88 + *(long *)(local_88 + 0x10));
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10026529c;
      }
      QArrayData::deallocate(local_88,1,8);
    }
LAB_10026529c:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002652cc;
      }
      QArrayData::deallocate(local_80,1,8);
    }
  }
LAB_1002652cc:
  QVar6.field0_0x0 = (QTypedArrayData<unsigned_short> *)CVmConfiguration::getVmIdentification();
  local_90 = local_70;
  if (1 < *(int *)local_70 + 1U) {
    LOCK();
    *(int *)local_70 = *(int *)local_70 + 1;
    local_31 = *(int *)local_70 != 0;
    UNLOCK();
  }
  CVmIdentification::setVmName(QVar6);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100265335;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100265335:
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  bVar3 = (bool)CVmTools::getVmSharedProfile();
  CVmSharedProfile::setEnabled(bVar3);
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10015b140(&local_98,uVar7,*(undefined4 *)(param_1 + 0x130),1);
  plVar1 = (long *)(param_1 + 0x138);
  if (plVar1 != &local_98) {
    if (*plVar1 != 0) {
      _PrlHandle_Free();
    }
    *plVar1 = local_98;
    if (local_98 != 0) {
      _PrlHandle_AddRef();
    }
  }
  if (local_98 != 0) {
    _PrlHandle_Free();
  }
  uVar7 = *(undefined8 *)(param_1 + 0x138);
  CBaseNode::toString(SUB81(&local_a8,0),(bool)((char)param_1 + '8'));
  QString::toUtf8();
  if ((1 < *(uint *)local_a0) || (*(long *)(local_a0 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_a0,*(uint *)(local_a0 + 4) + 1,*(uint *)(local_a0 + 8) >> 0x1f);
  }
  uVar4 = _PrlVm_FromString(uVar7,local_a0 + *(long *)(local_a0 + 0x10));
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10026546f;
    }
    QArrayData::deallocate(local_a0,1,8);
  }
LAB_10026546f:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002654a5;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1002654a5:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002654d5;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1002654d5:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return uVar4;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_68,2,8);
  }
  return uVar4;
}

