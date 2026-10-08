
void FUN_1001b8ec0(QThread *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  int *piVar2;
  long local_38;
  undefined1 local_2c;
  undefined1 local_2b;
  
  QThread::QThread(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021febb0;
  lVar1 = *param_2;
  *(long *)(param_1 + 0x10) = lVar1;
  if (lVar1 != 0) {
    _PrlHandle_AddRef();
  }
  piVar2 = (int *)*param_3;
  *(int **)(param_1 + 0x18) = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    local_2c = *piVar2 != 0;
    UNLOCK();
  }
  piVar2 = (int *)*param_4;
  *(int **)(param_1 + 0x20) = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    local_2b = *piVar2 != 0;
    UNLOCK();
  }
  QObject::connect(&local_38,param_1,"2finished()",param_1,"1deleteLater( )",0);
  if (local_38 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  return;
}

