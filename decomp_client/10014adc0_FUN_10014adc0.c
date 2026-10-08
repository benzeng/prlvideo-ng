
void FUN_10014adc0(QPainter *param_1,QPointF *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  Data_conflict local_3b8;
  undefined4 local_3b0;
  QArrayData *local_3a8;
  QColor local_3a0 [16];
  undefined1 local_390 [16];
  QColor local_380 [16];
  QColor local_370 [16];
  QColor local_360 [16];
  int local_350;
  uint uStack_34c;
  int local_348;
  int iStack_344;
  QPixmap local_340 [32];
  QImage local_320 [32];
  Data_conflict local_300;
  undefined4 local_2f8;
  Data_conflict local_2f0;
  undefined4 local_2e8;
  QPixmap local_2e0 [32];
  Data_conflict local_2c0;
  undefined4 local_2b8;
  QPixmap local_2b0 [32];
  undefined8 local_290;
  undefined4 local_288;
  int iStack_284;
  double local_280;
  double local_278;
  QString local_270;
  QImage local_268 [32];
  QString local_248;
  QImage local_240 [32];
  Data_conflict local_220;
  undefined4 local_218;
  QImage local_210 [32];
  Data_conflict local_1f0;
  undefined4 local_1e8;
  QModelIndex local_1e0 [8];
  uint local_1d8;
  int local_1d0;
  uint uStack_1cc;
  int local_1c8;
  int iStack_1c4;
  undefined1 local_1b8 [48];
  undefined1 local_188 [104];
  QBrush local_120 [8];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  QLinearGradient local_b8 [8];
  QArrayData *local_b0;
  undefined1 local_71;
  undefined8 local_70;
  double local_68;
  double local_60;
  QBrush local_58 [8];
  QBrush local_50 [8];
  QBrush local_48 [8];
  QBrush local_40 [8];
  QBrush local_38 [8];
  
  FUN_10014c170(local_1e0,param_3);
  plVar1 = *(long **)(param_4 + 0x10);
  if (plVar1 == (long *)0x0) {
    local_1e8 = 0x80000000;
    local_1f0.field7 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x90))(&local_1f0,plVar1,param_4,0x100);
  }
  iVar6 = QVariant::toUInt((bool *)&local_1f0.field0);
  QVariant::~QVariant((QVariant *)&local_1f0);
  uVar8 = local_1d8 & 0xfffffeff;
  if (iVar6 == 1) {
    local_1d8 = uVar8;
    QFont::setWeight((int)local_188);
    iVar6 = local_1d0 + 5;
    local_1d8 = local_1d8 & 0xffff7fff;
    local_1d0 = iVar6;
    QImage::QImage(local_210);
    plVar1 = *(long **)(param_4 + 0x10);
    if (plVar1 == (long *)0x0) {
      local_218 = 0x80000000;
      local_220.field7 = 0;
    }
    else {
      (**(code **)(*plVar1 + 0x90))(&local_220,plVar1,param_4,0x102);
    }
    cVar3 = QVariant::toBool();
    QVariant::~QVariant((QVariant *)&local_220);
    if (cVar3 == '\0') {
      local_248.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)
           QString::fromAscii_helper(":/pixmaps/MoreOptions/tree_root_collapse_light.png",0x32);
      QImage::QImage(local_240,&local_248,(char *)0x0);
      QImage::operator=(local_210,local_240);
      QImage::~QImage(local_240);
      if (*(int *)local_248.field0_0x0 != -1) {
        if (*(int *)local_248.field0_0x0 != 0) {
          LOCK();
          *(int *)local_248.field0_0x0 = *(int *)local_248.field0_0x0 + -1;
          local_71 = *(int *)local_248.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_71) goto LAB_10014b134;
        }
        QArrayData::deallocate((QArrayData *)local_248.field0_0x0,2,8);
      }
    }
    else {
      local_270.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)
           QString::fromAscii_helper(":/pixmaps/MoreOptions/tree_root_expand_light.png",0x30);
      QImage::QImage(local_268,&local_270,(char *)0x0);
      QImage::operator=(local_210,local_268);
      QImage::~QImage(local_268);
      if (*(int *)local_270.field0_0x0 != -1) {
        if (*(int *)local_270.field0_0x0 != 0) {
          LOCK();
          *(int *)local_270.field0_0x0 = *(int *)local_270.field0_0x0 + -1;
          local_71 = *(int *)local_270.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_71) goto LAB_10014b134;
        }
        QArrayData::deallocate((QArrayData *)local_270.field0_0x0,2,8);
      }
    }
LAB_10014b134:
    iVar7 = QImage::height();
    local_280 = (double)iVar6;
    local_278 = (double)(int)((int)(((1 - uStack_1cc) + iStack_1c4) - iVar7) / 2 + uStack_1cc);
    QPainter::drawImage(param_2,(QImage *)&local_280);
    QItemDelegate::paint(param_1,(QStyleOptionViewItem *)param_2,local_1e0);
    FUN_1007fd640(param_1);
    QImage::~QImage(local_210);
    goto LAB_10014b755;
  }
  uVar9 = local_1d8 & 0x8000;
  local_1d8 = uVar8;
  if (uVar9 != 0) {
    local_290 = (ulong)uStack_1cc << 0x20;
    _local_288 = CONCAT44(iStack_1c4,0xd1);
    QPainter::save();
    local_d8 = (double)(int)local_290;
    local_c0 = (double)local_290._4_4_;
    local_d0 = (double)iStack_284;
    local_c8 = local_d8;
    QLinearGradient::QLinearGradient(local_b8,(QPointF *)&local_c8,(QPointF *)&local_d8);
    if ((local_1d8 & 0x10000) == 0) {
      QColor::setRgb((int)local_108,0xb5,0xb5,0xb5);
      QGradient::setColorAt(0.0,(QColor *)local_b8);
      QColor::setRgb((int)local_118,0x89,0x89,0x89);
      QGradient::setColorAt(DAT_100e11050,(QColor *)local_b8);
    }
    else {
      QColor::setRgb((int)local_e8,0x65,0x94,0xd2);
      QGradient::setColorAt(0.0,(QColor *)local_b8);
      QColor::setRgb((int)local_f8,0x22,0x56,0xa7);
      QGradient::setColorAt(DAT_100e11050,(QColor *)local_b8);
    }
    QBrush::QBrush(local_120,(QGradient *)local_b8);
    QPainter::fillRect((QRect *)param_2,(QBrush *)&local_290);
    QBrush::~QBrush(local_120);
    QPainter::restore();
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_71 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_71) goto LAB_10014b2b9;
      }
      QArrayData::deallocate(local_b0,0x18,8);
    }
  }
LAB_10014b2b9:
  QPixmap::QPixmap(local_2b0);
  plVar1 = *(long **)(param_4 + 0x10);
  if (plVar1 == (long *)0x0) {
    local_2b8 = 0x80000000;
    local_2c0.field7 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x90))(&local_2c0,plVar1,param_4);
  }
  cVar3 = QVariant::toBool();
  QVariant::~QVariant((QVariant *)&local_2c0);
  plVar1 = *(long **)(param_4 + 0x10);
  if (plVar1 == (long *)0x0) {
    local_2e8 = 0x80000000;
    local_2f0.field7 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x90))(&local_2f0,plVar1,param_4);
  }
  FUN_10014c490(local_2e0,&local_2f0);
  QPixmap::operator=(local_2b0,local_2e0);
  QPixmap::~QPixmap(local_2e0);
  QVariant::~QVariant((QVariant *)&local_2f0);
  iVar11 = iStack_1c4;
  iVar7 = local_1c8;
  uVar8 = uStack_1cc;
  iVar6 = local_1d0;
  plVar1 = *(long **)(param_4 + 0x10);
  if (plVar1 == (long *)0x0) {
    local_2f8 = 0x80000000;
    local_300.field7 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x90))(&local_300,plVar1,param_4);
  }
  cVar4 = QVariant::toBool();
  QVariant::~QVariant((QVariant *)&local_300);
  if (cVar4 == '\0') {
    iVar7 = iVar6 + 10;
    iVar11 = uVar8 + 3;
  }
  else {
    iVar7 = iVar7 + -0x19;
    iVar11 = iVar11 + -0x12;
  }
  cVar5 = QPixmap::isNull();
  uVar8 = 0;
  uVar9 = 0;
  if (cVar5 == '\0') {
    local_70 = 0x1000000010;
    QPixmap::scaled(local_340,local_2b0,&local_70,1,1);
    QPixmap::toImage();
    local_68 = (double)iVar7;
    local_60 = (double)iVar11;
    QPainter::drawImage(param_2,(QImage *)&local_68);
    QImage::~QImage(local_320);
    QPixmap::~QPixmap(local_340);
    uVar9 = 0x10;
    uVar8 = 10;
  }
  uVar10 = 5;
  if (cVar4 == '\0') {
    uVar10 = uVar8 | uVar9 | 5;
  }
  _local_350 = CONCAT44(uStack_1cc,local_1d0 + uVar10);
  _local_348 = CONCAT44(iStack_1c4,local_1c8 - (uVar8 | uVar9));
  if (cVar3 == '\0') {
    QColor::QColor(local_360,4);
    QBrush::QBrush(local_58,local_360,1);
    QPalette::setBrush(local_1b8,2,0xd,local_58);
    QBrush::~QBrush(local_58);
    QColor::QColor(local_370,4);
    QBrush::QBrush(local_50,local_370,1);
    QPalette::setBrush(local_1b8,0,6,local_50);
    QBrush::~QBrush(local_50);
    QColor::QColor(local_380,4);
    QBrush::QBrush(local_48,local_380,1);
    QPalette::setBrush(local_1b8,2,6,local_48);
    QBrush::~QBrush(local_48);
  }
  QColor::setRgb((int)local_390,0xff,0xff,0xff);
  QBrush::QBrush(local_40,local_390,1);
  QPalette::setBrush(local_1b8,5,0xc,local_40);
  QBrush::~QBrush(local_40);
  if ((local_1d8 & 0x8000) != 0) {
    QColor::QColor(local_3a0,3);
    QBrush::QBrush(local_38,local_3a0,1);
    QPalette::setBrush(local_1b8,2,0xd,local_38);
    QBrush::~QBrush(local_38);
  }
  pcVar2 = *(code **)(*(long *)param_1 + 0xb0);
  plVar1 = *(long **)(param_4 + 0x10);
  if (plVar1 == (long *)0x0) {
    local_3b0 = 0x80000000;
    local_3b8.field7 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x90))(&local_3b8,plVar1,param_4,0);
  }
  QVariant::toString();
  (*pcVar2)(param_1,param_2,local_1e0,&local_350,&local_3a8);
  if (*(int *)local_3a8 != -1) {
    if (*(int *)local_3a8 != 0) {
      LOCK();
      *(int *)local_3a8 = *(int *)local_3a8 + -1;
      local_71 = *(int *)local_3a8 != 0;
      UNLOCK();
      if ((bool)local_71) goto LAB_10014b73d;
    }
    QArrayData::deallocate(local_3a8,2,8);
  }
LAB_10014b73d:
  QVariant::~QVariant((QVariant *)&local_3b8);
  QPixmap::~QPixmap(local_2b0);
LAB_10014b755:
  FUN_10014c380(local_1e0);
  return;
}

