
void FUN_1009b4b20(CDeclarativeWizardProxyPage *param_1)

{
  QArrayData *pQVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1022359d0;
  pQVar1 = *(QArrayData **)(param_1 + 0x50);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1009b4b6c;
      pQVar1 = *(QArrayData **)(param_1 + 0x50);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1009b4b6c:
  CDeclarativeWizardProxyPage::~CDeclarativeWizardProxyPage(param_1);
  return;
}

