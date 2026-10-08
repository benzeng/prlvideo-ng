
void FUN_100668870(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  CAbstractWizardPage::wizardModel();
  lVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  if (lVar1 != 0) {
    lVar1 = CDeclarativeWizardPage::pageContentItem();
    if (lVar1 != 0) {
      CAbstractWizardPage::wizardModel();
      uVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
      FUN_100680740(uVar2);
    }
  }
  FUN_100668790(param_1,2);
  return;
}

