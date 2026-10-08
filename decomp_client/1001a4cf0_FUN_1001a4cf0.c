
void FUN_1001a4cf0(QWizardPage *param_1)

{
  Data *pDVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1021fdd30;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021fdf28;
  QPixmap::~QPixmap((QPixmap *)(param_1 + 0x38));
  pDVar1 = *(Data **)(param_1 + 0x30);
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) goto LAB_1001a4d45;
      pDVar1 = *(Data **)(param_1 + 0x30);
    }
    QListData::dispose(pDVar1);
  }
LAB_1001a4d45:
  QWizardPage::~QWizardPage(param_1);
  return;
}

