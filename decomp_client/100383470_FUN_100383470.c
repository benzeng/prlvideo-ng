
void FUN_100383470(QGraphicsSceneResizeEvent *param_1)

{
  long lVar1;
  QRectF *pQVar2;
  undefined1 local_68 [32];
  QRectF local_48 [32];
  
  QGraphicsWidget::resizeEvent(param_1);
  lVar1 = QGraphicsItem::scene();
  if (lVar1 != 0) {
    pQVar2 = (QRectF *)QGraphicsItem::scene();
    (**(code **)(*(long *)param_1 + 0x88))(local_68,param_1);
    QGraphicsItem::mapRectToScene(local_48);
    QGraphicsScene::setSceneRect(pQVar2);
  }
  return;
}

