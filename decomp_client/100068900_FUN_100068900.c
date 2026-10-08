
undefined8 FUN_100068900(long param_1)

{
  QString *pQVar1;
  long lVar2;
  QArrayData *pQVar3;
  char cVar4;
  long local_68;
  long local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pQVar1 = (QString *)(param_1 + 0x30);
  cVar4 = QFile::exists(pQVar1);
  if (cVar4 == '\0') {
    return 0x80000009;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  if (*(int *)(*(long *)(param_1 + 0x48) + 4) == 0) {
    local_48.field0_0x0 = pQVar1->field0_0x0;
    if (1 < *(int *)local_48.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_40,0x1db8e69);
    QString::append(&local_48);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000689b4;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1000689b4:
    QString::operator=((QString *)(param_1 + 0x48),&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000689f0;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_1000689f0:
  FUN_1002ce3d0(param_1);
  QString::toUtf8();
  pQVar3 = local_50;
  lVar2 = *(long *)(local_50 + 0x10);
  QString::toUtf8();
  FUN_100df99c0("","prl_client_app",0,"Converting postscript started: ps: %s to pdf: %s.",
                pQVar3 + lVar2,local_58 + *(long *)(local_58 + 0x10));
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100068a77;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_100068a77:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100068aa7;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100068aa7:
  lVar2 = param_1 + 0x60;
  FUN_100d6f0c0(lVar2,pQVar1,(QString *)(param_1 + 0x48));
  QObject::connect(&local_60,lVar2,"2finished( bool )",param_1,"1convertFinished( bool )",0);
  if (local_60 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  QObject::connect(&local_68,lVar2,"2progress( int )",param_1,"1progressChanged( int )",0);
  if (local_68 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_68);
  FUN_100d6f2b0(lVar2);
  return 0;
}

