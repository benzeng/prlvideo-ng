
undefined8 FUN_1007e1740(long param_1)

{
  undefined *puVar1;
  char cVar2;
  void *pvVar3;
  undefined8 uVar4;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  FUN_100d867e0(&local_30);
  puVar1 = PTR_shared_null_1021e1288;
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QDir::QDir((QDir *)&local_38,&local_40);
  cVar2 = QDir::exists(&local_38);
  QDir::~QDir((QDir *)&local_38);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007e17b9;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1007e17b9:
  if (cVar2 == '\0') {
    local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
    QDir::QDir((QDir *)&local_48,&local_50);
    QDir::mkpath(&local_48);
    QDir::~QDir((QDir *)&local_48);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_21 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1007e1814;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
  }
LAB_1007e1814:
  cVar2 = FUN_1007dc480(param_1 + 0x78);
  uVar4 = 0x80000001;
  if (cVar2 == '\0') goto LAB_1007e1a5d;
  QString::operator=((QString *)(param_1 + 0x58),(QString *)(param_1 + 0xb0));
  DLCItemInfo::load();
  *(undefined4 *)(param_1 + 0x28) = 0;
  QString::operator=((QString *)(param_1 + 0x38),&local_30);
  DLCItemInfo::save();
  pvVar3 = operator_new(0x78);
  local_58 = (QArrayData *)QString::fromAscii_helper("",0);
  FUN_100278880(pvVar3,param_1 + 0x28,&local_58,3);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007e18c6;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1007e18c6:
  QObject::connect(&local_60,pvVar3,"2taskFinished(PRL_RESULT)",param_1,
                   "1onDownloadFinished(PRL_RESULT)",0);
  if (local_60 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  QObject::connect(&local_68,pvVar3,"2downloadProgress(const DownloadProgressData&)",param_1,
                   "2downloadProgress(const DownloadProgressData&)",0);
  if (cVar2 == '\0') {
    cVar2 = '\0';
  }
  else if (local_68 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_68);
  QObject::connect(&local_70,pvVar3,"2validationStarted()",param_1,"2validationStarted()",0);
  if (cVar2 == '\0') {
    cVar2 = '\0';
  }
  else if (local_70 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_70);
  QObject::connect(&local_78,pvVar3,"2validationFinished(bool)",param_1,"2validationFinished(bool)",
                   0);
  if (cVar2 == '\0') {
    cVar2 = '\0';
  }
  else if (local_78 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_78);
  QObject::connect(&local_80,pvVar3,"2downloadStateChanged(CTaskDownloadFile::State)",param_1,
                   "2downloadStateChanged(CTaskDownloadFile::State)",0);
  if ((cVar2 != '\0') && (local_80 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_80);
  CAbstractTask::setWaitForSubTaskCompletion();
  uVar4 = 0;
  CAbstractTask::execute();
LAB_1007e1a5d:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return uVar4;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return uVar4;
}

