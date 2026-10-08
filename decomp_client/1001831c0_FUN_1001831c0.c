
void FUN_1001831c0(QGraphicsSceneMouseEvent *param_1)

{
  char cVar1;
  
  cVar1 = FUN_100183100();
  if (cVar1 != '\0') {
    QGraphicsScene::mousePressEvent(param_1);
    return;
  }
  return;
}

