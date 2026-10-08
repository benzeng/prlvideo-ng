
void FUN_1007780c0(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  void *pvVar3;
  long local_20;
  
  FUN_100774880();
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001554a0(uVar1);
  if (lVar2 != 0) {
    pvVar3 = operator_new(0x30);
    FUN_1002c0f50(pvVar3,0);
    QObject::connect(&local_20,pvVar3,"2taskFinished(PRL_RESULT)",param_1,"1updateLastShown()",0);
    if (local_20 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_20);
    CAbstractTask::execute();
    return;
  }
  FUN_100df99c0("[HOST_PROMO]","prl_client_app",0,"(!)Error: failed to obtain server instance");
  return;
}

