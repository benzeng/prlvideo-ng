
undefined8 FUN_1001f4300(long param_1,bool *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  long in_RAX;
  undefined8 uVar3;
  bool bVar4;
  long local_28;
  
  if (param_2 != (bool *)0x0) {
    local_28 = in_RAX;
    cVar1 = CSdkRequest::isCompleted(param_2,(int *)0x0);
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0x4c) == '\0') {
        bVar4 = false;
      }
      else {
        iVar2 = CAbstractTask::getCurrentSubTask();
        bVar4 = iVar2 != 4;
      }
      param_2[0x60] = bVar4;
      QObject::connect(&local_28,param_2,"2jobCompleted(PRL_RESULT)",param_1,param_3,0);
      if (local_28 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_28);
      CAbstractTask::setWaitForSubTaskCompletion();
    }
    else {
      cVar1 = CSdkRequest::isCompleted(param_2,(int *)0x0);
      if ((cVar1 != '\0') && (iVar2 = CSdkRequest::getResultCode(param_2), iVar2 != 0)) {
        return 0x80000009;
      }
    }
  }
  uVar3 = 0x80000009;
  if (param_2 != (bool *)0x0) {
    uVar3 = 0;
  }
  return uVar3;
}

