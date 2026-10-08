
undefined8 FUN_10027b280(QObject *param_1)

{
  CMd5Calculator *this;
  Connection local_38 [8];
  QString local_30;
  undefined1 local_21;
  
  if (*(int *)(*(long *)(param_1 + 0x30) + 4) == 0) {
    if (DAT_10230ffd0 < 2) {
      return 0;
    }
    FUN_100df99c0("","prl_client_app",2,"Checksum is not specified, skipping image validation");
    return 0;
  }
  this = operator_new(0x20);
  FileDownloadInfo::destinationFilePath();
  CMd5Calculator::CMd5Calculator(this,&local_30,param_1);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10027b2fa;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_10027b2fa:
  QObject::connect(local_38,this,"2finished(bool, const QString&)",param_1,
                   "1onDownloadedImageMd5CalculationFinished(bool, const QString&)",0);
  QMetaObject::Connection::~Connection(local_38);
  CAbstractTask::setWaitForSubTaskCompletion();
  QThread::start(this,7);
  param_1[0x70] = (QObject)0x1;
  FUN_10081b890(param_1);
  return 0;
}

