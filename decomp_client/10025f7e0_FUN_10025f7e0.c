
undefined8 FUN_10025f7e0(long param_1)

{
  char cVar1;
  void *pvVar2;
  undefined8 uVar3;
  long local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (*(char *)(param_1 + 0xd0) == '\0') {
    return 0;
  }
  if (*(long *)(param_1 + 0xd8) == 0) {
    return 0;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  pvVar2 = operator_new(0xd0);
  cVar1 = FUN_100da0de0(param_1 + 0x78);
  if (cVar1 == '\0') {
    local_30 = (QArrayData *)QString::fromAscii_helper("",0);
  }
  else {
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100109c10(&local_30,uVar3);
  }
  FUN_1002bb5f0(pvVar2,param_1 + 0x78,param_1 + 0x88,0,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10025f8ac;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10025f8ac:
  QObject::connect(&local_38,pvVar2,"2taskFinished(PRL_RESULT)",param_1,
                   "1onPrepareMaverickInstallationFinished(PRL_RESULT)",0);
  if (local_38 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  CAbstractTask::execute();
  return 0;
}

