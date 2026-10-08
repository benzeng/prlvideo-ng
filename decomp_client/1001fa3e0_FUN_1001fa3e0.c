
undefined8 FUN_1001fa3e0(QObject *param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  QObject *pQVar7;
  int *piVar8;
  int *piVar9;
  QArrayData *pQVar10;
  QArrayData *pQVar11;
  QArrayData *pQVar12;
  QArrayData *pQVar13;
  bool bVar14;
  long local_f8;
  CRequestInfo local_f0 [8];
  QArrayData *local_e8;
  int *local_d8;
  QVariant local_c8;
  long local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  long local_88;
  long local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10015a1a0(&local_48,uVar5);
  lVar6 = *(long *)(param_1 + 0x18);
  if (*(int *)(local_48 + 4) == 0) {
    uVar5 = 0;
    if ((lVar6 != 0) && (uVar5 = 0, *(int *)(lVar6 + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_10015a060(&local_40,uVar5);
  }
  else {
    uVar5 = 0;
    if ((lVar6 != 0) && (uVar5 = 0, *(int *)(lVar6 + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_10015a1a0(&local_40,uVar5);
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001fa494;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1001fa494:
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_1001747b0(&local_60,uVar5);
  QString::toUtf8();
  QByteArray::operator=((QByteArray *)&local_50,(QByteArray *)&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001fa50b;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1001fa50b:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001fa53b;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1001fa53b:
  QString::toUtf8();
  FUN_100df99c0("","prl_client_app",0,"%s: sending [PVE::DspCmdUserLogin] request...",
                local_68 + *(long *)(local_68 + 0x10));
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001fa59e;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_1001fa59e:
  uVar5 = FUN_100152280();
  cVar2 = FUN_100154f20(uVar5,&local_40,1);
  if (cVar2 == '\0') {
LAB_1001fa745:
    uVar3 = FUN_1001095e0(&local_40);
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_10015aa20(&local_88,uVar5);
    lVar6 = local_88;
    QString::toUtf8();
    pQVar10 = local_90 + *(long *)(local_90 + 0x10);
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_10015a1d0(&local_a0,uVar5);
    QString::toUtf8();
    pQVar13 = local_98 + *(long *)(local_98 + 0x10);
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_10015a6a0(&local_b0,uVar5);
    QString::toUtf8();
    pQVar12 = local_a8 + *(long *)(local_a8 + 0x10);
    if ((1 < *(uint *)local_50) || (*(long *)(local_50 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_50,*(uint *)(local_50 + 4) + 1,*(uint *)(local_50 + 8) >> 0x1f)
      ;
    }
    pQVar11 = local_50 + *(long *)(local_50 + 0x10);
    uVar1 = *(undefined4 *)(param_1 + 0x28);
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar4 = FUN_1001747f0(uVar5);
    lVar6 = _PrlSrv_Login(lVar6,pQVar10,pQVar13,pQVar12,pQVar11,uVar3,uVar1,uVar4);
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001fa905;
      }
      QArrayData::deallocate(local_a8,1,8);
    }
LAB_1001fa905:
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001fa93b;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_1001fa93b:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001fa978;
      }
      QArrayData::deallocate(local_98,1,8);
    }
LAB_1001fa978:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001fa9ae;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_1001fa9ae:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001fa9e4;
      }
      QArrayData::deallocate(local_90,1,8);
    }
LAB_1001fa9e4:
    if (local_88 != 0) {
      _PrlHandle_Free();
    }
  }
  else {
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
    }
    cVar2 = FUN_100174740(uVar5);
    if (cVar2 == '\0') {
      uVar5 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar5 = *(undefined8 *)(param_1 + 0x20);
      }
      FUN_10015a1d0(&local_70,uVar5);
      if (*(int *)(local_70 + 4) == 0) {
        uVar5 = 0;
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
          uVar5 = *(undefined8 *)(param_1 + 0x20);
        }
        FUN_10015a6a0(&local_78,uVar5);
        bVar14 = *(int *)(local_78 + 4) == 0;
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001fa66b;
          }
          QArrayData::deallocate(local_78,2,8);
        }
      }
      else {
        bVar14 = false;
      }
LAB_1001fa66b:
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001fa69b;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_1001fa69b:
      if (!bVar14) goto LAB_1001fa745;
    }
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_10015aa20(&local_80,uVar5);
    lVar6 = local_80;
    if ((1 < *(uint *)local_50) || (*(long *)(local_50 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_50,*(uint *)(local_50 + 4) + 1,*(uint *)(local_50 + 8) >> 0x1f)
      ;
    }
    pQVar10 = local_50 + *(long *)(local_50 + 0x10);
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar3 = FUN_1001747f0(uVar5);
    lVar6 = _PrlSrv_LoginLocalEx(lVar6,pQVar10,0,uVar3,0x800);
    if (local_80 != 0) {
      _PrlHandle_Free();
    }
  }
  uVar5 = 0x80000009;
  if (lVar6 != 0) {
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_10015a6f0(uVar5,2);
    uVar5 = CSdkCommunicator::requestStorage();
    local_b8 = lVar6;
    _PrlHandle_AddRef(lVar6);
    CRequestInfo::CRequestInfo(local_f0,0x7f7,(QObject *)0x0);
    pQVar7 = (QObject *)CRequestStorage::addRequest(uVar5,&local_b8,local_f0);
    piVar8 = (int *)0x0;
    if (pQVar7 != (QObject *)0x0) {
      piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar7);
    }
    piVar9 = *(int **)(param_1 + 0x30);
    if (piVar9 != piVar8) {
      if (piVar8 != (int *)0x0) {
        LOCK();
        *piVar8 = *piVar8 + 1;
        local_31 = *piVar8 != 0;
        UNLOCK();
        piVar9 = *(int **)(param_1 + 0x30);
      }
      if (piVar9 != (int *)0x0) {
        LOCK();
        *piVar9 = *piVar9 + -1;
        local_31 = *piVar9 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (*(void **)(param_1 + 0x30) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x30));
        }
      }
      *(int **)(param_1 + 0x30) = piVar8;
      *(QObject **)(param_1 + 0x38) = pQVar7;
    }
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_31 = *piVar8 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar8);
      }
    }
    QVariant::~QVariant(&local_c8);
    if (local_d8 != (int *)0x0) {
      LOCK();
      *local_d8 = *local_d8 + -1;
      local_31 = *local_d8 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_d8 != (int *)0x0)) {
        operator_delete(local_d8);
      }
    }
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_31 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001fab6f;
      }
      QArrayData::deallocate(local_e8,2,8);
    }
LAB_1001fab6f:
    if (local_b8 != 0) {
      _PrlHandle_Free();
    }
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x38);
    }
    QObject::connect(&local_f8,uVar5,"2jobCompleted(PRL_RESULT)",param_1,
                     "1onLoginFinished(PRL_RESULT)",0);
    if (local_f8 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_f8);
    QTimer::singleShot(*(int *)(param_1 + 0x28),param_1,"1onLoginTimeout()");
    CAbstractTask::setWaitForSubTaskCompletion();
    uVar5 = 0;
    _PrlHandle_Free(lVar6);
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001fac31;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_1001fac31:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar5;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return uVar5;
}

