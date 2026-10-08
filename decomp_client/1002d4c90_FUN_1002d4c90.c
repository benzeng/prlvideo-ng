
undefined8 FUN_1002d4c90(long param_1)

{
  long in_RAX;
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long local_28;
  
  local_28 = in_RAX;
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001548f0(uVar1,param_1 + 0x58);
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"Cannot start migrated VM reconfiguration. VM instance is 0"
                 );
    uVar1 = 0x80000009;
  }
  else {
    CAbstractTask::setWaitForSubTaskCompletion();
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x40);
    }
    uVar1 = 0;
    uVar3 = FUN_100192d60(lVar2,0x800,0x6f,uVar3,0);
    QObject::connect(&local_28,uVar3,"2taskFinished(PRL_RESULT)",param_1,
                     "1onTaskStartVmFinished(PRL_RESULT)",0);
    if (local_28 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_28);
  }
  return uVar1;
}

