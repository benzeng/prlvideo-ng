
void FUN_10049bb60(QThread *param_1,long param_2)

{
  long lVar1;
  Connection local_28 [8];
  
  QThread::QThread(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_metaObject_10111c840;
  *(long *)(param_1 + 0x10) = param_2;
  lVar1 = *(long *)(param_2 + 0x28);
  *(long *)(param_1 + 0x18) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  QObject::connect(local_28,param_1,"2finished()",param_1,"1deleteLater()",0);
  QMetaObject::Connection::~Connection(local_28);
  QThread::start(param_1,7);
  return;
}

