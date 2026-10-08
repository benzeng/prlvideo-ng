
void FUN_1009b63d0(long param_1)

{
  *(undefined1 *)(param_1 + 0x4d) = 1;
  FUN_1009b5410(param_1,1);
  *(undefined1 *)(param_1 + 0x4d) = 0;
  FUN_1009b5410(param_1,0);
  CAbstractWizardPage::pageRolledBack(SUB81(param_1,0));
  return;
}

