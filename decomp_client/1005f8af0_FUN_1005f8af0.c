
void FUN_1005f8af0(long param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  if (param_2 == 1) {
    QObject::sender();
    uVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102220840);
    iVar2 = FUN_100601170(uVar1);
    *(int *)(param_1 + 0x24) = iVar2;
    if (iVar2 != 0) {
      CAbstractWizardPage::wizardCtrl();
      CWizardController::goNext();
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}

