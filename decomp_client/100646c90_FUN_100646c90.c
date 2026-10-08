
void FUN_100646c90(CDeclarativeWizardProxyPage *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_102223200;
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x48));
  }
  CDeclarativeWizardProxyPage::~CDeclarativeWizardProxyPage(param_1);
  operator_delete(param_1);
  return;
}

