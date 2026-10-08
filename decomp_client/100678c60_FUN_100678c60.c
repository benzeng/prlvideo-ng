
void FUN_100678c60(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long local_28;
  undefined *local_20;
  
  plVar1 = operator_new(0x78);
  local_20 = PTR_shared_null_1021e15e8;
  FUN_1000341d0(&local_20,param_1 + 0x140);
  CAbstractWizardModel::wizardCtrl();
  uVar2 = CWizardController::parentWidget();
  FUN_100636a00(plVar1,&local_20,uVar2);
  FUN_100039a80(&local_20);
  QObject::connect(&local_28,plVar1,"2finished(int)",param_1,"1onRegisteredKeysDialogClosed(int)",0)
  ;
  if (local_28 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  (**(code **)(*plVar1 + 0x1a0))(plVar1);
  return;
}

