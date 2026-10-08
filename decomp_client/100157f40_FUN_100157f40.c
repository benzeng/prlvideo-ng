
void FUN_100157f40(CSdkCommunicator *param_1,undefined8 *param_2,QString *param_3,
                  undefined8 *param_4,undefined8 *param_5,undefined8 *param_6,
                  CSdkCommunicator param_7)

{
  CSdkCommunicator *pCVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  undefined *puVar5;
  char cVar6;
  int iVar7;
  CDispCommonPreferences *this;
  CDispUser *this_00;
  CHostHardwareInfo *this_01;
  CHwFileSystemInfo *this_02;
  CParallelsNetworkConfig *this_03;
  undefined8 uVar8;
  ulong *puVar9;
  void *pvVar10;
  QObject *pQVar11;
  int *piVar12;
  int *piVar13;
  CDispApplianceConfigs *this_04;
  CSdkCommunicator *pCVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  QString local_e8;
  QArrayData *local_e0;
  QString local_d8;
  QArrayData *local_d0;
  QString local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QString local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QVariant local_90;
  long local_80;
  QString local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  undefined1 local_49;
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  CSdkCommunicator::CSdkCommunicator(param_1,*(undefined8 *)PTR_self_1021e1388,2);
  *(undefined ***)param_1 = &PTR_FUN_1021fcef0;
  piVar13 = (int *)*param_2;
  *(int **)(param_1 + 0x28) = piVar13;
  if (1 < *piVar13 + 1U) {
    LOCK();
    *piVar13 = *piVar13 + 1;
    local_49 = *piVar13 != 0;
    UNLOCK();
  }
  auVar16._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar16._0_8_ = PTR_shared_null_1021e1288;
  auVar16._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x30) = auVar16;
  piVar13 = (int *)*param_4;
  *(int **)(param_1 + 0x40) = piVar13;
  if (1 < *piVar13 + 1U) {
    LOCK();
    *piVar13 = *piVar13 + 1;
    local_49 = *piVar13 != 0;
    UNLOCK();
  }
  piVar13 = (int *)*param_4;
  *(int **)(param_1 + 0x48) = piVar13;
  if (1 < *piVar13 + 1U) {
    LOCK();
    *piVar13 = *piVar13 + 1;
    local_49 = *piVar13 != 0;
    UNLOCK();
  }
  piVar13 = (int *)*param_5;
  *(int **)(param_1 + 0x50) = piVar13;
  if (1 < *piVar13 + 1U) {
    LOCK();
    *piVar13 = *piVar13 + 1;
    local_49 = *piVar13 != 0;
    UNLOCK();
  }
  *(undefined **)(param_1 + 0x58) = PTR_shared_null_1021e1288;
  *(undefined4 *)(param_1 + 0x60) = 1;
  piVar13 = (int *)*param_6;
  *(int **)(param_1 + 0x68) = piVar13;
  if (1 < *piVar13 + 1U) {
    LOCK();
    *piVar13 = *piVar13 + 1;
    local_49 = *piVar13 != 0;
    UNLOCK();
  }
  *(undefined1 (*) [16])(param_1 + 0x70) = auVar16;
  pCVar14 = param_1 + 0x80;
  pCVar1 = param_1 + 0x90;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined **)(param_1 + 200) = PTR_shared_null_1021e15e8;
  this = operator_new(0x160);
  CDispCommonPreferences::CDispCommonPreferences(this);
  *(CDispCommonPreferences **)(param_1 + 0xd0) = this;
  this_00 = operator_new(0xd0);
  CDispUser::CDispUser(this_00);
  *(CDispUser **)(param_1 + 0xd8) = this_00;
  this_01 = operator_new(0x1c8);
  CHostHardwareInfo::CHostHardwareInfo(this_01);
  *(CHostHardwareInfo **)(param_1 + 0xe0) = this_01;
  this_02 = operator_new(0xb0);
  CHwFileSystemInfo::CHwFileSystemInfo(this_02);
  *(CHwFileSystemInfo **)(param_1 + 0xe8) = this_02;
  *(undefined4 *)(param_1 + 0xf0) = 1;
  param_1[0xf4] = param_7;
  param_1[0xf5] = (CSdkCommunicator)0x0;
  param_1[0xf6] = (CSdkCommunicator)0x0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0x10001;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  param_1[0x118] = (CSdkCommunicator)0x0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  this_03 = operator_new(0xd8);
  CParallelsNetworkConfig::CParallelsNetworkConfig(this_03);
  *(CParallelsNetworkConfig **)(param_1 + 0x120) = this_03;
  puVar5 = PTR_shared_null_1021e12f0;
  if (*(int *)PTR_shared_null_1021e12f0 == -1) {
LAB_100158283:
    *(undefined **)(param_1 + 0x128) = puVar5;
  }
  else {
    if (*(int *)PTR_shared_null_1021e12f0 != 0) {
      LOCK();
      *(int *)PTR_shared_null_1021e12f0 = *(int *)PTR_shared_null_1021e12f0 + 1;
      local_49 = *(int *)puVar5 != 0;
      UNLOCK();
      goto LAB_100158283;
    }
    uVar8 = QMapDataBase::createData();
    *(undefined8 *)(param_1 + 0x128) = uVar8;
    if (*(long *)(puVar5 + 0x10) != 0) {
      puVar9 = (ulong *)FUN_100137920(*(long *)(puVar5 + 0x10),uVar8);
      lVar2 = *(long *)(param_1 + 0x128);
      *(ulong **)(lVar2 + 0x10) = puVar9;
      *puVar9 = *puVar9 & 3 | lVar2 + 8U;
      QMapDataBase::recalcMostLeftNode();
    }
  }
  if (*(int *)puVar5 != -1) {
    if (*(int *)puVar5 != 0) {
      LOCK();
      *(int *)puVar5 = *(int *)puVar5 + -1;
      local_49 = *(int *)puVar5 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1001582ce;
    }
    if (*(long *)(puVar5 + 0x10) != 0) {
      FUN_100137f10();
      QMapDataBase::freeTree((QMapNodeBase *)puVar5,(int)*(undefined8 *)(puVar5 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)PTR_shared_null_1021e12f0);
  }
LAB_1001582ce:
  param_1[0x13c] = (CSdkCommunicator)0x0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(int *)(*(long *)(param_1 + 0x68) + 4) == 0) {
    FUN_100dda3c0(local_48);
    FUN_100dda260(&local_78,local_48);
    QString::operator=((QString *)(param_1 + 0x68),&local_78);
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_49 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100158348;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
  }
LAB_100158348:
  *(undefined8 *)(param_1 + 0x118) = 0x100000000;
  if (*(long *)(param_1 + 0xf8) != 0) {
    _PrlHandle_Free();
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (*(long *)(param_1 + 0x80) != 0) {
    _PrlHandle_Free();
  }
  *(long *)pCVar14 = 0;
  _PrlSrv_Create(pCVar14);
  cVar6 = FUN_10010f120(param_3);
  if (cVar6 != '\0') {
    QString::operator=((QString *)(param_1 + 0x38),param_3);
  }
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar10 = operator_new(0x18);
    FUN_1001a61d0(pvVar10);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar10;
  }
  FUN_1001a6390(DAT_1023108e0,param_1,"2serverStateChanged(const QString&, GUI::ServerState)",
                "2serverStateChanged(const QString&, GUI::ServerState)",0);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar10 = operator_new(0x18);
    FUN_1001a61d0(pvVar10);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar10;
  }
  FUN_1001a6390(DAT_1023108e0,param_1,"2afterVmAdded(const GUI::VmId&)","2vmAdded(const GUI::VmId&)"
                ,0);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar10 = operator_new(0x18);
    FUN_1001a61d0(pvVar10);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar10;
  }
  FUN_1001a6390(DAT_1023108e0,param_1,"2beforeVmRemoved(const GUI::VmId&)",
                "2beforeVmRemoved(const GUI::VmId&)",0);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar10 = operator_new(0x18);
    FUN_1001a61d0(pvVar10);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar10;
  }
  FUN_1001a6390(DAT_1023108e0,param_1,"2afterVmRemoved(const QString&)","2vmRemoved(const QString&)"
                ,0);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar10 = operator_new(0x18);
    FUN_1001a61d0(pvVar10);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar10;
  }
  FUN_1001a6390(DAT_1023108e0,param_1,"2afterVmRemoved(const GUI::VmId&)",
                "2vmRemoved(const GUI::VmId&)",0);
  pQVar11 = operator_new(0x38);
  FUN_100616a20(pQVar11,param_1);
  piVar12 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar11);
  piVar13 = *(int **)(param_1 + 0xa8);
  if (piVar13 != piVar12) {
    if (piVar12 != (int *)0x0) {
      LOCK();
      *piVar12 = *piVar12 + 1;
      local_49 = *piVar12 != 0;
      UNLOCK();
      piVar13 = *(int **)(param_1 + 0xa8);
    }
    if (piVar13 != (int *)0x0) {
      LOCK();
      *piVar13 = *piVar13 + -1;
      local_49 = *piVar13 != 0;
      UNLOCK();
      if ((!(bool)local_49) && (*(void **)(param_1 + 0xa8) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0xa8));
      }
    }
    *(int **)(param_1 + 0xa8) = piVar12;
    *(QObject **)(param_1 + 0xb0) = pQVar11;
  }
  if (piVar12 != (int *)0x0) {
    LOCK();
    *piVar12 = *piVar12 + -1;
    local_49 = *piVar12 != 0;
    UNLOCK();
    if (!(bool)local_49) {
      operator_delete(piVar12);
    }
  }
  pvVar10 = operator_new(8);
  local_80 = *(long *)pCVar14;
  if (local_80 != 0) {
    _PrlHandle_AddRef();
  }
  FUN_100615c00(pvVar10,&local_80);
  *(void **)(param_1 + 0xb8) = pvVar10;
  if (local_80 != 0) {
    _PrlHandle_Free();
  }
  pvVar10 = operator_new(0x18);
  FUN_1001add20(pvVar10);
  pQVar11 = operator_new(0x20);
  QObject::QObject(pQVar11,(QObject *)0x0);
  *(undefined ***)pQVar11 = &PTR_FUN_1021ee8a0;
  *(CSdkCommunicator **)(pQVar11 + 0x10) = param_1;
  pQVar11[0x18] = (QObject)0x0;
  *(QObject **)(param_1 + 0x130) = pQVar11;
  puVar5 = PTR_s_AppContext_102270dc0;
  QVariant::QVariant(&local_90,2);
  QObject::setProperty((char *)param_1,(QVariant *)puVar5);
  QVariant::~QVariant(&local_90);
  CSdkCommunicator::startCommunication();
  FUN_100d842d0(&local_98);
  plVar3 = *(long **)(param_1 + 0xe0);
  pcVar4 = *(code **)(*plVar3 + 0x58);
  local_a8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_98;
  if (1 < *(int *)local_98 + 1U) {
    LOCK();
    *(int *)local_98 = *(int *)local_98 + 1;
    local_49 = *(int *)local_98 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_70,0x1e2468c);
  QString::append(&local_a8);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_49 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1001586e6;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1001586e6:
  FUN_100137810(&local_a0,&local_a8,PTR_s_hwInfoCache_102270fa8);
  iVar7 = (*pcVar4)(plVar3,&local_a0,1);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_49 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10015874d;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10015874d:
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_49 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100158783;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_100158783:
  if (iVar7 == 0) {
    if (*(long *)pCVar1 != 0) {
      _PrlHandle_Free();
    }
    *(long *)pCVar1 = 0;
    iVar7 = _PrlSrvCfg_Create(pCVar1);
    if (iVar7 < 0) {
      if (2 < DAT_10230ffd0) {
        FUN_100df99c0("","prl_client_app",3,
                      "Error while creating server handle. Return code: [%.8X]",iVar7);
      }
    }
    else {
      uVar8 = *(undefined8 *)(param_1 + 0x90);
      CBaseNode::toString(SUB81(&local_b8,0),SUB81(*(undefined8 *)(param_1 + 0xe0),0));
      QString::toUtf8();
      if ((1 < *(uint *)local_b0) || (*(long *)(local_b0 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_b0,*(uint *)(local_b0 + 4) + 1,*(uint *)(local_b0 + 8) >> 0x1f);
      }
      iVar7 = _PrlHandle_FromString(uVar8,local_b0 + *(long *)(local_b0 + 0x10));
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_49 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_10015886c;
        }
        QArrayData::deallocate(local_b0,1,8);
      }
LAB_10015886c:
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_49 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1001588a2;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_1001588a2:
      if (iVar7 < 0) {
        uVar8 = FUN_100dddcf0(iVar7);
        FUN_100df99c0("","prl_client_app",0,"(!)Error: PrlHandle_FromString failed. RC: %s [%.8X]",
                      uVar8,iVar7);
      }
    }
    plVar3 = *(long **)(param_1 + 0xd0);
    pcVar4 = *(code **)(*plVar3 + 0x58);
    local_c8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_98;
    if (1 < *(int *)local_98 + 1U) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + 1;
      local_49 = *(int *)local_98 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_68,0x1e2468c);
    QString::append(&local_c8);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_49 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100158988;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100158988:
    FUN_100137810(&local_c0,&local_c8,PTR_s_dspPrefsCache_102270fb0);
    iVar7 = (*pcVar4)(plVar3,&local_c0,1);
    if (iVar7 == 0) {
      plVar3 = *(long **)(param_1 + 0x120);
      pcVar4 = *(code **)(*plVar3 + 0x58);
      local_d8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_98;
      if (1 < *(int *)local_98 + 1U) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + 1;
        local_49 = *(int *)local_98 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_60,0x1e2468c);
      QString::append(&local_d8);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_49 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_100158a44;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_100158a44:
      FUN_100137810(&local_d0,&local_d8,PTR_s_netConfigCache_102270fb8);
      iVar7 = (*pcVar4)(plVar3,&local_d0,1);
      bVar15 = iVar7 == 0;
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_49 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_100158aae;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
LAB_100158aae:
      if (*(int *)local_d8.field0_0x0 != -1) {
        if (*(int *)local_d8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
          local_49 = *(int *)local_d8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_100158ae4;
        }
        QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
      }
    }
    else {
      bVar15 = false;
    }
LAB_100158ae4:
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_49 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100158b1a;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
LAB_100158b1a:
    if (*(int *)local_c8.field0_0x0 != -1) {
      if (*(int *)local_c8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
        local_49 = *(int *)local_c8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100158b50;
      }
      QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
    }
LAB_100158b50:
    if (!bVar15) goto joined_r0x000100158b92;
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","prl_client_app",3,"Server data cache loaded");
    }
    param_1[0x138] = (CSdkCommunicator)0x1;
  }
  else {
joined_r0x000100158b92:
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","prl_client_app",3,"Failed to load server data cache");
    }
  }
  this_04 = operator_new(0xa0);
  CDispApplianceConfigs::CDispApplianceConfigs(this_04);
  pcVar4 = *(code **)(*(long *)this_04 + 0x58);
  local_e8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_98;
  if (1 < *(int *)local_98 + 1U) {
    LOCK();
    *(int *)local_98 = *(int *)local_98 + 1;
    local_49 = *(int *)local_98 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_58,0x1e2468c);
  QString::append(&local_e8);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_49 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100158c45;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100158c45:
  FUN_100137810(&local_e0,&local_e8,PTR_s_appliancesConfigCache_102270fc0);
  iVar7 = (*pcVar4)(this_04,&local_e0,1);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_49 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100158cab;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100158cab:
  if (*(int *)local_e8.field0_0x0 != -1) {
    if (*(int *)local_e8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
      local_49 = *(int *)local_e8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100158ce1;
    }
    QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
  }
LAB_100158ce1:
  if (iVar7 == 0) {
    CDispUser::setApplianceConfigs(*(CDispApplianceConfigs **)(param_1 + 0xd8));
    uVar8 = FUN_100794960();
    FUN_100794eb0(uVar8,param_1);
  }
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_49 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100158d3a;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100158d3a:
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

