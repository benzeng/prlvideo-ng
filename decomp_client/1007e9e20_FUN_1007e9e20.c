
void FUN_1007e9e20(QObject *param_1)

{
  QObject *pQVar1;
  undefined4 **ppuVar2;
  QString *pQVar3;
  QObject QVar4;
  char cVar5;
  char cVar6;
  undefined4 uVar7;
  CAbstractProgressOperation *this;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  bool bVar13;
  QArrayData *local_220;
  QArrayData *local_218;
  CTaskGenericId local_210 [24];
  Data *local_1f8;
  Data *local_1f0;
  Data *local_1e8;
  Data *local_1e0;
  int local_1d8;
  Data_conflict local_1d0;
  undefined4 local_1c8;
  QArrayData *local_1c0;
  int *local_1b8 [4];
  QVariant local_198 [2];
  CTaskGenericId local_180 [24];
  Data_conflict local_168;
  undefined4 local_160;
  QArrayData *local_158;
  int *local_150 [4];
  QVariant local_130 [2];
  QArrayData *local_118;
  QArrayData *local_110;
  CTaskGenericId local_108 [24];
  Data_conflict local_f0;
  undefined4 local_e8;
  QArrayData *local_e0;
  int *local_d8 [4];
  QVariant local_b8 [2];
  long local_a0;
  QArrayData *local_98;
  long local_90;
  long local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  long local_70;
  QArrayData *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  int local_40;
  undefined1 local_31;
  
  this = operator_new(0x48);
  ppuVar2 = *(undefined4 ***)(param_1 + 0x10);
  CAbstractProgressOperation::CAbstractProgressOperation(this,param_1);
  this->field0_0x0 = (undefined4 **)&DAT_1022752e0;
  this[1].field0_0x0 = ppuVar2;
  *(CAbstractProgressOperation **)(param_1 + 0x30) = this;
  uVar8 = FUN_100152280();
  pQVar1 = param_1 + 0x18;
  lVar9 = FUN_1001548f0(uVar8);
  if (lVar9 == 0) {
    uVar8 = CAntivirusInfo::installedAntivirus(0);
    *(undefined8 *)(param_1 + 0x40) = uVar8;
    param_1[0x3a] = (QObject)0x1;
  }
  else {
    *(undefined8 *)(param_1 + 0x40) = 0;
    QVar4 = (QObject)FUN_1001238f0(lVar9);
    param_1[0x3a] = QVar4;
    uVar8 = FUN_10018c280(lVar9);
    uVar8 = FUN_100319bf0(uVar8);
    CAntivirusInfo::availableAntiviruses(&local_60,1);
    local_58 = local_60;
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 == 0) {
        QListData::detach((int)&local_58);
        lVar11 = (long)*(int *)(local_58 + 8);
        if ((local_60 + (long)*(int *)(local_60 + 8) * 8 != local_58 + lVar11 * 8) &&
           (lVar12 = *(int *)(local_58 + 0xc) - lVar11,
           lVar12 != 0 && lVar11 <= *(int *)(local_58 + 0xc))) {
          _memcpy(local_58 + lVar11 * 8 + 0x10,local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10,
                  lVar12 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + 1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
      }
    }
    local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
    local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
    local_40 = 1;
    if (*(int *)local_60 == -1) {
LAB_1007e9fa0:
      cVar5 = '\x01';
      if (local_50 != local_48) {
        do {
          CAntivirusInfo::tisUuid();
          lVar11 = FUN_10032d8b0(uVar8,&local_68);
          if (*(int *)local_68 != -1) {
            if (*(int *)local_68 != 0) {
              LOCK();
              *(int *)local_68 = *(int *)local_68 + -1;
              local_31 = *(int *)local_68 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1007ea010;
            }
            QArrayData::deallocate(local_68,2,8);
          }
LAB_1007ea010:
          if (lVar11 == 0) {
            CAntivirusInfo::tisUuid();
            QString::toUtf8();
            FUN_100df99c0("","prl_client_app",0,"Can\'t get %s record",
                          local_78 + *(long *)(local_78 + 0x10));
            if (*(int *)local_78 != -1) {
              if (*(int *)local_78 != 0) {
                LOCK();
                *(int *)local_78 = *(int *)local_78 + -1;
                local_31 = *(int *)local_78 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1007ea0df;
              }
              QArrayData::deallocate(local_78,1,8);
            }
LAB_1007ea0df:
            if (*(int *)local_80 != -1) {
              if (*(int *)local_80 != 0) {
                LOCK();
                *(int *)local_80 = *(int *)local_80 + -1;
                local_31 = *(int *)local_80 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1007ea110;
              }
              QArrayData::deallocate(local_80,2,8);
            }
          }
          else {
            QObject::connect((Connection *)&local_70,lVar11,
                             "2tisRecordChanged(SdkHandleWrap,PRL_UINT32)",param_1,
                             "1updateVmAntivirusInstalledState()",2);
            bVar13 = cVar5 != '\0';
            cVar5 = '\0';
            if ((bVar13) && (local_70 != 0)) {
              cVar5 = QMetaObject::Connection::isConnected_helper();
            }
            QMetaObject::Connection::~Connection((Connection *)&local_70);
          }
LAB_1007ea110:
          local_50 = local_50 + 8;
          local_40 = 1;
        } while (local_50 != local_48);
      }
    }
    else {
      if (*(int *)local_60 == 0) {
LAB_1007e9f8e:
        QListData::dispose(local_60);
      }
      else {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if (!(bool)local_31) goto LAB_1007e9f8e;
      }
      cVar5 = '\x01';
      if (local_40 != 0) goto LAB_1007e9fa0;
    }
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007ea161;
      }
      QListData::dispose(local_58);
    }
LAB_1007ea161:
    FUN_1007eb010(param_1);
    cVar6 = '\0';
    QObject::connect(&local_88,lVar9,"2vmConfigurationChanged(const CVmConfiguration&)",param_1,
                     "1updateAntivirusSupported()",0);
    if (cVar5 != '\0') {
      if (local_88 == 0) {
        cVar6 = '\0';
      }
      else {
        cVar6 = QMetaObject::Connection::isConnected_helper();
      }
    }
    QMetaObject::Connection::~Connection((Connection *)&local_88);
    uVar8 = FUN_100748240();
    local_98 = (QArrayData *)QString::fromAscii_helper("antivirus.kasperskiy.guest",0x1a);
    uVar8 = FUN_100748290(uVar8,&local_98);
    QObject::connect(&local_90,uVar8,"2stateChanged(WebStore::CCatalogModel::State)",param_1,
                     "1updateAntivirusSupported()",0);
    if (cVar6 == '\0') {
      cVar5 = '\0';
    }
    else if (local_90 == 0) {
      cVar5 = '\0';
    }
    else {
      cVar5 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_90);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007ea296;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_1007ea296:
    QObject::connect(&local_a0,lVar9,"2vmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)"
                     ,param_1,"1updateVmAntivirusInstalledState()",0);
    if ((cVar5 != '\0') && (local_a0 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_a0);
    uVar8 = CTaskManager::instance();
    local_e0 = (QArrayData *)QString::fromAscii_helper("1updateVmAntivirusInstalledState()",0x22);
    local_e8 = 0x80000000;
    local_f0.field7 = 0;
    FUN_100a1c600(local_d8,param_1,&local_e0,&local_f0);
    FUN_100188480(&local_110,lVar9);
    FUN_1001884b0(&local_118,lVar9);
    FUN_1001910e0(local_108,&local_110,&local_118,0x3f4);
    CTaskManager::addTaskWatcher(uVar8,local_d8,local_108,0x24);
    CTaskGenericId::~CTaskGenericId(local_108);
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        local_31 = *(int *)local_118 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007ea3cf;
      }
      QArrayData::deallocate(local_118,2,8);
    }
LAB_1007ea3cf:
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_31 = *(int *)local_110 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007ea405;
      }
      QArrayData::deallocate(local_110,2,8);
    }
LAB_1007ea405:
    QVariant::~QVariant(local_b8);
    if (local_d8[0] != (int *)0x0) {
      LOCK();
      *local_d8[0] = *local_d8[0] + -1;
      local_31 = *local_d8[0] != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_d8[0] != (int *)0x0)) {
        operator_delete(local_d8[0]);
      }
    }
    QVariant::~QVariant((QVariant *)&local_f0);
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_31 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007ea47e;
      }
      QArrayData::deallocate(local_e0,2,8);
    }
  }
LAB_1007ea47e:
  local_158 = (QArrayData *)QString::fromAscii_helper("1updateTaskManageAntivirusWatching()",0x24);
  local_160 = 0x80000000;
  local_168.field7 = 0;
  FUN_100a1c600(local_150,param_1,&local_158,&local_168);
  QVariant::~QVariant((QVariant *)&local_168);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_31 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007ea50a;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_1007ea50a:
  uVar8 = CTaskManager::instance();
  FUN_100178ec0(local_180,pQVar1);
  CTaskManager::addTaskWatcher(uVar8,local_150,local_180,0x22);
  CTaskGenericId::~CTaskGenericId(local_180);
  FUN_1007ebaf0(param_1);
  uVar8 = FUN_100152280();
  lVar9 = FUN_100152a20(uVar8,pQVar1);
  if (lVar9 == 0) {
    uVar8 = FUN_100152280();
    lVar9 = FUN_1001548f0(uVar8,pQVar1);
    if (lVar9 == 0) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: Invalid antivirus target");
      goto LAB_1007ea97a;
    }
  }
  local_1c0 = (QArrayData *)QString::fromAscii_helper("1updateTaskSetupAntivirusWatching()",0x23);
  local_1c8 = 0x80000000;
  local_1d0.field7 = 0;
  FUN_100a1c600(local_1b8,param_1,&local_1c0,&local_1d0);
  QVariant::~QVariant((QVariant *)&local_1d0);
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_31 = *(int *)local_1c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007ea616;
    }
    QArrayData::deallocate(local_1c0,2,8);
  }
LAB_1007ea616:
  uVar8 = FUN_100152280();
  lVar9 = FUN_100152a20(uVar8,pQVar1);
  uVar8 = 0;
  if (lVar9 == 0) {
    uVar8 = FUN_100152280();
    lVar9 = FUN_1001548f0(uVar8,pQVar1);
    uVar8 = 1;
    if (lVar9 == 0) {
      uVar8 = 0xffffffff;
      FUN_100df99c0("","prl_client_app",0,"(!)Error: Invalid antivirus target");
    }
  }
  CAntivirusInfo::availableAntiviruses(&local_1f8,uVar8);
  local_1f0 = local_1f8;
  if (*(int *)local_1f8 != -1) {
    if (*(int *)local_1f8 == 0) {
      QListData::detach((int)&local_1f0);
      lVar9 = (long)*(int *)(local_1f0 + 8);
      if ((local_1f8 + (long)*(int *)(local_1f8 + 8) * 8 != local_1f0 + lVar9 * 8) &&
         (lVar11 = *(int *)(local_1f0 + 0xc) - lVar9,
         lVar11 != 0 && lVar9 <= *(int *)(local_1f0 + 0xc))) {
        _memcpy(local_1f0 + lVar9 * 8 + 0x10,local_1f8 + (long)*(int *)(local_1f8 + 8) * 8 + 0x10,
                lVar11 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_1f8 = *(int *)local_1f8 + 1;
      local_31 = *(int *)local_1f8 != 0;
      UNLOCK();
    }
  }
  local_1e8 = local_1f0 + (long)*(int *)(local_1f0 + 8) * 8 + 0x10;
  local_1e0 = local_1f0 + (long)*(int *)(local_1f0 + 0xc) * 8 + 0x10;
  local_1d8 = 1;
  if (*(int *)local_1f8 == -1) {
LAB_1007ea75f:
    if (local_1e8 != local_1e0) {
      do {
        pQVar3 = *(QString **)local_1e8;
        uVar8 = CTaskManager::instance();
        FUN_1007ebc40(&local_218,param_1);
        FUN_1007ebcf0(&local_220,param_1);
        uVar10 = FUN_100152280();
        lVar9 = FUN_100152a20(uVar10,pQVar1);
        uVar10 = 0;
        if (lVar9 == 0) {
          uVar10 = FUN_100152280();
          lVar9 = FUN_1001548f0(uVar10,pQVar1);
          uVar10 = 1;
          if (lVar9 == 0) {
            uVar10 = 0xffffffff;
            FUN_100df99c0("","prl_client_app",0,"(!)Error: Invalid antivirus target");
          }
        }
        uVar7 = CAntivirusInfo::developer(pQVar3);
        FUN_1002a9a10(local_210,&local_218,&local_220,uVar10,uVar7);
        CTaskManager::addTaskWatcher(uVar8,local_1b8,local_210,0x22);
        CTaskGenericId::~CTaskGenericId(local_210);
        if (*(int *)local_220 != -1) {
          if (*(int *)local_220 != 0) {
            LOCK();
            *(int *)local_220 = *(int *)local_220 + -1;
            local_31 = *(int *)local_220 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007ea890;
          }
          QArrayData::deallocate(local_220,2,8);
        }
LAB_1007ea890:
        if (*(int *)local_218 != -1) {
          if (*(int *)local_218 != 0) {
            LOCK();
            *(int *)local_218 = *(int *)local_218 + -1;
            local_31 = *(int *)local_218 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007ea8c6;
          }
          QArrayData::deallocate(local_218,2,8);
        }
LAB_1007ea8c6:
        local_1e8 = local_1e8 + 8;
        local_1d8 = 1;
      } while (local_1e8 != local_1e0);
    }
  }
  else {
    if (*(int *)local_1f8 == 0) {
LAB_1007ea74d:
      QListData::dispose(local_1f8);
    }
    else {
      LOCK();
      *(int *)local_1f8 = *(int *)local_1f8 + -1;
      local_31 = *(int *)local_1f8 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1007ea74d;
    }
    if (local_1d8 != 0) goto LAB_1007ea75f;
  }
  if (*(int *)local_1f0 != -1) {
    if (*(int *)local_1f0 != 0) {
      LOCK();
      *(int *)local_1f0 = *(int *)local_1f0 + -1;
      local_31 = *(int *)local_1f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007ea91b;
    }
    QListData::dispose(local_1f0);
  }
LAB_1007ea91b:
  FUN_1007ebd90(param_1);
  QVariant::~QVariant(local_198);
  if (local_1b8[0] != (int *)0x0) {
    LOCK();
    *local_1b8[0] = *local_1b8[0] + -1;
    local_31 = *local_1b8[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_1b8[0] != (int *)0x0)) {
      operator_delete(local_1b8[0]);
    }
  }
LAB_1007ea97a:
  QVariant::~QVariant(local_130);
  if (local_150[0] != (int *)0x0) {
    LOCK();
    *local_150[0] = *local_150[0] + -1;
    local_31 = *local_150[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_150[0] != (int *)0x0)) {
      operator_delete(local_150[0]);
    }
  }
  return;
}

