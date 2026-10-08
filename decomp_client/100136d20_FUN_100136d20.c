
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100136d20(QPaintEvent *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  QPixmap local_220 [32];
  QColor local_200 [16];
  QPen local_1f0 [8];
  QArrayData *local_1e8;
  QString local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  uint local_1c0 [8];
  QArrayData *local_1a0;
  QString local_198;
  QArrayData *local_190;
  QPixmap local_188 [32];
  QVariant local_168;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  QArrayData *local_130;
  QPixmap local_128 [32];
  int local_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  QPainter local_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  QColor local_b8 [16];
  double local_a8;
  double local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  double local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  if (param_1[0x38] != (QPaintEvent)0x0) {
    QComboBox::paintEvent(param_1);
    return;
  }
  QPainter::QPainter(local_f8,(QPaintDevice *)(param_1 + 0x10));
  lVar1 = *(long *)(param_1 + 0x28);
  iVar7 = (*(int *)(lVar1 + 0x1c) + -6) - *(int *)(lVar1 + 0x14);
  iVar10 = (*(int *)(lVar1 + 0x20) + -6) - *(int *)(lVar1 + 0x18);
  iVar8 = (*(int *)(lVar1 + 0x1c) - *(int *)(lVar1 + 0x14)) / 2 -
          ((iVar7 + -6) - (iVar7 + -6 >> 0x1f) >> 1);
  iVar9 = (*(int *)(lVar1 + 0x20) - *(int *)(lVar1 + 0x18)) / 2 -
          ((iVar10 + -6) - (iVar10 + -6 >> 0x1f) >> 1);
  _local_108 = CONCAT44(iVar9 + -1,iVar8 + -1);
  _local_100 = CONCAT44(iVar9 + -7 + iVar10,iVar8 + -7 + iVar7);
  iVar7 = *(int *)(lVar1 + 0x1c) - *(int *)(lVar1 + 0x14);
  iVar8 = *(int *)(lVar1 + 0x20) - *(int *)(lVar1 + 0x18);
  local_d8 = CONCAT44(iVar8,iVar7);
  local_e0 = 0;
  local_e8 = 0;
  local_e0 = QWidget::mapToGlobal((QPoint *)param_1);
  local_d8 = CONCAT44(iVar8 + (int)((ulong)local_e0 >> 0x20),iVar7 + (int)local_e0);
  local_f0 = QCursor::pos();
  cVar4 = QRect::contains((QPoint *)&local_e0,SUB81(&local_f0,0));
  auVar2._8_8_ = local_c8._8_8_;
  auVar2._0_8_ = local_c8._0_8_;
  if ((cVar4 != '\0') &&
     (local_c8 = auVar2, (*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 0x28) + 9) & 0x80) != 0))
  {
    local_130 = (QArrayData *)QString::fromAscii_helper(":/pixmaps/MacButtons/shadow.png",0x1f);
    QPixmap::QPixmap(local_128,&local_130,0,0);
    if (*(int *)local_130 != -1) {
      if (*(int *)local_130 != 0) {
        LOCK();
        *(int *)local_130 = *(int *)local_130 + -1;
        local_31 = *(int *)local_130 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100136f12;
      }
      QArrayData::deallocate(local_130,2,8);
    }
LAB_100136f12:
    local_148 = _DAT_100e14ce0;
    uStack_140 = _UNK_100e14ce8;
    lVar1 = *(long *)(param_1 + 0x28);
    local_150 = CONCAT44(*(int *)(lVar1 + 0x20) - *(int *)(lVar1 + 0x18),
                         *(int *)(lVar1 + 0x1c) - *(int *)(lVar1 + 0x14));
    local_158 = 0;
    local_c8 = QPixmap::rect();
    local_d0 = 0;
    qDrawBorderPixmap(local_f8,&local_158,&local_148,local_128,local_c8,&local_148,&local_d0,0);
    QColor::QColor(local_b8,3);
    QPainter::fillRect((QRect *)local_f8,(QColor *)&local_108);
    QPixmap::~QPixmap(local_128);
  }
  QComboBox::currentIndex();
  QComboBox::itemData((int)&local_168,(int)param_1);
  uVar5 = QVariant::toUInt((bool *)&local_168);
  QVariant::~QVariant(&local_168);
  ResourceUtils::getOsIconPath(&local_190,(char)((uint)uVar5 >> 8),uVar5,0);
  QPixmap::QPixmap(local_188,&local_190,0,0);
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      local_31 = *(int *)local_190 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10013707f;
    }
    QArrayData::deallocate(local_190,2,8);
  }
LAB_10013707f:
  uVar3 = _local_108;
  iVar8 = iStack_fc;
  iVar9 = QPixmap::height();
  iVar10 = (int)((ulong)uVar3 >> 0x20);
  iVar7 = (int)uVar3;
  local_78 = (double)(iVar7 + 3);
  local_70 = (double)((((1 - iVar10) + iVar8) - iVar9) / 2 + iVar10);
  local_68 = _DAT_100e11140;
  uStack_60 = _UNK_100e11148;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  QPainter::drawPixmap((QRectF *)local_f8,(QPixmap *)&local_78,(QRectF *)local_188);
  iVar9 = QPixmap::width();
  uVar3 = _local_108;
  iVar8 = iStack_fc;
  QFontMetrics::QFontMetrics((QFontMetrics *)&local_198,(QFont *)(*(long *)(param_1 + 0x28) + 0x38))
  ;
  QComboBox::currentText();
  iVar10 = QFontMetrics::width(&local_198,(int)&local_1a0);
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_31 = *(int *)local_1a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10013719e;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_10013719e:
  QFontMetrics::~QFontMetrics((QFontMetrics *)&local_198);
  QTextOption::QTextOption((QTextOption *)local_1c0);
  iVar9 = (int)uVar3 + 5 + iVar9 + iVar7;
  local_1c0[0] = local_1c0[0] & 0xfffff000 | 0x81;
  local_1e0.field0_0x0 = (QTypedArrayData<unsigned_short> *)(double)iVar9;
  iVar7 = (int)((ulong)uVar3 >> 0x20);
  local_1d8 = (double)iVar7;
  local_1d0 = (double)iVar10;
  local_1c8 = (double)((1 - iVar7) + iVar8);
  QComboBox::currentText();
  QPainter::drawText((QRectF *)local_f8,&local_1e0,(QTextOption *)&local_1e8);
  if (*(int *)local_1e8 != -1) {
    if (*(int *)local_1e8 != 0) {
      LOCK();
      *(int *)local_1e8 = *(int *)local_1e8 + -1;
      local_31 = *(int *)local_1e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100137280;
    }
    QArrayData::deallocate(local_1e8,2,8);
  }
LAB_100137280:
  lVar1 = *(long *)(param_1 + 0x28);
  iVar7 = *(int *)(lVar1 + 0x1c) - *(int *)(lVar1 + 0x14);
  iVar8 = *(int *)(lVar1 + 0x20) - *(int *)(lVar1 + 0x18);
  local_40 = CONCAT44(iVar8,iVar7);
  local_48 = 0;
  local_50 = 0;
  local_48 = QWidget::mapToGlobal((QPoint *)param_1);
  local_40 = CONCAT44(iVar8 + (int)((ulong)local_48 >> 0x20),iVar7 + (int)local_48);
  local_58 = QCursor::pos();
  cVar4 = QRect::contains((QPoint *)&local_48,SUB81(&local_58,0));
  if ((cVar4 != '\0') && ((*(byte *)(*(long *)(param_1 + 0x28) + 8) & 1) == 0)) {
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 0x28) + 9) & 0x80) == 0) {
      QColor::setRgb((int)local_200,0xaa,0xaa,0xaa);
    }
    else {
      QColor::setRgb((int)local_200,0x8a,0x8a,0x8a);
    }
    QPen::QPen(local_1f0,local_200);
    QPen::setWidth((int)local_1f0);
    QPainter::setPen((QPen *)local_f8);
    QPainter::drawRects((QRect *)local_f8,(int)&local_108);
    FUN_100136b10(local_220);
    iVar7 = *(int *)(*(long *)(param_1 + 0x28) + 0x18);
    iVar8 = *(int *)(*(long *)(param_1 + 0x28) + 0x20);
    iVar6 = QPixmap::height();
    local_a8 = (double)(iVar9 + 8 + iVar10);
    local_a0 = (double)((((iVar8 + 1) - iVar7) - iVar6) / 2);
    QPainter::drawPixmap((QPointF *)local_f8,(QPixmap *)&local_a8);
    QPixmap::~QPixmap(local_220);
    QPen::~QPen(local_1f0);
  }
  QTextOption::~QTextOption((QTextOption *)local_1c0);
  QPixmap::~QPixmap(local_188);
  QPainter::~QPainter(local_f8);
  return;
}

