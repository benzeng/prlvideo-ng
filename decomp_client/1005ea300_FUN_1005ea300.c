
void FUN_1005ea300(long param_1,int param_2,undefined4 param_3,long param_4)

{
  bool bVar1;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_1005e7f60(param_1,*(undefined8 *)(param_4 + 8));
      return;
    case 1:
      bVar1 = (bool)CAbstractWizardPage::wizardModel();
      CContentModel::setBusy(bVar1);
      return;
    case 2:
      bVar1 = (bool)CAbstractWizardPage::wizardModel();
      CContentModel::setBusy(bVar1);
      if ((*(char *)(param_1 + 0x20) != '\0') && (-1 < *(int *)(*(long *)(param_1 + 0x38) + 0x10)))
      {
        QTimer::stop();
        return;
      }
      break;
    case 3:
      FUN_1005e8360(param_1,**(undefined4 **)(param_4 + 8),*(undefined8 *)(param_4 + 0x10));
      return;
    case 4:
      FUN_100df99c0("","prl_client_app",0,
                    "Purchase completion page load timeout! Purchase result might be incomplete!");
      return;
    }
  }
  return;
}

