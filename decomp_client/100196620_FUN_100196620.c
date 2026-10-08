
undefined8 FUN_100196620(long param_1,long *param_2,undefined1 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  QArrayData *pQVar6;
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
  
  uVar4 = FUN_100152280();
  FUN_100188480(&local_40,param_1);
  lVar5 = FUN_1001547d0(uVar4,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100196695;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100196695:
  if (lVar5 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get server instance.");
    return 0;
  }
  local_48 = 0;
  iVar1 = _PrlVmCfg_CreateVmDev(*(undefined8 *)(param_1 + 0x40),6,&local_48);
  uVar4 = 0;
  if (iVar1 != 0) goto LAB_100196a9a;
  local_58 = (QArrayData *)QString::fromAscii_helper("Hdd",3);
  FUN_10019a4f0(&local_50,param_2,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100196717;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100196717:
  lVar5 = local_48;
  QString::toUtf8();
  if ((1 < *(uint *)local_60) || (*(long *)(local_60 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_60,*(uint *)(local_60 + 4) + 1,*(uint *)(local_60 + 8) >> 0x1f);
  }
  iVar1 = _PrlVmDev_FromString(lVar5,local_60 + *(long *)(local_60 + 0x10));
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100196791;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_100196791:
  uVar4 = 0;
  if (iVar1 == 0) {
    FUN_100188480(&local_70,param_1);
    QString::toUtf8();
    if ((1 < *(uint *)local_68) || (*(long *)(local_68 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_68,*(uint *)(local_68 + 4) + 1,*(uint *)(local_68 + 8) >> 0x1f)
      ;
    }
    pQVar6 = local_68 + *(long *)(local_68 + 0x10);
    FUN_10018d830(&local_80,param_1);
    QString::toUtf8();
    if ((1 < *(uint *)local_78) || (*(long *)(local_78 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_78,*(uint *)(local_78 + 4) + 1,*(uint *)(local_78 + 8) >> 0x1f)
      ;
    }
    FUN_100df99c0("","prl_client_app",0,"Sending [DspCmdDirCreateImage] request %s %s ...",pQVar6);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10019687d;
      }
      QArrayData::deallocate(local_78,1,8);
    }
LAB_10019687d:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001968ad;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_1001968ad:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001968dd;
      }
      QArrayData::deallocate(local_68,1,8);
    }
LAB_1001968dd:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10019690d;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_10019690d:
    lVar5 = _PrlVmDev_CreateImage(local_48,param_3,0);
    uVar4 = CSdkCommunicator::requestStorage();
    local_88 = lVar5;
    if (lVar5 != 0) {
      _PrlHandle_AddRef(lVar5);
    }
    uVar2 = (**(code **)(*param_2 + 0x68))(param_2);
    uVar3 = CVmDevice::getIndex();
    FUN_100188480(&local_c8,param_1);
    CRequestInfo::CRequestInfo(local_c0,0x7f0,uVar2,uVar3,&local_c8,(QObject *)0x0);
    uVar4 = CRequestStorage::addRequest(uVar4,&local_88,local_c0);
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
        if ((bool)local_31) goto LAB_100196a12;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_100196a12:
    if (*(int *)local_c8.field0_0x0 != -1) {
      if (*(int *)local_c8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
        local_31 = *(int *)local_c8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100196a48;
      }
      QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
    }
LAB_100196a48:
    if (local_88 != 0) {
      _PrlHandle_Free();
    }
    if (lVar5 != 0) {
      _PrlHandle_Free(lVar5);
    }
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100196a9a;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100196a9a:
  if (local_48 != 0) {
    _PrlHandle_Free();
  }
  return uVar4;
}

