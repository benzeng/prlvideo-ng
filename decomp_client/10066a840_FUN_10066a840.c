
void FUN_10066a840(long param_1,int param_2,QString *param_3)

{
  long lVar1;
  char cVar2;
  
  if (-1 < param_2) {
    cVar2 = operator==((QString *)(param_1 + 0x50),param_3);
    if (cVar2 == '\0') {
      CAbstractWizardPage::wizardModel();
      QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
      lVar1 = CAbstractWizardModel::currentPage();
      if (lVar1 == param_1) {
        FUN_10066a020(param_1);
        return;
      }
    }
  }
  return;
}

