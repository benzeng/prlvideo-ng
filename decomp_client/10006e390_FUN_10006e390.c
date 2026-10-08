
void FUN_10006e390(undefined8 param_1,undefined8 *param_2,int param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  int local_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  undefined4 local_158;
  undefined4 local_154;
  int local_150;
  int local_14c;
  QPainter local_148 [8];
  QBrush local_140 [8];
  QColor local_138 [16];
  QColor local_128 [16];
  QColor local_118 [16];
  QColor local_108 [16];
  QColor local_f8 [16];
  QColor local_e8 [16];
  QColor local_d8 [16];
  QRadialGradient local_c8 [8];
  QArrayData *local_c0;
  QColor local_88 [16];
  QPixmap local_78 [32];
  int local_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  undefined1 local_41;
  undefined8 local_40;
  undefined1 local_38 [16];
  
  local_50 = (int)param_2[1];
  local_58 = (int)*param_2;
  iStack_54 = (int)((ulong)*param_2 >> 0x20);
  iStack_4c = (int)((ulong)param_2[1] >> 0x20);
  dVar5 = (double)param_5;
  dVar4 = (double)((local_50 + 1) - local_58) * dVar5;
  if (0.0 <= dVar4) {
    iVar2 = (int)(dVar4 + DAT_100e110f0);
  }
  else {
    iVar2 = (int)((dVar4 - (double)(int)(DAT_100e110e0 + dVar4)) + DAT_100e110f0) +
            (int)(DAT_100e110e0 + dVar4);
  }
  param_4 = param_4 * param_5;
  dVar4 = (double)((iStack_4c + 1) - iStack_54) * dVar5;
  if (0.0 <= dVar4) {
    iVar3 = (int)(dVar4 + DAT_100e110f0);
  }
  else {
    iVar3 = (int)((dVar4 - (double)(int)(DAT_100e110e0 + dVar4)) + DAT_100e110f0) +
            (int)(DAT_100e110e0 + dVar4);
  }
  _local_50 = CONCAT44(iVar3 + -1 + iStack_54 * param_5,iVar2 + -1 + local_58 * param_5);
  _local_58 = CONCAT44(iStack_54 * param_5,local_58 * param_5);
  QPixmap::QPixmap(local_78,param_4 * 2,param_4 * 2);
  QColor::QColor(local_88,0x13);
  QPixmap::fill((QColor *)local_78);
  dVar4 = (double)param_4;
  QRadialGradient::QRadialGradient(local_c8,dVar4,dVar4,dVar4,dVar4,dVar4);
  if (param_3 == 0) {
    QColor::QColor(local_d8,0x13);
    QGradient::setColorAt(0.0,(QColor *)local_c8);
    QColor::QColor(local_e8,0x13);
    QGradient::setColorAt(DAT_100e128d8,(QColor *)local_c8);
  }
  else if (param_3 == 1) {
    QColor::QColor(local_f8,6);
    QGradient::setColorAt(0.0,(QColor *)local_c8);
    QColor::QColor(local_108,6);
    QGradient::setColorAt(DAT_100e110f0,(QColor *)local_c8);
  }
  else if (param_3 == 2) {
    QColor::QColor(local_118,5);
    QGradient::setColorAt(0.0,(QColor *)local_c8);
    QColor::QColor(local_128,5);
    QGradient::setColorAt(DAT_100e110f0,(QColor *)local_c8);
  }
  QColor::QColor(local_138,2);
  QGradient::setColorAt(DAT_100e11050,(QColor *)local_c8);
  QBrush::QBrush(local_140,(QGradient *)local_c8);
  QPainter::QPainter(local_148,(QPaintDevice *)local_78);
  QPainter::setRenderHint(local_148,1,1);
  QPainter::setCompositionMode(local_148,3);
  QPainter::setBrush((QBrush *)local_148);
  uVar1 = QPixmap::size();
  local_158 = 0;
  local_154 = 0;
  local_150 = (int)uVar1 + -1;
  local_14c = (int)((ulong)uVar1 >> 0x20) + -1;
  QPainter::fillRect((QRect *)local_148,(QBrush *)&local_158);
  local_168 = param_4 + -1;
  iStack_164 = local_168;
  iStack_160 = local_168;
  iStack_15c = local_168;
  QPainter::save();
  QPainter::scale(DAT_100e11050 / dVar5,DAT_100e11050 / dVar5);
  QPainter::setCompositionMode(param_1,3);
  local_38 = QPixmap::rect();
  local_40 = 0;
  qDrawBorderPixmap(param_1,&local_58,&local_168,local_78,local_38,&local_168,&local_40,0);
  QPainter::restore();
  QPainter::~QPainter(local_148);
  QBrush::~QBrush(local_140);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_41 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_41) goto LAB_10006e7ae;
    }
    QArrayData::deallocate(local_c0,0x18,8);
  }
LAB_10006e7ae:
  QPixmap::~QPixmap(local_78);
  return;
}

