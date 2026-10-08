
void FUN_1007fb270(undefined8 *param_1)

{
  Data *pDVar1;
  
  param_1[-2] = &PTR_FUN_1021fa850;
  *param_1 = &PTR_FUN_1021fab70;
  pDVar1 = (Data *)param_1[4];
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) goto LAB_1007fb2bd;
      pDVar1 = (Data *)param_1[4];
    }
    QListData::dispose(pDVar1);
  }
LAB_1007fb2bd:
  QListWidget::~QListWidget((QListWidget *)(param_1 + -2));
  return;
}

