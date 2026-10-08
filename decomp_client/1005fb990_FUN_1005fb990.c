
void FUN_1005fb990(long param_1,int param_2)

{
  *(int *)(param_1 + 0x20) = param_2;
  (**(code **)(**(long **)(param_1 + 0x10) + 0xd8))
            (*(long **)(param_1 + 0x10),
             *(undefined8 *)
              (*(long *)(param_1 + 0x18) + 0x10 +
              ((long)param_2 + (long)*(int *)(*(long *)(param_1 + 0x18) + 8)) * 8));
  CAbstractWizardPage::wizardCtrl();
  CWizardController::updateWizardActions();
  return;
}

