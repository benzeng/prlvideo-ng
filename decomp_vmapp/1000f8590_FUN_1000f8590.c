
void FUN_1000f8590(QObject *param_1,undefined8 param_2)

{
  QTimer *this;
  char cVar1;
  long local_40;
  long local_38;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_100baa2f0;
  QMutex::QMutex((QMutex *)(param_1 + 0x10),0);
  QThread::QThread((QThread *)(param_1 + 0x18),param_1);
  this = (QTimer *)(param_1 + 0x28);
  QTimer::QTimer(this,(QObject *)0x0);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = param_2;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  QObject::connect(&local_38,(QThread *)(param_1 + 0x18),"2started()",param_1,
                   "1onPrepareCollection()",0);
  if (local_38 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    if (cVar1 == '\0') {
      cVar1 = '\0';
    }
    else {
      QObject::connect(&local_40,this,"2timeout()",param_1,"1onStageTimeout()",0);
      if (local_40 == 0) {
        cVar1 = '\0';
      }
      else {
        cVar1 = QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_40);
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  if (cVar1 == '\0') {
    FUN_1008e3970("","vm",0,"Couldn\'t connect signals and slots");
  }
  else {
    QObject::moveToThread((QThread *)param_1);
    param_1[0x44] = (QObject)((byte)param_1[0x44] | 1);
    QObject::moveToThread((QThread *)this);
    *(undefined4 *)(param_1 + 0x5c) = 1;
  }
  return;
}

