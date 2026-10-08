
void FUN_100658200(CDeclarativeWizardProxyPage *param_1)

{
  QMapNodeBase *pQVar1;
  Data *pDVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_102223590;
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x48));
  }
  pQVar1 = *(QMapNodeBase **)(param_1 + 0x110);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10065826e;
      pQVar1 = *(QMapNodeBase **)(param_1 + 0x110);
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      QMapDataBase::freeTree(pQVar1,(int)*(long *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_10065826e:
  pDVar2 = *(Data **)(param_1 + 0x108);
  if (*(int *)pDVar2 != -1) {
    if (*(int *)pDVar2 != 0) {
      LOCK();
      *(int *)pDVar2 = *(int *)pDVar2 + -1;
      UNLOCK();
      if (*(int *)pDVar2 != 0) goto LAB_10065829a;
      pDVar2 = *(Data **)(param_1 + 0x108);
    }
    QListData::dispose(pDVar2);
  }
LAB_10065829a:
  pDVar2 = *(Data **)(param_1 + 0x100);
  if (*(int *)pDVar2 != -1) {
    if (*(int *)pDVar2 != 0) {
      LOCK();
      *(int *)pDVar2 = *(int *)pDVar2 + -1;
      UNLOCK();
      if (*(int *)pDVar2 != 0) goto LAB_1006582c6;
      pDVar2 = *(Data **)(param_1 + 0x100);
    }
    QListData::dispose(pDVar2);
  }
LAB_1006582c6:
  pDVar2 = *(Data **)(param_1 + 0xf8);
  if (*(int *)pDVar2 != -1) {
    if (*(int *)pDVar2 != 0) {
      LOCK();
      *(int *)pDVar2 = *(int *)pDVar2 + -1;
      UNLOCK();
      if (*(int *)pDVar2 != 0) goto LAB_1006582f2;
      pDVar2 = *(Data **)(param_1 + 0xf8);
    }
    QListData::dispose(pDVar2);
  }
LAB_1006582f2:
  CDeclarativeWizardProxyPage::~CDeclarativeWizardProxyPage(param_1);
  return;
}

