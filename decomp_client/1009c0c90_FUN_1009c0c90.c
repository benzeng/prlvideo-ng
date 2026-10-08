
void FUN_1009c0c90(CDeclarativeWizardProxyPage *param_1)

{
  QArrayData *pQVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1022356f0;
  pQVar1 = *(QArrayData **)(param_1 + 0x50);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1009c0cd8;
      pQVar1 = *(QArrayData **)(param_1 + 0x50);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1009c0cd8:
  CDeclarativeWizardProxyPage::~CDeclarativeWizardProxyPage(param_1);
  operator_delete(param_1);
  return;
}

