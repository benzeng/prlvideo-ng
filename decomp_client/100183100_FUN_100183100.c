
undefined1
FUN_100183100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined1 uVar3;
  QVariant local_40;
  undefined8 local_30;
  undefined8 local_28;
  
  iVar1 = QGraphicsSceneMouseEvent::button();
  if (iVar1 == 1) {
    local_30 = QGraphicsSceneMouseEvent::scenePos();
    local_28 = param_2;
    lVar2 = FUN_100182b00(param_3,&local_30);
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      QGraphicsSceneMouseEvent::setModifiers(param_4,0);
      QVariant::QVariant(&local_40,true);
      QGraphicsItem::setData((int)lVar2,(QVariant *)0x2);
      QVariant::~QVariant(&local_40);
      FUN_100182bb0(param_3,lVar2);
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

