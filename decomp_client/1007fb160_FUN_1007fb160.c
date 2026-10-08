
void FUN_1007fb160(QListWidget *param_1)

{
  Data *pDVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1021fa850;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021fab70;
  pDVar1 = *(Data **)(param_1 + 0x30);
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) goto LAB_1007fb1a9;
      pDVar1 = *(Data **)(param_1 + 0x30);
    }
    QListData::dispose(pDVar1);
  }
LAB_1007fb1a9:
  QListWidget::~QListWidget(param_1);
  return;
}

