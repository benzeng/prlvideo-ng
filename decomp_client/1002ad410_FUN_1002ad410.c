
undefined8 FUN_1002ad410(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long local_20;
  
  lVar1 = (**(code **)(*param_1 + 0xd0))();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1002ad220(lVar1,param_1 + 5);
    QObject::connect(&local_20,uVar2,"2taskFinished(PRL_RESULT)",param_1,
                     "1onChildContextRemoved(PRL_RESULT)",0);
    if (local_20 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_20);
    CAbstractTask::execute();
    uVar2 = 1;
  }
  return uVar2;
}

