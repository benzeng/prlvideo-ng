
undefined1 FUN_1006039d0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = CAbstractWizardActionHandler::wizardModel();
  if (*(char *)(lVar3 + 0x31) != '\0') {
    return 1;
  }
  CAbstractWizardModel::pageFlow();
  iVar2 = CAbstractWizardPageFlow::currentPageId();
  if (iVar2 == 3) {
    CAbstractWizardActionHandler::wizardModel();
    lVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102220be0);
    if (lVar3 == 0) {
      return 1;
    }
    uVar4 = 0;
  }
  else {
    cVar1 = FUN_1006021d0(lVar3);
    if (cVar1 != '\0') {
      FUN_1006034f0(param_1);
      return 0;
    }
    CAbstractWizardActionHandler::wizardModel();
    lVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102220be0);
    if (lVar3 == 0) {
      return 1;
    }
    uVar4 = 0x80000275;
  }
  FUN_1006022a0(lVar3,uVar4);
  return 1;
}

