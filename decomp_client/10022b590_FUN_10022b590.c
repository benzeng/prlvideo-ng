
undefined8 FUN_10022b590(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long local_120;
  CVmConfiguration local_118 [248];
  
  CVmConfiguration::CVmConfiguration(local_118);
  iVar2 = FUN_10022b6d0(param_1 + 0x30,local_118);
  uVar4 = 0x3bfa;
  if ((-1 < iVar2) && (cVar1 = FUN_100603bd0(local_118), cVar1 != '\0')) {
    uVar4 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1330);
    lVar3 = FUN_100603b40(uVar4,local_118,*(undefined1 *)(param_1 + 0x59),param_1);
    uVar4 = 0x80000009;
    if (lVar3 != 0) {
      CAbstractTask::setWaitForSubTaskCompletion();
      QObject::connect(&local_120,lVar3,"2finished(PRL_RESULT)",param_1,
                       "1subTaskCompleted(PRL_RESULT)",2);
      if (local_120 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      uVar4 = 0;
      QMetaObject::Connection::~Connection((Connection *)&local_120);
    }
  }
  CVmConfiguration::~CVmConfiguration(local_118);
  return uVar4;
}

