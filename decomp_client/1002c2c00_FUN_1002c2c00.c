
undefined8 FUN_1002c2c00(long param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  QArrayData *local_b8;
  undefined *local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined *local_68;
  undefined *local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  puVar1 = PTR_shared_null_1021e1288;
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  FUN_100d867e0(&local_38);
  QString::operator=(&local_30,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002c2c64;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1002c2c64:
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  QDir::QDir((QDir *)&local_40,&local_48);
  cVar2 = QDir::exists(&local_40);
  QDir::~QDir((QDir *)&local_40);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002c2cbd;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1002c2cbd:
  if (cVar2 == '\0') {
    local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
    QDir::QDir((QDir *)&local_50,&local_58);
    QDir::mkpath(&local_50);
    QDir::~QDir((QDir *)&local_50);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_21 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002c2d18;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
  }
LAB_1002c2d18:
  local_b0 = puVar1;
  iVar3 = *(int *)puVar1;
  if (1 < iVar3 + 1U) {
    LOCK();
    *(int *)puVar1 = *(int *)puVar1 + 1;
    local_21 = *(int *)puVar1 != 0;
    UNLOCK();
    iVar3 = *(int *)puVar1;
  }
  local_a8._8_4_ = (int)puVar1;
  local_a8._0_8_ = puVar1;
  local_a8._12_4_ = (int)((ulong)puVar1 >> 0x20);
  local_68 = puVar1;
  local_60 = PTR_shared_null_1021e15d0;
  local_98 = local_a8;
  local_88 = local_a8;
  local_78 = local_a8;
  if (iVar3 != -1) {
    if (iVar3 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_21 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002c2d97;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_1002c2d97:
  cVar2 = FUN_10076d530(&local_b0);
  uVar5 = 0x80000001;
  if (cVar2 == '\0') goto LAB_1002c3034;
  QString::operator=((QString *)(param_1 + 0x58),(QString *)local_78);
  DLCItemInfo::load();
  *(undefined4 *)(param_1 + 0x28) = 0;
  QString::operator=((QString *)(param_1 + 0x38),&local_30);
  DLCItemInfo::save();
  pvVar4 = operator_new(0x78);
  local_b8 = (QArrayData *)QString::fromAscii_helper("",0);
  FUN_100278880(pvVar4,param_1 + 0x28,&local_b8,3);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_21 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002c2e55;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1002c2e55:
  QObject::connect(&local_c0,pvVar4,"2taskFinished(PRL_RESULT)",param_1,
                   "1onDownloadFinished(PRL_RESULT)",0);
  if (local_c0 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_c0);
  QObject::connect(&local_c8,pvVar4,"2downloadProgress(const DownloadProgressData&)",param_1,
                   "2downloadProgress(const DownloadProgressData&)",0);
  if (cVar2 == '\0') {
    cVar2 = '\0';
  }
  else if (local_c8 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_c8);
  QObject::connect(&local_d0,pvVar4,"2validationStarted()",param_1,"2validationStarted()",0);
  if (cVar2 == '\0') {
    cVar2 = '\0';
  }
  else if (local_d0 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_d0);
  QObject::connect(&local_d8,pvVar4,"2validationFinished(bool)",param_1,"2validationFinished(bool)",
                   0);
  if (cVar2 == '\0') {
    cVar2 = '\0';
  }
  else if (local_d8 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_d8);
  QObject::connect(&local_e0,pvVar4,"2downloadStateChanged(CTaskDownloadFile::State)",param_1,
                   "2downloadStateChanged(CTaskDownloadFile::State)",0);
  if ((cVar2 != '\0') && (local_e0 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_e0);
  CAbstractTask::setWaitForSubTaskCompletion();
  uVar5 = 0;
  CAbstractTask::execute();
LAB_1002c3034:
  FUN_100252e70(&local_b0);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      local_b0 = (undefined *)CONCAT71(local_b0._1_7_,*(int *)local_30.field0_0x0 != 0);
      if (*(int *)local_30.field0_0x0 != 0) {
        return uVar5;
      }
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return uVar5;
}

