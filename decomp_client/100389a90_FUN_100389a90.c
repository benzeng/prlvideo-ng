
void FUN_100389a90(QGraphicsView *param_1,QWidget *param_2)

{
  bool bVar1;
  
  QGraphicsView::QGraphicsView(param_1,param_2);
  *(undefined ***)param_1 = &PTR_metaObject_1021f16f0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021f18d8;
  bVar1 = (bool)QAbstractScrollArea::viewport();
  QWidget::setAutoFillBackground(bVar1);
  QFrame::setFrameShape(param_1,0);
  QAbstractScrollArea::setHorizontalScrollBarPolicy(param_1,1);
  QAbstractScrollArea::setVerticalScrollBarPolicy(param_1,1);
  QGraphicsView::setRenderHint(param_1,1,1);
  QGraphicsView::setViewportUpdateMode(param_1,0);
  return;
}

