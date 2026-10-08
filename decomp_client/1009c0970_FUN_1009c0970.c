
void FUN_1009c0970(CDeclarativeWizardProxyPage *param_1)

{
  Data *pDVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_102235580;
  QHostAddress::~QHostAddress((QHostAddress *)(param_1 + 0x58));
  pDVar1 = *(Data **)(param_1 + 0x50);
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) goto LAB_1009c09b7;
      pDVar1 = *(Data **)(param_1 + 0x50);
    }
    QListData::dispose(pDVar1);
  }
LAB_1009c09b7:
  CDeclarativeWizardProxyPage::~CDeclarativeWizardProxyPage(param_1);
  return;
}

