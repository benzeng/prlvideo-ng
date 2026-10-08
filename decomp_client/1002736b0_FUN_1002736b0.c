
undefined8 FUN_1002736b0(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  Connection local_20 [8];
  
  cVar1 = FUN_100075300();
  if (cVar1 != '\0') {
    uVar2 = FUN_100078040();
    cVar1 = FUN_10007a7a0(uVar2);
    if (cVar1 == '\0') {
      FUN_100273730(param_1);
    }
    else {
      uVar2 = FUN_100078040();
      QObject::connect(local_20,uVar2,"2resumeFinished()",param_1,"1onAppResumeFinished()",0x80);
      QMetaObject::Connection::~Connection(local_20);
      CAbstractTask::setWaitForSubTaskCompletion();
    }
  }
  return 0;
}

