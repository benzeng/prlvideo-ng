
void FUN_1001bd750(undefined8 param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  QArrayData *pQVar6;
  long lVar7;
  QArrayData *pQVar8;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  Data *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  Connection local_80 [8];
  int *local_78;
  Connection local_70 [8];
  int *local_68;
  long local_60;
  long local_58;
  Connection local_50 [8];
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QNetworkProxy::user();
  iVar2 = *(int *)(local_40 + 4);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001bd7aa;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001bd7aa:
  if (iVar2 == 0) {
    return;
  }
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001554a0(uVar3);
  if (lVar4 == 0) {
    return;
  }
  QNetworkProxy::user();
  iVar2 = *(int *)(local_48 + 4);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001bd80a;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1001bd80a:
  if (iVar2 == 0) {
    return;
  }
  iVar2 = FUN_10015a6e0(lVar4);
  if (iVar2 != 0) {
    QObject::connect(local_50,lVar4,"2serverStateChanged(GUI::ServerState)",param_1,
                     "1onLocalhostStateChanged(GUI::ServerState)",0x80);
    QMetaObject::Connection::~Connection(local_50);
  }
  iVar2 = FUN_10015a6e0(lVar4);
  if (iVar2 == 1) {
    return;
  }
  FUN_10015aa50(&local_58,lVar4);
  if (local_58 == 0) {
    QObject::connect(&local_60,lVar4,"2userProfileChanged(const CDispUser&)",param_1,
                     "1onUserProfileChanged()",0);
    if (local_60 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    goto LAB_1001bdd4b;
  }
  CTaskManager::instance();
  CTaskManager::getRunningTasks((uint)&local_68);
  if (local_68[3] == local_68[2]) {
    CTaskManager::instance();
    CTaskManager::getRunningTasks((uint)&local_78);
    lVar7 = local_58;
    if (local_78[3] == local_78[2]) {
      QNetworkProxy::hostName();
      QString::toUtf8();
      pQVar6 = local_88 + *(long *)(local_88 + 0x10);
      uVar1 = QNetworkProxy::port();
      QNetworkProxy::user();
      QString::toUtf8();
      pQVar8 = local_98 + *(long *)(local_98 + 0x10);
      QNetworkProxy::password();
      QString::toUtf8();
      iVar2 = _PrlUsrCfg_AddProxy(lVar7,pQVar6,uVar1,pQVar8,local_a8 + *(long *)(local_a8 + 0x10),0)
      ;
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001bd9b2;
        }
        QArrayData::deallocate(local_a8,1,8);
      }
LAB_1001bd9b2:
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001bd9e8;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_1001bd9e8:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001bda1e;
        }
        QArrayData::deallocate(local_98,1,8);
      }
LAB_1001bda1e:
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001bda54;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_1001bda54:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001bda84;
        }
        QArrayData::deallocate(local_88,1,8);
      }
LAB_1001bda84:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001bdaba;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_1001bdaba:
      if (iVar2 < 0) {
        FUN_100df99c0("","prl_client_app",0,"(!)Error: failed to update the proxy credentials");
      }
      else {
        local_b8 = (Data *)PTR_shared_null_1021e15e8;
        local_bc = 0;
        FUN_100129840(&local_b8,&local_bc);
        local_c0 = 2;
        FUN_100129840(&local_b8,&local_c0);
        pvVar5 = operator_new(0x50);
        local_c8 = local_58;
        if (local_58 != 0) {
          _PrlHandle_AddRef();
        }
        FUN_10015aa80(&local_d0,lVar4);
        FUN_1001f41a0(pvVar5,&local_c8,&local_d0,&local_b8,lVar4,0);
        if (local_d0 != 0) {
          _PrlHandle_Free();
        }
        if (local_c8 != 0) {
          _PrlHandle_Free();
        }
        QObject::connect(&local_d8,pvVar5,"2taskFinished(PRL_RESULT)",param_1,
                         "2commitCredentialsFinished(PRL_RESULT)",0);
        if (local_d8 != 0) {
          QMetaObject::Connection::isConnected_helper();
        }
        QMetaObject::Connection::~Connection((Connection *)&local_d8);
        CAbstractTask::execute();
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_31 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001bdcf7;
          }
          QListData::dispose(local_b8);
        }
      }
    }
    else {
      lVar4 = **(long **)(local_78 + (long)local_78[2] * 2 + 4);
      lVar7 = 0;
      if ((lVar4 != 0) && (lVar7 = 0, *(int *)(lVar4 + 4) != 0)) {
        lVar7 = (*(long **)(local_78 + (long)local_78[2] * 2 + 4))[1];
      }
      QObject::connect(local_80,lVar7,"2taskFinished(PRL_RESULT)",param_1,"1commitCredentials()",
                       0x80);
      QMetaObject::Connection::~Connection(local_80);
    }
LAB_1001bdcf7:
    if (*local_78 != -1) {
      if (*local_78 != 0) {
        LOCK();
        *local_78 = *local_78 + -1;
        local_31 = *local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001bdd21;
      }
      FUN_100034010(&local_78,local_78);
    }
  }
  else {
    lVar4 = **(long **)(local_68 + (long)local_68[2] * 2 + 4);
    lVar7 = 0;
    if ((lVar4 != 0) && (lVar7 = 0, *(int *)(lVar4 + 4) != 0)) {
      lVar7 = (*(long **)(local_68 + (long)local_68[2] * 2 + 4))[1];
    }
    QObject::connect(local_70,lVar7,"2taskFinished(PRL_RESULT)",param_1,"1commitCredentials()",0x80)
    ;
    QMetaObject::Connection::~Connection(local_70);
  }
LAB_1001bdd21:
  if (*local_68 != -1) {
    if (*local_68 != 0) {
      LOCK();
      *local_68 = *local_68 + -1;
      local_31 = *local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001bdd4b;
    }
    FUN_100034010(&local_68,local_68);
  }
LAB_1001bdd4b:
  if (local_58 != 0) {
    _PrlHandle_Free();
  }
  return;
}

