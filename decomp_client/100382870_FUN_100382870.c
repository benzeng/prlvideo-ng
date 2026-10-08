
void FUN_100382870(QPoint *param_1,long param_2)

{
  long lVar1;
  QRectF *pQVar2;
  QWidget *pQVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x28);
  if (((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) &&
     (pQVar2 = *(QRectF **)(*(long *)(param_1 + 0x30) + 0x30), pQVar2 != (QRectF *)0x0)) {
    dVar6 = *(double *)(param_2 + 0x10) + DAT_100e110f0;
    if (0.0 <= dVar6) {
      iVar5 = (int)(dVar6 + DAT_100e110f0);
    }
    else {
      iVar5 = (int)((dVar6 - (double)(int)(DAT_100e110e0 + dVar6)) + DAT_100e110f0) +
              (int)(DAT_100e110e0 + dVar6);
    }
    QGraphicsView::setSceneRect(pQVar2);
    lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x28);
    iVar4 = 0;
    if ((lVar1 != 0) && (iVar4 = 0, *(int *)(lVar1 + 4) != 0)) {
      iVar4 = (int)*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x30);
    }
    QWidget::setFixedSize(iVar4,iVar5);
    pQVar3 = (QWidget *)QApplication::desktop();
    QDesktopWidget::availableGeometry(pQVar3);
    QWidget::move(param_1);
  }
  return;
}

