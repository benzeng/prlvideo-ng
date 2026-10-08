
void FUN_1005c4750(CAbstractWizardActionStateProvider *param_1,undefined8 param_2,QObject *param_3)

{
  void *pvVar1;
  
  CAbstractWizardActionStateProvider::CAbstractWizardActionStateProvider(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_10221e610;
  pvVar1 = operator_new(0x20);
  FUN_1005c41f0(pvVar1,param_2,param_1);
  *(void **)(param_1 + 0x18) = pvVar1;
  FUN_1005c93d0("Wizard::ActionState",0,0);
  FUN_1005c94d0("WizardActions::ActionType",0,0);
  return;
}

