
void FUN_1005c0fb0(CAbstractWizardPageFlow *param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x28);
  FUN_1005c33e0(pvVar1,*(undefined8 *)(param_1 + 0x20),0);
  CAbstractWizardModel::setPageFlow(param_1);
  pvVar1 = operator_new(0x10);
  FUN_1005c38f0(pvVar1,0);
  CAbstractWizardModel::setPageFactory((CAbstractWizardPageFactory *)param_1);
  pvVar1 = operator_new(0x20);
  FUN_1005c47f0(pvVar1,*(undefined8 *)(param_1 + 0x20),0);
  CAbstractWizardModel::setActionStateProvider((CAbstractWizardActionStateProvider *)param_1);
  pvVar1 = operator_new(0x18);
  FUN_1005ca020(pvVar1,0);
  CAbstractWizardModel::setActionHandler((CAbstractWizardActionHandler *)param_1);
  pvVar1 = operator_new(0x80);
  FUN_1005b0100(pvVar1,param_1);
  *(void **)(param_1 + 0x28) = pvVar1;
  pvVar1 = operator_new(0xb0);
  FUN_10072d1f0(pvVar1,param_1);
  *(void **)(param_1 + 0x30) = pvVar1;
  return;
}

