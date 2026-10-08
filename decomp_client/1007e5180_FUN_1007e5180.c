
void FUN_1007e5180(long param_1,int param_2)

{
  QPen *pQVar1;
  char cVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  QPen local_1d8 [8];
  QTransform local_1d0 [88];
  QPen local_178 [8];
  QTransform local_170 [88];
  QBrush local_118 [8];
  QBrush local_110 [8];
  undefined4 local_108;
  undefined4 local_104;
  int local_100;
  int local_fc;
  QPainter local_f8 [24];
  double local_e0;
  double local_c0;
  double local_a0;
  QPixmap local_90 [32];
  QLinearGradient local_70 [8];
  QArrayData *local_68;
  undefined1 local_29;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x10) + 0x28) + 10) & 1) != 0) {
    QTimeLine::stop();
    return;
  }
  cVar2 = QPixmap::isNull();
  if (cVar2 != '\0') {
    QLinearGradient::QLinearGradient(local_70,0.0,0.0,DAT_100e16cb0,0.0);
    QGradient::setColorAt(0.0,(QColor *)local_70);
    QGradient::setColorAt(DAT_100e2a840,(QColor *)local_70);
    QGradient::setColorAt(DAT_100e2a848,(QColor *)local_70);
    QGradient::setColorAt(DAT_100e11050,(QColor *)local_70);
    QGraphicsLayoutItem::contentsRect();
    QGraphicsLayoutItem::contentsRect();
    QGraphicsLayoutItem::contentsRect();
    QPixmap::QPixmap(local_90,(int)(local_a0 + local_c0 + local_e0 + DAT_100e16cb0),10);
    QPainter::QPainter(local_f8,(QPaintDevice *)local_90);
    uVar3 = QPixmap::size();
    local_108 = 0;
    local_104 = 0;
    local_100 = (int)uVar3 + -1;
    local_fc = (int)((ulong)uVar3 >> 0x20) + -1;
    QBrush::QBrush(local_110,(QGradient *)local_70);
    QPainter::fillRect((QRect *)local_f8,(QBrush *)&local_108);
    QBrush::~QBrush(local_110);
    QPixmap::operator=((QPixmap *)(param_1 + 0x58),local_90);
    QPainter::~QPainter(local_f8);
    QPixmap::~QPixmap(local_90);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_29 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1007e53a5;
      }
      QArrayData::deallocate(local_68,0x18,8);
    }
  }
LAB_1007e53a5:
  QBrush::QBrush(local_118,(QPixmap *)(param_1 + 0x58));
  QTransform::QTransform(local_170);
  QTransform::translate((double)(param_2 + -100),0.0);
  QBrush::setTransform((QTransform *)local_118);
  pQVar1 = *(QPen **)(param_1 + 0x30);
  QPen::QPen((QPen *)0x0,local_178,local_118,1,0x10,0x40);
  CGraphicsTextLabel::setPen(pQVar1);
  QPen::~QPen(local_178);
  QTransform::QTransform(local_1d0);
  dVar4 = (double)QGraphicsItem::pos();
  dVar5 = (double)QGraphicsItem::pos();
  QTransform::translate((double)(param_2 + -100) - (dVar4 - dVar5),0.0);
  QBrush::setTransform((QTransform *)local_118);
  pQVar1 = *(QPen **)(param_1 + 0x38);
  QPen::QPen((QPen *)0x0,local_1d8,local_118,1,0x10,0x40);
  CGraphicsTextLabel::setPen(pQVar1);
  QPen::~QPen(local_1d8);
  QBrush::~QBrush(local_118);
  return;
}

