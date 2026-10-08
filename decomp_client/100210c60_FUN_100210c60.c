
undefined8 FUN_100210c60(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  Connection local_20 [8];
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x208) != 0) &&
     (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x208) + 4) != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x210);
  }
  CVmConfiguration::getVmSecurity();
  uVar1 = CVmSecurity::getAccessForOthers();
  uVar2 = FUN_1001924b0(uVar2,uVar1);
  QObject::connect(local_20,uVar2,"2jobCompleted(PRL_RESULT)",param_1,
                   "1subTaskCompleted(PRL_RESULT)",0);
  QMetaObject::Connection::~Connection(local_20);
  CAbstractTask::setWaitForSubTaskCompletion();
  return 0;
}

