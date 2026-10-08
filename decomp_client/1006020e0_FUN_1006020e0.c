
void FUN_1006020e0(CAbstractWizardPageFlow *param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x20);
  FUN_1006023f0(pvVar1,param_1);
  CAbstractWizardModel::setPageFlow(param_1);
  pvVar1 = operator_new(0x10);
  FUN_1006025f0(pvVar1,param_1);
  CAbstractWizardModel::setPageFactory((CAbstractWizardPageFactory *)param_1);
  pvVar1 = operator_new(0x18);
  FUN_100602780(pvVar1,param_1);
  CAbstractWizardModel::setActionStateProvider((CAbstractWizardActionStateProvider *)param_1);
  pvVar1 = operator_new(0x18);
  FUN_100603480(pvVar1,param_1);
  CAbstractWizardModel::setActionHandler((CAbstractWizardActionHandler *)param_1);
  return;
}

