
void FUN_1007fcbd0(QWidget *param_1)

{
  QArrayData *pQVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1021fba50;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021fbc00;
  pQVar1 = *(QArrayData **)(param_1 + 0xb8);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1007fcc29;
      pQVar1 = *(QArrayData **)(param_1 + 0xb8);
    }
    QArrayData::deallocate(pQVar1,0x18,8);
  }
LAB_1007fcc29:
  QPixmap::~QPixmap((QPixmap *)(param_1 + 0x90));
  QPixmap::~QPixmap((QPixmap *)(param_1 + 0x70));
  QPixmap::~QPixmap((QPixmap *)(param_1 + 0x50));
  QPixmap::~QPixmap((QPixmap *)(param_1 + 0x30));
  QWidget::~QWidget(param_1);
  return;
}

