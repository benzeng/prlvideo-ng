
void FUN_100663fe0(CDeclarativeWizardProxyPage *param_1)

{
  QArrayData *pQVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_102223a50;
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x48));
  }
  pQVar1 = *(QArrayData **)(param_1 + 0x50);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10066403a;
      pQVar1 = *(QArrayData **)(param_1 + 0x50);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10066403a:
  CDeclarativeWizardProxyPage::~CDeclarativeWizardProxyPage(param_1);
  return;
}

