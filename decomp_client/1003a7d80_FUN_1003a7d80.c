
void FUN_1003a7d80(long param_1)

{
  char cVar1;
  long in_RAX;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  long local_28;
  
  local_28 = in_RAX;
  lVar2 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  if (lVar2 != 0) {
    uVar3 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
    cVar1 = FUN_10011cdc0(uVar3);
    if (cVar1 == '\0') {
      pvVar4 = operator_new(0xa8);
      uVar3 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
      uVar5 = FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
      FUN_10020df50(pvVar4,uVar3,uVar5);
    }
    else {
      pvVar4 = operator_new(0x88);
      uVar3 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
      uVar5 = FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
      FUN_10020c590(pvVar4,uVar3,uVar5);
    }
    QObject::connect(&local_28,pvVar4,"2taskFinished(PRL_RESULT)",*(undefined8 *)(param_1 + 0x10),
                     "2encryptionFinished()",0);
    if (local_28 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    CAbstractTask::execute();
    return;
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Error: Vm instance is null.");
  return;
}

