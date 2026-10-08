
void FUN_1005c3350(CAbstractWizardPageFlow *param_1,undefined8 param_2,QObject *param_3)

{
  QObject *this;
  
  CAbstractWizardPageFlow::CAbstractWizardPageFlow(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_10221e460;
  this = operator_new(0x20);
  QObject::QObject(this,(QObject *)param_1);
  *(undefined ***)this = &PTR_FUN_1021f4040;
  *(CAbstractWizardPageFlow **)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x18) = param_2;
  *(QObject **)(param_1 + 0x20) = this;
  return;
}

