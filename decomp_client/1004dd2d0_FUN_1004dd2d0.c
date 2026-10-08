
void FUN_1004dd2d0(long *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  QString *pQVar3;
  QArrayData *pQVar4;
  
  if (param_2 == 1) {
    bVar2 = (bool)(**(code **)(*param_1 + 0x228))(param_1);
    QAbstractItemView::setAlternatingRowColors(bVar2);
    pQVar3 = (QString *)(**(code **)(*param_1 + 0x228))(param_1);
    pQVar4 = (QArrayData *)
             QString::fromAscii_helper
                       ("QListWidget::item:selected { background: rgb( 150, 200, 255 ); }",0x40);
    QWidget::setStyleSheet(pQVar3);
    if (*(int *)pQVar4 == -1) {
      return;
    }
    if (*(int *)pQVar4 == 0) goto LAB_1004dd3af;
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + -1;
    iVar1 = *(int *)pQVar4;
    UNLOCK();
  }
  else {
    if (param_2 != 0) {
      return;
    }
    bVar2 = (bool)(**(code **)(*param_1 + 0x228))(param_1);
    QAbstractItemView::setAlternatingRowColors(bVar2);
    pQVar3 = (QString *)(**(code **)(*param_1 + 0x228))(param_1);
    pQVar4 = (QArrayData *)PTR_shared_null_1021e1288;
    QWidget::setStyleSheet(pQVar3);
    if (*(int *)pQVar4 == -1) {
      return;
    }
    if (*(int *)pQVar4 == 0) goto LAB_1004dd3af;
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + -1;
    iVar1 = *(int *)pQVar4;
    UNLOCK();
  }
  if (iVar1 != 0) {
    return;
  }
LAB_1004dd3af:
  QArrayData::deallocate(pQVar4,2,8);
  return;
}

