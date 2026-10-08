
undefined8 FUN_1005ea610(QGraphicsItem *param_1,QEvent *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  if (*(short *)(param_3 + 0x10) == 0x9f) {
    local_18 = QGraphicsSceneContextMenuEvent::screenPos();
    FUN_1005ea650(param_1,&local_18);
    uVar1 = 1;
  }
  else {
    uVar1 = QGraphicsItem::sceneEventFilter(param_1,param_2);
  }
  return uVar1;
}

