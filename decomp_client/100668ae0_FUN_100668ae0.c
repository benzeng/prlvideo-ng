
undefined8 FUN_100668ae0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  CAbstractWizardPage::wizardModel();
  lVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  if (lVar1 != 0) {
    CAbstractWizardPage::wizardModel();
    uVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
    FUN_100679ad0(uVar2);
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
  return 0;
}

