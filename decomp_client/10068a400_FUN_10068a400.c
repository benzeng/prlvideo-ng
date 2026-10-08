
void * FUN_10068a400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long in_RAX;
  void *pvVar1;
  undefined8 uVar2;
  long local_38;
  
  local_38 = in_RAX;
  pvVar1 = operator_new(0x58);
  uVar2 = FUN_10061b510(param_2);
  FUN_1002cacb0(pvVar1,uVar2,param_3,param_4);
  QObject::connect(&local_38,pvVar1,"2taskFinished(PRL_RESULT)",param_1,
                   "1onLicenseUpdateFinished(PRL_RESULT)",0);
  if (local_38 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  CAbstractTask::execute();
  return pvVar1;
}

