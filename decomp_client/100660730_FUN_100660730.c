
bool FUN_100660730(void)

{
  int iVar1;
  undefined8 uVar2;
  long local_90 [11];
  undefined1 local_38 [40];
  
  CAbstractWizardPage::wizardModel();
  uVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  FUN_100676150(local_90,uVar2);
  iVar1 = *(int *)(local_90[0] + 4);
  FUN_100252c80(local_38);
  FUN_100252e70(local_90);
  return iVar1 != 0;
}

