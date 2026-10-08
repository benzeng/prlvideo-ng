
void FUN_1005fbe20(long param_1,int param_2,int param_3,long param_4)

{
  int iVar1;
  
  if (param_2 != 0 || param_3 != 0) {
    return;
  }
  iVar1 = **(int **)(param_4 + 8);
  *(int *)(param_1 + 0x20) = iVar1;
  (**(code **)(**(long **)(param_1 + 0x10) + 0xd8))
            (*(long **)(param_1 + 0x10),
             *(undefined8 *)
              (*(long *)(param_1 + 0x18) + 0x10 +
              ((long)*(int *)(*(long *)(param_1 + 0x18) + 8) + (long)iVar1) * 8));
  CAbstractWizardPage::wizardCtrl();
  CWizardController::updateWizardActions();
  return;
}

