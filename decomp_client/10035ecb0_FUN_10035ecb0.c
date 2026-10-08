
void FUN_10035ecb0(double param_1,QCursor *param_2)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  double dVar8;
  QCursor local_a0 [8];
  QPainter local_98 [8];
  QColor local_90 [16];
  QSize local_80;
  QPixmap local_78 [32];
  QPixmap local_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  
  dVar8 = *(double *)(param_2 + 0x10);
  if ((dVar8 == param_1) && (!NAN(dVar8) && !NAN(param_1))) {
    return;
  }
  *(double *)(param_2 + 0x10) = param_1;
  QCursor::pixmap();
  if ((DAT_100e11050 < param_1) &&
     ((uVar6 = QPixmap::width(), (uVar6 & 1) != 0 || (uVar6 = QPixmap::height(), (uVar6 & 1) != 0)))
     ) {
    QPixmap::setDevicePixelRatio(DAT_100e11050);
    iVar2 = QPixmap::width();
    iVar3 = QPixmap::width();
    iVar4 = QPixmap::height();
    iVar5 = QPixmap::height();
    local_80.field0_0x0 = iVar3 % 2 + iVar2;
    local_80.field1_0x4 = iVar5 % 2 + iVar4;
    QPixmap::QPixmap(local_78,&local_80);
    QColor::QColor(local_90,0x13);
    QPixmap::fill((QColor *)local_78);
    QPainter::QPainter(local_98,(QPaintDevice *)local_78);
    local_38 = 0;
    uStack_30 = 0;
    QPainter::drawPixmap((QPointF *)local_98,(QPixmap *)&local_38);
    QPixmap::operator=(local_58,local_78);
    QPainter::~QPainter(local_98);
    QPixmap::~QPixmap(local_78);
  }
  QPixmap::setDevicePixelRatio(param_1);
  uVar7 = QCursor::hotSpot();
  dVar1 = (double)(int)uVar7 / param_1;
  if (0.0 <= dVar1) {
    iVar2 = (int)(dVar1 + DAT_100e110f0);
  }
  else {
    iVar2 = (int)((dVar1 - (double)(int)(DAT_100e110e0 + dVar1)) + DAT_100e110f0) +
            (int)(DAT_100e110e0 + dVar1);
  }
  param_1 = (double)(int)((ulong)uVar7 >> 0x20) / param_1;
  if (0.0 <= param_1) {
    iVar3 = (int)(param_1 + DAT_100e110f0);
  }
  else {
    iVar3 = (int)((param_1 - (double)(int)(DAT_100e110e0 + param_1)) + DAT_100e110f0) +
            (int)(DAT_100e110e0 + param_1);
  }
  dVar1 = (double)iVar2 * dVar8;
  if (0.0 <= dVar1) {
    iVar2 = (int)(dVar1 + DAT_100e110f0);
  }
  else {
    iVar2 = (int)((dVar1 - (double)(int)(DAT_100e110e0 + dVar1)) + DAT_100e110f0) +
            (int)(DAT_100e110e0 + dVar1);
  }
  dVar8 = dVar8 * (double)iVar3;
  if (0.0 <= dVar8) {
    iVar3 = (int)(dVar8 + DAT_100e110f0);
  }
  else {
    iVar3 = (int)((dVar8 - (double)(int)(DAT_100e110e0 + dVar8)) + DAT_100e110f0) +
            (int)(DAT_100e110e0 + dVar8);
  }
  QCursor::QCursor(local_a0,local_58,iVar2,iVar3);
  QCursor::operator=(param_2,local_a0);
  QCursor::~QCursor(local_a0);
  QPixmap::~QPixmap(local_58);
  return;
}

