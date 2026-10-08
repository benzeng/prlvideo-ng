
void FUN_10064f190(CDeclarativeWizardProxyPage *param_1)

{
  Data *pDVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_102223460;
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x48));
  }
  pDVar1 = *(Data **)(param_1 + 0x50);
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) goto LAB_10064f1e0;
      pDVar1 = *(Data **)(param_1 + 0x50);
    }
    QListData::dispose(pDVar1);
  }
LAB_10064f1e0:
  CDeclarativeWizardProxyPage::~CDeclarativeWizardProxyPage(param_1);
  return;
}

