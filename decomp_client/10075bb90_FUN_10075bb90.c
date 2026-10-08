
void FUN_10075bb90(CDeclarativeWizardPage *param_1,CAbstractWizardModel *param_2,int param_3)

{
  QObject *this;
  
  CDeclarativeWizardPage::CDeclarativeWizardPage(param_1,param_2,param_3,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_102228e30;
  this = operator_new(0x18);
  QObject::QObject(this,(QObject *)param_1);
  *(undefined ***)this = &PTR_FUN_1021f6460;
  *(CDeclarativeWizardPage **)(this + 0x10) = param_1;
  *(QObject **)(param_1 + 0x38) = this;
  return;
}

