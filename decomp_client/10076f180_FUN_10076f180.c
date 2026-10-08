
void FUN_10076f180(void)

{
  long lVar1;
  
  CAbstractWizardModel::wizardCtrl();
  lVar1 = CWizardController::parentWidget();
  if (lVar1 != 0) {
    CAbstractWizardModel::wizardCtrl();
    CWizardController::parentWidget();
    QWidget::window();
  }
  QMetaObject::cast((QObject *)&PTR_staticMetaObject_102229d80);
  return;
}

