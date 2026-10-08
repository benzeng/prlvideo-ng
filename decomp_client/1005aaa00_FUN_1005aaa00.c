
void FUN_1005aaa00(void)

{
  long lVar1;
  
  CAbstractWizardModel::wizardCtrl();
  lVar1 = CWizardController::parentWidget();
  if (lVar1 != 0) {
    CAbstractWizardModel::wizardCtrl();
    CWizardController::parentWidget();
    QWidget::window();
  }
  QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221dc70);
  return;
}

