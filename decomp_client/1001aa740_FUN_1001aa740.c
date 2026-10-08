
QPixmap * FUN_1001aa740(QPixmap *param_1,undefined8 param_2,QSize *param_3,int param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  QBrush local_98 [8];
  QPen local_90 [8];
  QPainter local_88 [8];
  QImage local_80 [32];
  QColor local_60 [16];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  double local_40;
  double local_38;
  
  QPixmap::QPixmap(param_1,param_3);
  QColor::QColor(local_60,0x13);
  QPixmap::fill((QColor *)param_1);
  cVar2 = QImage::isNull();
  if (cVar2 == '\0') {
    QImage::scaled(local_80,param_2,param_3,1,1);
  }
  else {
    QImage::QImage(local_80);
  }
  QPainter::QPainter(local_88,(QPaintDevice *)param_1);
  iVar1 = param_3->field0_0x0;
  iVar3 = QImage::width();
  dVar6 = (double)(int)(iVar1 - iVar3) * DAT_100e110f0;
  if (0.0 <= dVar6) {
    iVar3 = (int)(dVar6 + DAT_100e110f0);
  }
  else {
    iVar3 = (int)((dVar6 - (double)(int)(DAT_100e110e0 + dVar6)) + DAT_100e110f0) +
            (int)(DAT_100e110e0 + dVar6);
  }
  iVar1 = param_3->field1_0x4;
  iVar4 = QImage::height();
  dVar6 = (double)(int)(iVar1 - iVar4) * DAT_100e110f0;
  if (0.0 <= dVar6) {
    iVar4 = (int)(dVar6 + DAT_100e110f0);
  }
  else {
    iVar4 = (int)((dVar6 - (double)(int)(DAT_100e110e0 + dVar6)) + DAT_100e110f0) +
            (int)(DAT_100e110e0 + dVar6);
  }
  local_40 = (double)iVar3;
  local_38 = (double)iVar4;
  QPainter::drawImage((QPointF *)local_88,(QImage *)&local_40);
  QBrush::QBrush(local_98,3,1);
  QPen::QPen((QPen *)(double)param_4,local_90,local_98,1,0x10,0x40);
  QPainter::setPen((QPen *)local_88);
  QPen::~QPen(local_90);
  QBrush::~QBrush(local_98);
  QPainter::setBrush(local_88,0);
  iVar5 = QImage::width();
  local_44 = QImage::height();
  local_48 = iVar3 + -2 + iVar5;
  local_44 = iVar4 + -2 + local_44;
  local_50 = iVar3;
  local_4c = iVar4;
  QPainter::drawRects((QRect *)local_88,(int)&local_50);
  QPainter::~QPainter(local_88);
  QImage::~QImage(local_80);
  return param_1;
}

