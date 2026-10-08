
void FUN_1007dd030(void)

{
  long lVar1;
  
  CAbstractWizardModel::wizardCtrl();
  lVar1 = CWizardController::parentWidget();
  if (lVar1 != 0) {
    CAbstractWizardModel::wizardCtrl();
    CWizardController::parentWidget();
    QWidget::window();
  }
  QMetaObject::cast((QObject *)&PTR_staticMetaObject_10222e630);
  return;
}

