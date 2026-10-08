
void FUN_1005dca10(long param_1,long param_2)

{
  long lVar1;
  
  FUN_1005ec970(*(long *)(param_1 + 0x10) + 0x48);
  CAbstractWizardModel::wizardCtrl();
  lVar1 = CWizardController::parentWidget();
  if (lVar1 != 0) {
    lVar1 = QWidget::window();
    if (lVar1 == param_2) {
      FUN_1005db8e0(param_1);
      return;
    }
  }
  return;
}

