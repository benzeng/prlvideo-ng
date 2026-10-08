
void FUN_1005acb40(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  CAbstractWizardModel::wizardCtrl();
  lVar1 = CWizardController::parentWidget();
  if (lVar1 != 0) {
    CAbstractWizardModel::wizardCtrl();
    CWizardController::parentWidget();
    QWidget::window();
  }
  uVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221dc70);
  FUN_1005a82a0(uVar2,param_2);
  return;
}

