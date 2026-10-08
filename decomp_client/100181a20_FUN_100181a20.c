
void FUN_100181a20(QGraphicsItemGroup *param_1,QGraphicsItem *param_2)

{
  int iVar1;
  
  QGraphicsItemGroup::QGraphicsItemGroup(param_1,(QGraphicsItem *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10226dbb0;
  QPainterPath::QPainterPath((QPainterPath *)(param_1 + 0x10));
  iVar1 = DAT_1023108d8 + 1;
  *(int *)(param_1 + 0x18) = DAT_1023108d8;
  DAT_1023108d8 = iVar1;
  QPainterPath::setFillRule((QPainterPath *)(param_1 + 0x10),1);
  if (param_2 != (QGraphicsItem *)0x0) {
    QGraphicsScene::addItem(param_2);
  }
  return;
}

