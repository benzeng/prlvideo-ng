
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007a5c20(double param_1,undefined8 param_2,QFont *param_3,undefined8 param_4,long *param_5
                  )

{
  int iVar1;
  QString local_a0;
  QArrayData *local_98;
  QString local_90;
  QFont local_88 [16];
  QColor local_78 [16];
  QString local_68;
  QFont local_60 [16];
  QString local_50;
  undefined8 local_48;
  QString local_40;
  undefined8 local_38;
  undefined1 local_29;
  
  QPainter::save();
  local_68.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Helvetica Neue",0xe);
  QFont::QFont(local_60,&local_68,-1,-1,false);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_29 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007a5caa;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1007a5caa:
  QFont::setPixelSize((int)local_60);
  QPainter::setFont(param_3);
  QColor::QColor(local_78,3);
  QPainter::setPen((QColor *)param_3);
  QPainter::setOpacity(param_1 * _DAT_100e29dd8 + _DAT_100e29de0);
  QFont::QFont(local_88,local_60);
  QFont::setWeight((int)local_88);
  QPainter::setFont(param_3);
  QFontMetrics::QFontMetrics((QFontMetrics *)&local_90,local_88);
  QFontMetrics::elidedText(&local_98,&local_90,param_4,1,0xa7,0);
  iVar1 = QFontMetrics::width(&local_90,(int)&local_98);
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)(double)((0xb3 - iVar1) / 2 + 0x10);
  local_48 = 0x4060000000000000;
  QPainter::drawText((QPointF *)param_3,&local_50);
  if (*(int *)(*param_5 + 4) != 0) {
    QPainter::setFont(param_3);
    QFontMetrics::QFontMetrics((QFontMetrics *)&local_a0,local_60);
    iVar1 = QFontMetrics::width(&local_a0,(int)param_5);
    QFontMetrics::~QFontMetrics((QFontMetrics *)&local_a0);
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)(double)((0xb3 - iVar1) / 2 + 0x10);
    local_38 = 0x4062200000000000;
    QPainter::drawText((QPointF *)param_3,&local_40);
  }
  QPainter::restore();
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007a5e6c;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1007a5e6c:
  QFontMetrics::~QFontMetrics((QFontMetrics *)&local_90);
  QFont::~QFont(local_88);
  QFont::~QFont(local_60);
  return;
}

