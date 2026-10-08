
void FUN_10066b810(CDeclarativeWizardPage *param_1,CAbstractWizardModel *param_2)

{
  undefined *puVar1;
  
  CDeclarativeWizardPage::CDeclarativeWizardPage(param_1,param_2,0xd,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_102224100;
  puVar1 = PTR_shared_null_1021e15e8;
  *(undefined **)(param_1 + 0x38) = PTR_shared_null_1021e15e8;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined **)(param_1 + 0x48) = PTR_shared_null_1021e1288;
  *(undefined **)(param_1 + 0x50) = puVar1;
  param_1[0x58] = (CDeclarativeWizardPage)0x0;
  FUN_10066b980(param_1);
  return;
}

