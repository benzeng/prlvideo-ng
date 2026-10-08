
void FUN_10099abf0(CDeclarativeWizardProxyPage *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_102234a00;
  if (*(void **)(param_1 + 0x50) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x50));
  }
  CDeclarativeWizardProxyPage::~CDeclarativeWizardProxyPage(param_1);
  return;
}

