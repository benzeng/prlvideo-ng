
void FUN_100382d50(long param_1,QPointF *param_2)

{
  char cVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double local_108;
  double local_f0;
  double local_e8;
  double local_d8;
  double local_c8;
  double local_b8;
  double local_a8;
  double local_98;
  double local_80;
  double local_70;
  double local_60;
  double local_50;
  double local_40;
  
  cVar1 = QPixmap::isNull();
  if (cVar1 == '\0') {
    auVar4 = QPixmap::rect();
    dVar2 = (double)((1 - auVar4._0_4_) + auVar4._8_4_) * DAT_100e110f0;
    if ((*(uint *)(param_1 + 0x50) & 1) == 0) {
      if ((*(uint *)(param_1 + 0x50) & 4) == 0) {
        QGraphicsLayoutItem::contentsRect();
        local_108 = (local_80 + local_70) - dVar2;
      }
      else {
        QGraphicsLayoutItem::contentsRect();
        local_108 = local_50 * DAT_100e110f0 + local_60;
      }
    }
    else {
      QGraphicsLayoutItem::contentsRect();
      local_108 = local_40 + dVar2;
    }
    dVar3 = (double)((1 - auVar4._4_4_) + auVar4._12_4_) * DAT_100e110f0;
    if ((*(uint *)(param_1 + 0x50) & 0x20) == 0) {
      if ((*(uint *)(param_1 + 0x50) & 0x80) == 0) {
        QGraphicsLayoutItem::contentsRect();
        local_e8 = (local_d8 + local_c8) - dVar3;
      }
      else {
        QGraphicsLayoutItem::contentsRect();
        local_e8 = local_a8 * DAT_100e110f0 + local_b8;
      }
    }
    else {
      QGraphicsLayoutItem::contentsRect();
      local_e8 = local_98 + dVar3;
    }
    local_f0 = local_108 - dVar2;
    local_e8 = local_e8 - dVar3;
    QPainter::drawPixmap(param_2,(QPixmap *)&local_f0);
  }
  return;
}

