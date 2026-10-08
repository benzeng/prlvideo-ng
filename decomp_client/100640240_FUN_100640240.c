
void FUN_100640240(CDeclarativeWizardProxyPage *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_1022230d0;
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x48));
  }
  CDeclarativeWizardProxyPage::~CDeclarativeWizardProxyPage(param_1);
  operator_delete(param_1);
  return;
}

