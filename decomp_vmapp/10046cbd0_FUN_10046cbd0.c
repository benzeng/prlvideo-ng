
void FUN_10046cbd0(long param_1)

{
  undefined8 uVar1;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  undefined **local_60 [2];
  undefined8 local_50;
  QTimer *local_48;
  QTimer local_40 [28];
  byte local_24;
  
  uVar1 = QThread::currentThreadId();
  FUN_1008e3970("TIS","TISHost",0,"CFlushThread started, CurThreadId = %llu",uVar1);
  QTimer::QTimer(local_40,(QObject *)0x0);
  QTimer::setInterval((int)local_40);
  local_24 = local_24 | 1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  QObject::QObject((QObject *)local_60,(QObject *)0x0);
  local_60[0] = &PTR_FUN_100bc16e0;
  local_50 = uVar1;
  local_48 = local_40;
  QObject::connect(&local_68,local_40,"2timeout()",local_60,"1onFlush()",1);
  if (local_68 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_68);
  FUN_100470680("CTISBase::Record",0,0);
  FUN_100470750("CTISBase::RecordFields",0,0);
  QObject::connect(&local_70,*(undefined8 *)(param_1 + 0x10),
                   "2contentChanged(const CTISBase::Record, const CTISBase::RecordFields)",local_60,
                   "1onContentChanged(const CTISBase::Record, const CTISBase::RecordFields)",2);
  if (local_70 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_70);
  QObject::connect(&local_78,*(undefined8 *)(param_1 + 0x10),"2flush()",local_60,"1onFlush()",2);
  if (local_78 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_78);
  QObject::connect(&local_80,*(undefined8 *)(param_1 + 0x10),"2quitWorkThread()",local_60,
                   "1onQuitWorkThread()",2);
  if (local_80 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_80);
  QThread::exec();
  uVar1 = QThread::currentThreadId();
  FUN_1008e3970("TIS","TISHost",0,"CFlushThread stopped, CurThreadId = %llu",uVar1);
  QObject::~QObject((QObject *)local_60);
  QTimer::~QTimer(local_40);
  return;
}

