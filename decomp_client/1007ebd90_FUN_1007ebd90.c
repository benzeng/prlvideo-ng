
void FUN_1007ebd90(long param_1)

{
  long lVar1;
  QString *pQVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  CTaskGenericId *pCVar7;
  long lVar8;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  CTaskGenericId local_78 [24];
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  int local_40;
  undefined1 local_31;
  
  uVar5 = FUN_100152280();
  lVar1 = param_1 + 0x18;
  lVar6 = FUN_100152a20(uVar5,lVar1);
  if (lVar6 == 0) {
    uVar5 = FUN_100152280();
    lVar6 = FUN_1001548f0(uVar5,lVar1);
    if (lVar6 == 0) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: Invalid antivirus target");
      return;
    }
  }
  uVar5 = FUN_100152280();
  lVar6 = FUN_100152a20(uVar5,lVar1);
  uVar5 = 0;
  if (lVar6 == 0) {
    uVar5 = FUN_100152280();
    lVar6 = FUN_1001548f0(uVar5,lVar1);
    uVar5 = 1;
    if (lVar6 == 0) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: Invalid antivirus target");
      uVar5 = 0xffffffff;
    }
  }
  CAntivirusInfo::availableAntiviruses(&local_60,uVar5);
  local_58 = local_60;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_58);
      lVar6 = (long)*(int *)(local_58 + 8);
      if ((local_60 + (long)*(int *)(local_60 + 8) * 8 != local_58 + lVar6 * 8) &&
         (lVar8 = *(int *)(local_58 + 0xc) - lVar6, lVar8 != 0 && lVar6 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar6 * 8 + 0x10,local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10,
                lVar8 * 8);
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
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
LAB_1007ebedb:
      QListData::dispose(local_60);
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1007ebedb;
    }
    if (local_40 == 0) goto LAB_1007ec202;
  }
  for (; local_50 != local_48; local_50 = local_50 + 8) {
    pQVar2 = *(QString **)local_50;
    pCVar7 = (CTaskGenericId *)CTaskManager::instance();
    FUN_1007ebc40(&local_80,param_1);
    FUN_1007ebcf0(&local_88,param_1);
    uVar5 = FUN_100152280();
    lVar6 = FUN_100152a20(uVar5,lVar1);
    uVar5 = 0;
    if (lVar6 == 0) {
      uVar5 = FUN_100152280();
      lVar6 = FUN_1001548f0(uVar5,lVar1);
      uVar5 = 1;
      if (lVar6 == 0) {
        uVar5 = 0xffffffff;
        FUN_100df99c0("","prl_client_app",0,"(!)Error: Invalid antivirus target");
      }
    }
    uVar4 = CAntivirusInfo::developer(pQVar2);
    FUN_1002a9a10(local_78,&local_80,&local_88,uVar5,uVar4);
    CTaskManager::getTaskById(pCVar7);
    lVar6 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022078f0);
    CTaskGenericId::~CTaskGenericId(local_78);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007ec00c;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_1007ec00c:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007ec03c;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_1007ec03c:
    if ((lVar6 != 0) && (cVar3 = CAbstractTask::isFinished(), cVar3 == '\0')) {
      QObject::connect(&local_90,lVar6,"2taskFinished(PRL_RESULT)",param_1,
                       "1onTaskSetupAntivirusFinished()",0);
      if (local_90 == 0) {
        cVar3 = '\0';
      }
      else {
        cVar3 = QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_90);
      QObject::connect(&local_98,lVar6,"2subTaskStarted(int)",param_1,
                       "1onTaskSetupAntivirusSubtaskStarted(int)",0);
      if (cVar3 == '\0') {
        cVar3 = '\0';
      }
      else if (local_98 == 0) {
        cVar3 = '\0';
      }
      else {
        cVar3 = QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_98);
      QObject::connect(&local_a0,lVar6,"2downloadProgress(const DownloadProgressData&)",param_1,
                       "1onTaskSetupAntivirusDownloadProgress(const DownloadProgressData&)",0);
      if (cVar3 == '\0') {
        cVar3 = '\0';
      }
      else if (local_a0 == 0) {
        cVar3 = '\0';
      }
      else {
        cVar3 = QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_a0);
      QObject::connect(&local_a8,lVar6,"2installProgress(int)",param_1,
                       "1onTaskSetupAntivirusInstallProgress(int)",0);
      if ((cVar3 != '\0') && (local_a8 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_a8);
      break;
    }
    local_40 = 1;
  }
LAB_1007ec202:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_58);
  }
  return;
}

