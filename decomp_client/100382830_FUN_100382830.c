
void FUN_100382830(long param_1)

{
  long lVar1;
  QGraphicsScene *pQVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x28);
  if (((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) &&
     (pQVar2 = *(QGraphicsScene **)(*(long *)(param_1 + 0x30) + 0x30),
     pQVar2 != (QGraphicsScene *)0x0)) {
    QGraphicsView::setScene(pQVar2);
  }
  QWidget::close();
  return;
}

