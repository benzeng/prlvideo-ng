
void FUN_100603aa0(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  
  lVar2 = CAbstractWizardActionHandler::wizardModel();
  if (*(char *)(lVar2 + 0x31) == '\0') {
    cVar1 = FUN_1006021d0(lVar2);
    if (cVar1 != '\0') {
      FUN_1006034f0(param_1);
      return;
    }
  }
  CAbstractWizardActionHandler::wizardModel();
  lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102220be0);
  if (lVar2 != 0) {
    FUN_1006022a0(lVar2,0x80000275);
    return;
  }
  return;
}

