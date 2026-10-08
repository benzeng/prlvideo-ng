
void FUN_10032bd80(QObject *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  int *piVar2;
  Connection local_30 [14];
  undefined1 local_22;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10220bc90;
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
    local_22 = *piVar2 != 0;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  QObject::connect(local_30,param_1,"2tisRecordEventReceived( SdkHandleWrap, PRL_UINT32 )",param_1,
                   "1processTISRecordEvent( SdkHandleWrap, PRL_UINT32 )",0);
  QMetaObject::Connection::~Connection(local_30);
  return;
}

