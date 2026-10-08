
void FUN_10017f730(QGraphicsRectItem *param_1,undefined8 param_2)

{
  QPen local_40 [16];
  
  QGraphicsRectItem::QGraphicsRectItem(param_1,(QGraphicsItem *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021ee960;
  *(undefined **)(param_1 + 0x10) = PTR_shared_null_1021e15e8;
  *(undefined8 *)(param_1 + 0x18) = 0;
  QGraphicsItem::setFlag(param_1,1,1);
  QGraphicsItem::setFlag(param_1,2,1);
  QGraphicsItem::setAcceptedMouseButtons(param_1,1);
  QAbstractGraphicsShapeItem::pen();
  QPen::setStyle(local_40,0);
  QPen::setWidth((int)local_40);
  QAbstractGraphicsShapeItem::setPen((QPen *)param_1);
  FUN_10017f8e0(param_1,param_2,1);
  QPen::~QPen(local_40);
  return;
}

