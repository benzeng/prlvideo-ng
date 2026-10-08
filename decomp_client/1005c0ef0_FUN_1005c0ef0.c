
void FUN_1005c0ef0(CAbstractWizardModel *param_1,undefined8 param_2,QObject *param_3)

{
  void *pvVar1;
  Connection local_28 [8];
  
  CAbstractWizardModel::CAbstractWizardModel(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_10221e3a0;
  pvVar1 = operator_new(0x1a8);
  FUN_1005b7b40(pvVar1,param_2);
  *(void **)(param_1 + 0x20) = pvVar1;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_1005c0fb0(param_1);
  QObject::connect(local_28,*(undefined8 *)(param_1 + 0x28),"2done(int)",param_1,"2finished(int)",0)
  ;
  QMetaObject::Connection::~Connection(local_28);
  return;
}

