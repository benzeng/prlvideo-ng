
void FUN_100736300(long param_1,undefined8 param_2)

{
  char cVar1;
  QPixmap local_40 [32];
  
  cVar1 = QImage::isNull();
  if (cVar1 == '\0') {
    QPixmap::fromImage(local_40,param_2,0);
  }
  else {
    QPixmap::QPixmap(local_40);
  }
  QPixmap::operator=((QPixmap *)(param_1 + 0x38),local_40);
  QPixmap::~QPixmap(local_40);
  QGraphicsItem::update((QRectF *)(*(long *)(param_1 + 0x10) + 0x10));
  return;
}

