
undefined8 FUN_1002a21d0(long param_1)

{
  QString *this;
  char *pcVar1;
  char cVar2;
  byte bVar3;
  size_t sVar4;
  long lVar5;
  CTaskGenericId *pCVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  int iVar10;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  long local_158;
  QArrayData *local_150;
  CTaskGenericId local_148 [24];
  QString local_130;
  QFileInfo local_128 [8];
  QString local_120;
  QArrayData *local_118;
  undefined1 local_110 [80];
  undefined1 local_c0 [8];
  QString local_b8;
  undefined *local_b0;
  QArrayData *local_a8;
  undefined *local_a0;
  undefined1 local_98 [88];
  QString local_40;
  undefined1 local_31;
  
  lVar5 = param_1 + 0x18;
  FUN_1002a0c20(local_98,lVar5);
  QString::simplified();
  this = (QString *)(param_1 + 0x98);
  QString::operator=(this,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002a224a;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1002a224a:
  FUN_100252e70(local_98);
  local_b0 = PTR_shared_null_1021e15e8;
  if (*(int *)(this->field0_0x0 + 4) == 0) {
    uVar9 = 0x80015255;
    if (*(int *)(param_1 + 0x3c) != 0) {
      uVar9 = 0x80015254;
    }
    local_a0 = PTR_shared_null_1021e15e8;
    FUN_1002a0af0(&local_a8,param_1);
    FUN_1000341d0(&local_a0,&local_a8);
    FUN_1002a17d0(param_1,uVar9,&local_a0,&local_b0);
    FUN_100039a80(&local_b0);
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002a25b9;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_1002a25b9:
    FUN_100039a80(&local_a0);
    return 0;
  }
  FUN_1002a0c20(local_110,lVar5);
  pcVar1 = *(char **)PTR__WEB_STORE_AV_INSTALLER_FILE_NAME_1021e1250;
  iVar10 = -1;
  if (pcVar1 != (char *)0x0) {
    sVar4 = _strlen(pcVar1);
    iVar10 = (int)sVar4;
  }
  local_118 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar10);
  FUN_10002c180(&local_b8,local_c0,&local_118);
  QString::operator=((QString *)(param_1 + 0xa8),&local_b8);
  if (*(int *)local_b8.field0_0x0 != -1) {
    if (*(int *)local_b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
      local_31 = *(int *)local_b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002a2303;
    }
    QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
  }
LAB_1002a2303:
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002a2339;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1002a2339:
  FUN_100252e70(local_110);
  DLCItemInfo::load();
  FUN_1002a1b90(&local_120,lVar5);
  QString::operator=((QString *)(param_1 + 0x78),&local_120);
  if (*(int *)local_120.field0_0x0 != -1) {
    if (*(int *)local_120.field0_0x0 != 0) {
      LOCK();
      *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
      local_31 = *(int *)local_120.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002a23b3;
    }
    QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
  }
LAB_1002a23b3:
  *(undefined4 *)(param_1 + 0x68) = 2;
  FileDownloadInfo::destinationFilePath();
  QFileInfo::QFileInfo(local_128,&local_130);
  if (*(int *)local_130.field0_0x0 != -1) {
    if (*(int *)local_130.field0_0x0 != 0) {
      LOCK();
      *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
      local_31 = *(int *)local_130.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002a2417;
    }
    QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
  }
LAB_1002a2417:
  cVar2 = QFileInfo::exists();
  if ((cVar2 != '\0') && (lVar5 = QFileInfo::size(), lVar5 == *(long *)(param_1 + 0x88))) {
    *(undefined1 *)(param_1 + 0xb8) = 1;
  }
  FUN_1001b8b80(local_148,this,2);
  pCVar6 = (CTaskGenericId *)CTaskManager::instance();
  pvVar7 = (void *)CTaskManager::getTaskById(pCVar6);
  if ((pvVar7 == (void *)0x0) || (cVar2 = CAbstractTask::isFinished(), cVar2 != '\0')) {
    pvVar7 = operator_new(0x78);
    uVar8 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar8 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100061050(3,uVar8);
    lVar5 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
    if (lVar5 == 0) {
      local_150 = (QArrayData *)QString::fromAscii_helper("",0);
    }
    else {
      uVar8 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar8 = *(undefined8 *)(param_1 + 0x20);
      }
      FUN_100061050(3,uVar8);
      uVar8 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
      FUN_100188480(&local_150,uVar8);
    }
    FUN_100278880(pvVar7,(undefined4 *)(param_1 + 0x68),&local_150,2);
    if (*(int *)local_150 != -1) {
      if (*(int *)local_150 != 0) {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + -1;
        local_31 = *(int *)local_150 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002a2630;
      }
      QArrayData::deallocate(local_150,2,8);
    }
  }
LAB_1002a2630:
  QObject::connect(&local_158,pvVar7,"2taskFinished(PRL_RESULT)",param_1,
                   "1onImageDownloadFinished(PRL_RESULT)",0);
  bVar3 = 1;
  if (local_158 != 0) {
    bVar3 = QMetaObject::Connection::isConnected_helper();
    bVar3 = bVar3 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)&local_158);
  QObject::connect(&local_160,pvVar7,"2downloadProgress(const DownloadProgressData&)",param_1,
                   "2downloadProgress(const DownloadProgressData&)",0);
  if (bVar3 == 0) {
    if (local_160 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  else {
    cVar2 = '\0';
  }
  QMetaObject::Connection::~Connection((Connection *)&local_160);
  QObject::connect(&local_168,pvVar7,"2validationStarted()",param_1,"2validationStarted()",0);
  if (cVar2 == '\0') {
    cVar2 = '\0';
  }
  else if (local_168 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_168);
  QObject::connect(&local_170,pvVar7,"2validationFinished(bool)",param_1,"2validationFinished(bool)"
                   ,0);
  if (cVar2 == '\0') {
    cVar2 = '\0';
  }
  else if (local_170 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_170);
  QObject::connect(&local_178,pvVar7,"2downloadStateChanged(CTaskDownloadFile::State)",param_1,
                   "2downloadStateChanged(CTaskDownloadFile::State)",0);
  if ((cVar2 != '\0') && (local_178 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_178);
  CAbstractTask::setWaitForSubTaskCompletion();
  CAbstractTask::execute();
  CTaskGenericId::~CTaskGenericId(local_148);
  QFileInfo::~QFileInfo(local_128);
  return 0;
}

