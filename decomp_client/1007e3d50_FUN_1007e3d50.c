
undefined8 FUN_1007e3d50(QObject *param_1)

{
  char cVar1;
  QProcess *this;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  long local_38;
  long local_30;
  undefined1 local_21;
  
  CAbstractTask::setWaitForSubTaskCompletion();
  this = operator_new(0x10);
  QProcess::QProcess(this,param_1);
  QObject::connect(&local_30,this,"2finished(int,QProcess::ExitStatus)",param_1,
                   "1onUnmountImageFinished(int,QProcess::ExitStatus)",0);
  if (local_30 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,this,"2finished(int,QProcess::ExitStatus)",this,"1deleteLater()",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,this,"2finished(int,QProcess::ExitStatus)",this,"1deleteLater()",0);
    if ((cVar1 != '\0') && (local_38 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  local_48 = (QArrayData *)QString::fromAscii_helper("hdiutil detach \"%1/\"",0x14);
  QString::arg(&local_40,&local_48,param_1 + 0x68,0,0x20);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007e3e94;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1007e3e94:
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",2,"%s",local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_21 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1007e3f06;
      }
      QArrayData::deallocate(local_50,1,8);
    }
  }
LAB_1007e3f06:
  QProcess::start(this,&local_40,3);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return 0;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return 0;
}

