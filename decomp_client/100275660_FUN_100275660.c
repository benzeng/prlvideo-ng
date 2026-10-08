
undefined8 FUN_100275660(long param_1)

{
  char cVar1;
  CTaskDownloadFile *pCVar2;
  uint uVar3;
  long local_70;
  QArrayData *local_68;
  QUrl local_60 [8];
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  CAbstractTask::setWaitForSubTaskCompletion();
  FileUtils::tempPath();
  local_40 = local_48;
  if (1 < *(uint *)local_48 + 1) {
    LOCK();
    *(uint *)local_48 = *(uint *)local_48 + 1;
    local_21 = *(uint *)local_48 != 0;
    UNLOCK();
  }
  uVar3 = *(uint *)(local_48 + 4);
  if ((1 < *(uint *)local_48) || ((*(uint *)(local_48 + 8) & 0x7fffffff) < uVar3 + 2)) {
    QString::reallocData((uint)&local_40,SUB41(uVar3 + 2,0));
    uVar3 = *(uint *)(local_40 + 4);
  }
  *(uint *)(local_40 + 4) = uVar3 + 1;
  *(undefined2 *)(local_40 + (long)(int)uVar3 * 2 + *(long *)(local_40 + 0x10)) = 0x2f;
  *(undefined2 *)(local_40 + (long)(int)*(uint *)(local_40 + 4) * 2 + *(long *)(local_40 + 0x10)) =
       0;
  QUrl::QUrl(local_60,param_1 + 0x28,0);
  QUrl::path(&local_58,local_60,0x7f00000);
  QString::QString(&local_30,0x2f);
  QString::section(&local_50,&local_58,&local_30,0xffffffff,0xffffffff,0);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10027576c;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_10027576c:
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_40;
  if (1 < *(uint *)local_40 + 1) {
    LOCK();
    *(uint *)local_40 = *(uint *)local_40 + 1;
    local_21 = *(uint *)local_40 != 0;
    UNLOCK();
  }
  QString::append(&local_38);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002757c2;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1002757c2:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002757f2;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1002757f2:
  QUrl::~QUrl(local_60);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10027582b;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10027582b:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10027585b;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10027585b:
  cVar1 = QFile::exists(&local_38);
  if (cVar1 != '\0') {
    QFile::remove(&local_38);
  }
  pCVar2 = operator_new(0x58);
  FileUtils::tempPath();
  CTaskDownloadFile::CTaskDownloadFile(pCVar2,param_1 + 0x28,&local_68,0);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002758c8;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1002758c8:
  QObject::connect(&local_70,pCVar2,"2downloadFinished(const QString&, int, int)",param_1,
                   "1onDescriptorDownloadFinished(const QString&, int, int)",0);
  if (local_70 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_70);
  CAbstractTask::execute();
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return 0;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return 0;
}

