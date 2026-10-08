
void FUN_100990980(CAbstractWizardPageFlow *param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x20);
  FUN_1009961b0(pvVar1,0);
  CAbstractWizardModel::setPageFlow(param_1);
  pvVar1 = operator_new(0x10);
  FUN_100995c10(pvVar1,0);
  CAbstractWizardModel::setPageFactory((CAbstractWizardPageFactory *)param_1);
  pvVar1 = operator_new(0x20);
  FUN_1009963b0(pvVar1,0);
  CAbstractWizardModel::setActionStateProvider((CAbstractWizardActionStateProvider *)param_1);
  pvVar1 = operator_new(0x20);
  FUN_100997a30(pvVar1,0);
  CAbstractWizardModel::setActionHandler((CAbstractWizardActionHandler *)param_1);
  return;
}

