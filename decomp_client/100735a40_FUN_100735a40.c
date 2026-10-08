
void FUN_100735a40(long *param_1,QRectF *param_2)

{
  long lVar1;
  char cVar2;
  QPixmap local_68 [32];
  undefined1 local_48 [32];
  QPainterPath local_28 [8];
  
  if (0 < *(int *)(param_1[6] + 0x24)) {
    QPainterPath::QPainterPath(local_28);
    (**(code **)(*param_1 + 0x60))(local_48,param_1);
    QPainterPath::addRoundedRect
              ((double)*(int *)(param_1[6] + 0x24),(double)*(int *)(param_1[6] + 0x24),local_28,
               local_48,0);
    QPainter::setClipPath(param_2,local_28,1);
    QPainterPath::~QPainterPath(local_28);
  }
  cVar2 = QPixmap::isNull();
  if (cVar2 == '\0') {
    cVar2 = QDeclarativeItem::smooth();
    if (cVar2 != '\0') {
      QPainter::setRenderHint(param_2,4,1);
    }
    (**(code **)(*param_1 + 0x60))(local_68,param_1);
    lVar1 = param_1[6];
    QPixmap::rect();
    QPainter::drawPixmap(param_2,local_68,(QRectF *)(lVar1 + 0x30));
  }
  return;
}

