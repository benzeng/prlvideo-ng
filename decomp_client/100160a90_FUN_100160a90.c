
undefined8 FUN_100160a90(long param_1,long *param_2,QObject *param_3)

{
  undefined *puVar1;
  QArrayData *pQVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  QArrayData *pQVar9;
  QString local_c0;
  CRequestInfo local_b8 [8];
  QArrayData *local_b0;
  int *local_a0;
  QVariant local_90;
  long local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  long local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  iVar3 = (**(code **)(*param_2 + 0x68))(param_2);
  uVar8 = 0;
  if (iVar3 != 6) goto LAB_100160f16;
  lVar7 = ___dynamic_cast(param_2,PTR_typeinfo_1021e1740,PTR_typeinfo_1021e1648,0);
  if (lVar7 != 0) {
    iVar3 = CVmDevice::getEmulatedType();
    uVar8 = 0;
    if (iVar3 != 1) goto LAB_100160f16;
    local_50 = (QArrayData *)QString::fromAscii_helper("Hdd",3);
    FUN_100178940(&local_48,lVar7,&local_50);
    QString::operator=(&local_40,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100160b6b;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_100160b6b:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100160b9b;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_100160b9b:
  local_58 = 0;
  iVar3 = _PrlVmDev_Create(6,&local_58);
  lVar7 = local_58;
  uVar8 = 0;
  if (iVar3 == 0) {
    QString::toUtf8();
    if ((1 < *(uint *)local_60) || (*(long *)(local_60 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_60,*(uint *)(local_60 + 4) + 1,*(uint *)(local_60 + 8) >> 0x1f)
      ;
    }
    iVar3 = _PrlVmDev_FromString(lVar7,local_60 + *(long *)(local_60 + 0x10));
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100160c3c;
      }
      QArrayData::deallocate(local_60,1,8);
    }
LAB_100160c3c:
    if (iVar3 != 0) {
      FUN_100df99c0("","prl_client_app",0,"Error while initializing floppy handle. RC = %.8X",iVar3)
      ;
    }
    QString::toUtf8();
    if ((1 < *(uint *)local_68) || (*(long *)(local_68 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_68,*(uint *)(local_68 + 4) + 1,*(uint *)(local_68 + 8) >> 0x1f)
      ;
    }
    pQVar9 = local_68 + *(long *)(local_68 + 0x10);
    uVar8 = FUN_100dd9170(0x829);
    EnumUtils::enumToString(&local_78,6);
    QString::toUtf8();
    if ((1 < *(uint *)local_70) || (*(long *)(local_70 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_70,*(uint *)(local_70 + 4) + 1,*(uint *)(local_70 + 8) >> 0x1f)
      ;
    }
    pQVar2 = local_70;
    lVar7 = *(long *)(local_70 + 0x10);
    uVar4 = CVmDevice::getIndex();
    FUN_100df99c0("","prl_client_app",0,"%s: sending [%s] request... The related device is %s %d",
                  pQVar9,uVar8,pQVar2 + lVar7,uVar4);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100160d73;
      }
      QArrayData::deallocate(local_70,1,8);
    }
LAB_100160d73:
    puVar1 = PTR_shared_null_1021e1288;
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100160daa;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100160daa:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100160dda;
      }
      QArrayData::deallocate(local_68,1,8);
    }
LAB_100160dda:
    uVar8 = CSdkCommunicator::requestStorage();
    local_80 = _PrlVmDev_UpdateInfo(*(undefined8 *)(param_1 + 0x80),local_58);
    uVar5 = (**(code **)(*param_2 + 0x68))(param_2);
    uVar6 = CVmDevice::getIndex();
    local_c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
    CRequestInfo::CRequestInfo(local_b8,0x829,uVar5,uVar6,&local_c0,param_3);
    uVar8 = CRequestStorage::addRequest(uVar8,&local_80,local_b8);
    QVariant::~QVariant(&local_90);
    if (local_a0 != (int *)0x0) {
      LOCK();
      *local_a0 = *local_a0 + -1;
      local_31 = *local_a0 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_a0 != (int *)0x0)) {
        operator_delete(local_a0);
      }
    }
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100160ec4;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_100160ec4:
    if (*(int *)local_c0.field0_0x0 != -1) {
      if (*(int *)local_c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
        local_31 = *(int *)local_c0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100160efa;
      }
      QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
    }
LAB_100160efa:
    if (local_80 != 0) {
      _PrlHandle_Free();
    }
  }
  if (local_58 != 0) {
    _PrlHandle_Free();
  }
LAB_100160f16:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return uVar8;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return uVar8;
}

