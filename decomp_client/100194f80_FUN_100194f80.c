
undefined8 FUN_100194f80(long param_1,long *param_2,undefined1 param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  QArrayData *pQVar5;
  QString local_c8;
  CRequestInfo local_c0 [8];
  QArrayData *local_b8;
  int *local_a8;
  QVariant local_98;
  long local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  long local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar3 = FUN_100152280();
  FUN_100188480(&local_40,param_1);
  lVar4 = FUN_1001547d0(uVar3,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100194ff2;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100194ff2:
  if (lVar4 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get server instance.");
    return 0;
  }
  local_48 = 0;
  iVar1 = _PrlVmCfg_CreateVmDev(*(undefined8 *)(param_1 + 0x40),3,&local_48);
  uVar3 = 0;
  if (iVar1 != 0) goto LAB_100195417;
  local_58 = (QArrayData *)QString::fromAscii_helper("Fdd",3);
  FUN_10019a100(&local_50,param_2,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100195074;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100195074:
  lVar4 = local_48;
  QString::toUtf8();
  if ((1 < *(uint *)local_60) || (*(long *)(local_60 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_60,*(uint *)(local_60 + 4) + 1,*(uint *)(local_60 + 8) >> 0x1f);
  }
  iVar1 = _PrlVmDev_FromString(lVar4,local_60 + *(long *)(local_60 + 0x10));
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001950ed;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_1001950ed:
  if (iVar1 == 0) {
    FUN_100188480(&local_70,param_1);
    QString::toUtf8();
    if ((1 < *(uint *)local_68) || (*(long *)(local_68 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_68,*(uint *)(local_68 + 4) + 1,*(uint *)(local_68 + 8) >> 0x1f)
      ;
    }
    pQVar5 = local_68 + *(long *)(local_68 + 0x10);
    FUN_10018d830(&local_80,param_1);
    QString::toUtf8();
    if ((1 < *(uint *)local_78) || (*(long *)(local_78 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_78,*(uint *)(local_78 + 4) + 1,*(uint *)(local_78 + 8) >> 0x1f)
      ;
    }
    FUN_100df99c0("","prl_client_app",0,"Sending [DspCmdDirCreateImage] request %s %s ...",pQVar5);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10019521c;
      }
      QArrayData::deallocate(local_78,1,8);
    }
LAB_10019521c:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10019524c;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_10019524c:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10019527c;
      }
      QArrayData::deallocate(local_68,1,8);
    }
LAB_10019527c:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001952ac;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1001952ac:
    lVar4 = _PrlVmDev_CreateImage(local_48,param_3,0);
    uVar3 = CSdkCommunicator::requestStorage();
    local_88 = lVar4;
    if (lVar4 != 0) {
      _PrlHandle_AddRef(lVar4);
    }
    uVar2 = (**(code **)(*param_2 + 0x68))(param_2);
    local_c8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    CRequestInfo::CRequestInfo(local_c0,0x7f0,uVar2,0,&local_c8,(QObject *)0x0);
    uVar3 = CRequestStorage::addRequest(uVar3,&local_88,local_c0);
    QVariant::~QVariant(&local_98);
    if (local_a8 != (int *)0x0) {
      LOCK();
      *local_a8 = *local_a8 + -1;
      local_31 = *local_a8 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_a8 != (int *)0x0)) {
        operator_delete(local_a8);
      }
    }
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100195396;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_100195396:
    if (*(int *)local_c8.field0_0x0 != -1) {
      if (*(int *)local_c8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
        local_31 = *(int *)local_c8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001953cc;
      }
      QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
    }
LAB_1001953cc:
    if (local_88 != 0) {
      _PrlHandle_Free();
    }
    if (lVar4 != 0) {
      _PrlHandle_Free(lVar4);
    }
  }
  else {
    uVar3 = 0;
    FUN_100df99c0("","prl_client_app",0,"Error while initializing floppy handle");
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100195417;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100195417:
  if (local_48 != 0) {
    _PrlHandle_Free();
  }
  return uVar3;
}

