
void FUN_10066b7d0(long param_1,undefined4 param_2)

{
  bool bVar1;
  undefined1 auVar2 [16];
  
  *(undefined4 *)(param_1 + 0x38) = param_2;
  CAbstractWizardPage::wizardModel();
  auVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  bVar1 = *(int *)(param_1 + 0x38) == 0;
  FUN_100681210(auVar2._0_8_,bVar1,auVar2._8_8_,bVar1);
  return;
}

