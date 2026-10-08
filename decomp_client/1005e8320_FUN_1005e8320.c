
void FUN_1005e8320(long param_1)

{
  bool bVar1;
  
  bVar1 = (bool)CAbstractWizardPage::wizardModel();
  CContentModel::setBusy(bVar1);
  if ((*(char *)(param_1 + 0x20) != '\0') && (-1 < *(int *)(*(long *)(param_1 + 0x38) + 0x10))) {
    QTimer::stop();
    return;
  }
  return;
}

