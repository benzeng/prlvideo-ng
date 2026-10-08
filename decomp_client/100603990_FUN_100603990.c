
void FUN_100603990(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  if (param_3 == 1) {
    CAbstractWizardActionHandler::wizardModel();
    lVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102220be0);
    if (lVar1 != 0) {
      FUN_1006022a0(lVar1,0x80000275);
      return;
    }
  }
  return;
}

