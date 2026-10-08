
undefined1 FUN_100ae9df0(long param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  Connection local_80 [8];
  QArrayData *local_78;
  QArrayData *local_70;
  char local_68 [24];
  char *local_50;
  QArrayData *local_48;
  QString local_40;
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  cVar1 = FUN_100aeaaa0(param_1 + 0x28);
  if (cVar1 != '\0') {
    return 0;
  }
  cVar1 = FUN_100aeaac0(param_1 + 0x28,2,0);
  if (cVar1 == '\0') {
    return 1;
  }
  cVar1 = QLocalServer::listen(*(QString **)(param_1 + 0x20));
  if ((cVar1 == '\0') && (iVar2 = QLocalServer::serverError(), iVar2 == 8)) {
    QDir::tempPath();
    QDir::cleanPath(&local_40);
    local_38 = (QArrayData *)local_40.field0_0x0;
    if (1 < *(uint *)local_40.field0_0x0 + 1) {
      LOCK();
      *(uint *)local_40.field0_0x0 = *(uint *)local_40.field0_0x0 + 1;
      local_21 = *(uint *)local_40.field0_0x0 != 0;
      UNLOCK();
    }
    uVar3 = *(uint *)(local_40.field0_0x0 + 4);
    if ((1 < *(uint *)local_40.field0_0x0) ||
       ((*(uint *)(local_40.field0_0x0 + 8) & 0x7fffffff) < uVar3 + 2)) {
      QString::reallocData((uint)&local_38,SUB41(uVar3 + 2,0));
      uVar3 = *(uint *)(local_38 + 4);
    }
    *(uint *)(local_38 + 4) = uVar3 + 1;
    *(undefined2 *)(local_38 + (long)(int)uVar3 * 2 + *(long *)(local_38 + 0x10)) = 0x2f;
    *(undefined2 *)(local_38 + (long)(int)*(uint *)(local_38 + 4) * 2 + *(long *)(local_38 + 0x10))
         = 0;
    if (1 < *(uint *)local_38 + 1) {
      LOCK();
      *(uint *)local_38 = *(uint *)local_38 + 1;
      local_21 = *(uint *)local_38 != 0;
      UNLOCK();
    }
    local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_38;
    QString::append(&local_30);
    QFile::remove(&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_21 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100ae9f3e;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
LAB_100ae9f3e:
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100ae9f6e;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_100ae9f6e:
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_21 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100ae9f9e;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_100ae9f9e:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_21 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100ae9fce;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100ae9fce:
    cVar1 = QLocalServer::listen(*(QString **)(param_1 + 0x20));
  }
  if (cVar1 != '\0') goto LAB_100aea0a3;
  local_68[0] = '\x02';
  local_68[1] = '\0';
  local_68[2] = '\0';
  local_68[3] = '\0';
  local_68[0x14] = '\0';
  local_68[0x15] = '\0';
  local_68[0x16] = '\0';
  local_68[0x17] = '\0';
  local_68[0xc] = '\0';
  local_68[0xd] = '\0';
  local_68[0xe] = '\0';
  local_68[0xf] = '\0';
  local_68[0x10] = '\0';
  local_68[0x11] = '\0';
  local_68[0x12] = '\0';
  local_68[0x13] = '\0';
  local_68[4] = '\0';
  local_68[5] = '\0';
  local_68[6] = '\0';
  local_68[7] = '\0';
  local_68[8] = '\0';
  local_68[9] = '\0';
  local_68[10] = '\0';
  local_68[0xb] = '\0';
  local_50 = "default";
  QLocalServer::errorString();
  QString::toLocal8Bit();
  QMessageLogger::warning
            (local_68,"QtSingleCoreApplication: listen on local socket failed, %s",
             local_70 + *(long *)(local_70 + 0x10));
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100aea073;
    }
    QArrayData::deallocate(local_70,1,8);
  }
LAB_100aea073:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100aea0a3;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100aea0a3:
  QObject::connect(local_80,*(undefined8 *)(param_1 + 0x20),"2newConnection()",param_1,
                   "1receiveConnection()",0);
  QMetaObject::Connection::~Connection(local_80);
  return 0;
}

