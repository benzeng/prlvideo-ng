
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10017ff80(long param_1,QBrush *param_2,char param_3,double *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  double dVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  QString *pQVar5;
  QFont *pQVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  int local_270;
  int iStack_26c;
  int local_268;
  int iStack_264;
  QString local_260;
  QString local_258;
  undefined1 local_250 [16];
  QColor local_240 [32];
  double local_220;
  QArrayData *local_210;
  QFont local_208 [16];
  undefined1 local_1f8 [16];
  double local_1e8;
  double dStack_1e0;
  double local_1c0;
  QArrayData *local_1b0;
  QColor local_1a8 [16];
  QPen local_198 [8];
  QBrush local_190 [8];
  double local_188;
  double dStack_180;
  double local_178;
  double local_170;
  double local_150;
  QArrayData *local_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  QLinearGradient local_d8 [8];
  QArrayData *local_d0;
  undefined8 local_98;
  undefined8 uStack_90;
  uint local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  QVariant local_58;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QPainter::save();
  uVar4 = QGraphicsItem::scene();
  FUN_100182900(uVar4);
  iVar3 = (int)((ulong)param_7 >> 0x20);
  dVar1 = (double)((1 - iVar3) + (int)((ulong)param_8 >> 0x20));
  dVar7 = (double)((int)param_7 - *(int *)(param_1 + 0x18));
  dVar8 = (double)(iVar3 - *(int *)(param_1 + 0x1c));
  local_f0 = dVar1 + dVar8;
  local_f8 = dVar7;
  local_e8 = dVar7;
  local_e0 = dVar8;
  QLinearGradient::QLinearGradient(local_d8,(QPointF *)&local_e8,(QPointF *)&local_f8);
  if (param_3 == '\0') {
    QColor::setRgb((int)local_128,200,0xe6,0xff);
    QGradient::setColorAt(0.0,(QColor *)local_d8);
    QColor::setRgb((int)local_138,0x82,0xb4,0xff);
    QGradient::setColorAt(DAT_100e11050,(QColor *)local_d8);
  }
  else {
    QColor::setRgb((int)local_108,0,0x99,0xff);
    QGradient::setColorAt(0.0,(QColor *)local_d8);
    QColor::setRgb((int)local_118,0,0,0xcc);
    QGradient::setColorAt(DAT_100e11050,(QColor *)local_d8);
  }
  local_98 = 0;
  uStack_90 = 0;
  QGraphicsView::mapToScene((QRect *)&local_140);
  QPolygonF::boundingRect();
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001801c0;
    }
    QArrayData::deallocate(local_140,0x10,8);
  }
LAB_1001801c0:
  local_188 = dVar7 + local_150;
  dStack_180 = dVar8 + local_150;
  local_178 = ((double)((1 - (int)param_7) + (int)param_8) - local_150) - local_150;
  local_170 = (dVar1 - local_150) - local_150;
  QBrush::QBrush(local_190,(QGradient *)local_d8);
  QPainter::setBrush(param_2);
  QBrush::~QBrush(local_190);
  QPen::QPen(local_198);
  QPen::setStyle(local_198,1);
  QPen::setCapStyle(local_198,0);
  QPen::setJoinStyle(local_198,0);
  QColor::QColor(local_1a8,3);
  QPen::setColor((QColor *)local_198);
  QPen::setWidthF(local_150);
  QPainter::setPen((QPen *)param_2);
  QPainter::drawRects((QRectF *)param_2,(int)&local_188);
  QPainter::scale(DAT_100e11050 / *param_4,DAT_100e11050 / param_4[3]);
  local_88 = *(uint *)(param_4 + 4) ^ (uint)DAT_100e14fe0;
  uStack_84 = *(uint *)((long)param_4 + 0x24) ^ DAT_100e14fe0._4_4_;
  uStack_80 = (undefined4)((ulong)param_4[5] ^ _UNK_100e14fe8);
  uStack_7c = (undefined4)(((ulong)param_4[5] ^ _UNK_100e14fe8) >> 0x20);
  QPainter::translate((QPointF *)param_2);
  local_78 = 0;
  local_70 = 5;
  QGraphicsView::mapToScene((QRect *)&local_1b0);
  QPolygonF::boundingRect();
  if (*(int *)local_1b0 != -1) {
    if (*(int *)local_1b0 != 0) {
      LOCK();
      *(int *)local_1b0 = *(int *)local_1b0 + -1;
      local_31 = *(int *)local_1b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001803c6;
    }
    QArrayData::deallocate(local_1b0,0x10,8);
  }
LAB_1001803c6:
  dVar7 = local_1c0 + param_4[4];
  dStack_1e0 = local_1c0 + param_4[5];
  local_1c0 = (double)((ulong)local_1c0 ^ CONCAT44(DAT_100e14fe0._4_4_,(uint)DAT_100e14fe0));
  dVar1 = dStack_180 + dStack_1e0;
  local_1e8 = ((local_1c0 - param_4[4]) + local_178) - dVar7;
  dStack_1e0 = ((local_1c0 - param_4[5]) + local_170) - dStack_1e0;
  local_1f8._8_4_ = SUB84(dVar1,0);
  local_1f8._0_8_ = local_188 + dVar7;
  local_1f8._12_4_ = (int)((ulong)dVar1 >> 0x20);
  FontUtils::getNormalFont(SUB81(local_208,0));
  local_68 = 0;
  local_60 = 0xb;
  QGraphicsView::mapToScene((QRect *)&local_210);
  QPolygonF::boundingRect();
  QFont::setPointSizeF(local_220);
  if (*(int *)local_210 != -1) {
    if (*(int *)local_210 != 0) {
      LOCK();
      *(int *)local_210 = *(int *)local_210 + -1;
      local_31 = *(int *)local_210 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100180499;
    }
    QArrayData::deallocate(local_210,0x10,8);
  }
LAB_100180499:
  QPainter::setFont((QFont *)param_2);
  if (param_3 == '\0') {
    QColor::setRgb((int)local_250,0x1e,0x14,0x96);
    QPen::setColor((QColor *)local_198);
  }
  else {
    QColor::QColor(local_240,3);
    QPen::setColor((QColor *)local_198);
  }
  QPainter::setPen((QPen *)param_2);
  QGraphicsItem::data((int)&local_58);
  QVariant::toString();
  QVariant::~QVariant(&local_58);
  cVar2 = FUN_1001816a0(param_1);
  if (cVar2 == '\0') {
    QString::fromUtf8_helper((char *)&local_48,0x1db6743);
    pQVar5 = (QString *)
             QString::insert((int)&local_258,(QChar *)0x0,
                             (int)*(undefined8 *)(local_48 + 0x10) + (int)local_48);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001805b9;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1001805b9:
    QString::fromUtf8_helper((char *)&local_40,0x1db6743);
    QString::append(pQVar5);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10018060a;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_10018060a:
  if (0.0 <= (double)local_1f8._0_8_) {
    local_270 = (int)((double)local_1f8._0_8_ + DAT_100e110f0);
  }
  else {
    local_270 = (int)(((double)local_1f8._0_8_ -
                      (double)(int)(DAT_100e110e0 + (double)local_1f8._0_8_)) + DAT_100e110f0) +
                (int)(DAT_100e110e0 + (double)local_1f8._0_8_);
  }
  if (0.0 <= (double)local_1f8._8_8_) {
    iStack_26c = (int)((double)local_1f8._8_8_ + DAT_100e110f0);
  }
  else {
    iStack_26c = (int)(((double)local_1f8._8_8_ -
                       (double)(int)(DAT_100e110e0 + (double)local_1f8._8_8_)) + DAT_100e110f0) +
                 (int)(DAT_100e110e0 + (double)local_1f8._8_8_);
  }
  if (0.0 <= local_1e8) {
    local_268 = (int)(local_1e8 + DAT_100e110f0);
  }
  else {
    local_268 = (int)((local_1e8 - (double)(int)(DAT_100e110e0 + local_1e8)) + DAT_100e110f0) +
                (int)(DAT_100e110e0 + local_1e8);
  }
  if (0.0 <= dStack_1e0) {
    iStack_264 = (int)(dStack_1e0 + DAT_100e110f0);
  }
  else {
    iStack_264 = (int)((dStack_1e0 - (double)(int)(DAT_100e110e0 + dStack_1e0)) + DAT_100e110f0) +
                 (int)(DAT_100e110e0 + dStack_1e0);
  }
  local_268 = local_270 + -1 + local_268;
  iStack_264 = iStack_26c + -1 + iStack_264;
  local_260.field0_0x0 = local_258.field0_0x0;
  if (1 < *(int *)local_258.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_258.field0_0x0 = *(int *)local_258.field0_0x0 + 1;
    local_31 = *(int *)local_258.field0_0x0 != 0;
    UNLOCK();
  }
  auVar9 = QPainter::boundingRect((QRect *)param_2,(int)&local_270,(QString *)0x1084);
  if (((double)((iStack_264 + 1) - iStack_26c) < (double)((1 - auVar9._4_4_) + auVar9._12_4_)) ||
     ((double)((local_268 + 1) - local_270) < (double)(auVar9._8_4_ + (1 - auVar9._0_4_)))) {
    do {
      cVar2 = FUN_100181490(&local_260);
      if (cVar2 == '\0') break;
      auVar9 = QPainter::boundingRect((QRect *)param_2,(int)&local_270,(QString *)0x1084);
    } while (((double)((iStack_264 + 1) - iStack_26c) <=
              (double)((1 - auVar9._4_4_) + auVar9._12_4_)) ||
            ((double)((local_268 + 1) - local_270) <= (double)(auVar9._8_4_ + (1 - auVar9._0_4_))));
  }
  pQVar6 = (QFont *)QPainter::font();
  iVar3 = WidgetUtils::getLineCount(&local_260,pQVar6,(local_268 + 1) - local_270);
  if (3 < iVar3) {
    do {
      cVar2 = FUN_100181490(&local_260);
      if (cVar2 == '\0') break;
      pQVar6 = (QFont *)QPainter::font();
      iVar3 = WidgetUtils::getLineCount(&local_260,pQVar6,(local_268 + 1) - local_270);
    } while (3 < iVar3);
  }
  QString::operator=(&local_258,&local_260);
  if (*(int *)local_260.field0_0x0 != -1) {
    if (*(int *)local_260.field0_0x0 != 0) {
      LOCK();
      *(int *)local_260.field0_0x0 = *(int *)local_260.field0_0x0 + -1;
      local_31 = *(int *)local_260.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10018093b;
    }
    QArrayData::deallocate((QArrayData *)local_260.field0_0x0,2,8);
  }
LAB_10018093b:
  QPainter::drawText((QRectF *)param_2,(int)local_1f8,(QString *)0x1084,(QRectF *)&local_258);
  QPainter::restore();
  if (*(int *)local_258.field0_0x0 != -1) {
    if (*(int *)local_258.field0_0x0 != 0) {
      LOCK();
      *(int *)local_258.field0_0x0 = *(int *)local_258.field0_0x0 + -1;
      local_31 = *(int *)local_258.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100180997;
    }
    QArrayData::deallocate((QArrayData *)local_258.field0_0x0,2,8);
  }
LAB_100180997:
  QFont::~QFont(local_208);
  QPen::~QPen(local_198);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      UNLOCK();
      if (*(int *)local_d0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_d0,0x18,8);
  }
  return;
}

