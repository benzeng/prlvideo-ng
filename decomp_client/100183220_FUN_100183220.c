
void FUN_100183220(QGraphicsSceneMouseEvent *param_1,undefined8 param_2)

{
  long lVar1;
  QVariant local_30;
  
  QGraphicsSceneMouseEvent::setModifiers(param_2,0);
  QGraphicsScene::mouseReleaseEvent(param_1);
  lVar1 = FUN_100182960(param_1);
  if (lVar1 != 0) {
    QVariant::QVariant(&local_30,false);
    QGraphicsItem::setData((int)lVar1,(QVariant *)0x2);
    QVariant::~QVariant(&local_30);
    FUN_1001832f0(param_1,1);
    FUN_1001832f0(param_1,2);
    FUN_100183da0(param_1);
    FUN_100182a20(param_1);
    FUN_1007fda60(param_1);
    FUN_1007fda40(param_1);
  }
  return;
}

