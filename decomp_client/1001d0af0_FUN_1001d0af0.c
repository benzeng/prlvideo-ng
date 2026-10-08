
void FUN_1001d0af0(long param_1)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  size_t sVar4;
  undefined8 uVar5;
  int iVar6;
  CTaskGenericId local_c0 [24];
  QVariant local_a8;
  QArrayData *local_98;
  int *local_90 [4];
  QVariant local_70 [2];
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  long local_30;
  long local_28;
  undefined1 local_19;
  
  lVar3 = FUN_100b5ebf0(2);
  if (lVar3 == 0) {
    FUN_100df99c0("[APP_QUIT]","prl_client_app",0,"Can\'t setup handler for SIGINT signal");
  }
  else {
    QObject::connect(&local_28,lVar3,"2signalReceived()",param_1,"1onTerminateSignalReceived()",0);
    if (local_28 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_28);
  }
  lVar3 = FUN_100b5ebf0(0xf);
  if (lVar3 == 0) {
    FUN_100df99c0("[APP_QUIT]","prl_client_app",0,"Can\'t setup handler for SIGTERM signal");
  }
  else {
    QObject::connect(&local_30,lVar3,"2signalReceived()",param_1,"1onTerminateSignalReceived()",0);
    if (local_30 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_30);
  }
  QCoreApplication::arguments();
  FUN_100df1ef0(local_38,local_40);
  FUN_100039a80(local_40);
  puVar1 = PTR_s___silent_vm_start_10230fef0;
  iVar6 = -1;
  if (PTR_s___silent_vm_start_10230fef0 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s___silent_vm_start_10230fef0);
    iVar6 = (int)sVar4;
  }
  local_50 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar6);
  FUN_100df1f90(&local_48,local_38,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001d0c5e;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1001d0c5e:
  cVar2 = FUN_100dda580(&local_48);
  if (cVar2 != '\0') {
    if (0 < DAT_10230ffd0) {
      QString::toUtf8();
      if ((1 < *(uint *)local_58) || (*(long *)(local_58 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_58,*(uint *)(local_58 + 4) + 1,*(uint *)(local_58 + 8) >> 0x1f);
      }
      FUN_100df99c0("[APP_QUIT]","prl_client_app",1,"Silent start VM uuid: %s",
                    local_58 + *(long *)(local_58 + 0x10));
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_19 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1001d0d0c;
        }
        QArrayData::deallocate(local_58,1,8);
      }
    }
LAB_1001d0d0c:
    FUN_1000341d0(param_1 + 0x28,&local_48);
    local_98 = (QArrayData *)QString::fromAscii_helper("onSilentStartBegins",0x13);
    QVariant::QVariant(&local_a8,&local_48);
    FUN_100a1c6b0(local_90,&local_98,param_1,&local_a8);
    QVariant::~QVariant(&local_a8);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_19 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1001d0da0;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_1001d0da0:
    FUN_1001d3460(local_c0,&local_48);
    uVar5 = CTaskManager::instance();
    CTaskManager::addTaskWatcher(uVar5,local_90,local_c0,2);
    CTaskGenericId::~CTaskGenericId(local_c0);
    QVariant::~QVariant(local_70);
    if (local_90[0] != (int *)0x0) {
      LOCK();
      *local_90[0] = *local_90[0] + -1;
      local_19 = *local_90[0] != 0;
      UNLOCK();
      if ((!(bool)local_19) && (local_90[0] != (int *)0x0)) {
        operator_delete(local_90[0]);
      }
    }
  }
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_19 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001d0e40;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1001d0e40:
  FUN_100039a80(local_38);
  return;
}

