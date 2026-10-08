
QPixmap * FUN_1007a7c20(QPixmap *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_d8 [16];
  QPainter local_c8 [8];
  QColor local_c0 [16];
  QString local_b0;
  QString local_a8;
  QFont local_a0 [16];
  QString local_90;
  QArrayData *local_88;
  QString local_80;
  QString local_78 [2];
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  double local_50;
  QString local_48;
  double local_40;
  undefined1 local_31;
  
  puVar1 = PTR_staticMetaObject_1021e1520;
  QMetaObject::tr((char *)&local_60,PTR_staticMetaObject_1021e1520,0x1e177c6);
  QMetaObject::tr((char *)&local_68,puVar1,0x1e177dd);
  local_80.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Helvetica Neue",0xe);
  QFont::QFont((QFont *)local_78,&local_80,-1,-1,false);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007a7cd3;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1007a7cd3:
  local_88 = (QArrayData *)QString::fromAscii_helper("Light",5);
  QFont::setStyleName(local_78);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007a7d25;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1007a7d25:
  QFont::setPixelSize((int)local_78);
  QFontMetrics::QFontMetrics((QFontMetrics *)&local_90,(QFont *)local_78);
  local_a8.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Helvetica Neue",0xe);
  QFont::QFont(local_a0,&local_a8,-1,-1,false);
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_31 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007a7db1;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_1007a7db1:
  QFont::setPixelSize((int)local_a0);
  QFontMetrics::QFontMetrics((QFontMetrics *)&local_b0,local_a0);
  iVar2 = QFontMetrics::width(&local_90,(int)&local_60);
  iVar3 = QFontMetrics::width(&local_b0,(int)&local_68);
  if (iVar2 < iVar3) {
    iVar2 = iVar3;
  }
  iVar3 = QFontMetrics::height();
  iVar4 = QFontMetrics::height();
  iVar4 = iVar3 + 0x14 + iVar4;
  QPixmap::QPixmap(param_1,iVar2,iVar4);
  QColor::QColor(local_c0,0x13);
  QPixmap::fill((QColor *)param_1);
  QPainter::QPainter(local_c8,(QPaintDevice *)param_1);
  QColor::setRgb((int)local_d8,0xff,0xff,0xff);
  QPainter::setPen((QColor *)local_c8);
  iVar3 = QFontMetrics::width(&local_90,(int)&local_60);
  iVar5 = QFontMetrics::ascent();
  QPainter::setFont((QFont *)local_c8);
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)(double)((iVar2 - iVar3) / 2);
  local_50 = (double)(iVar5 + 1);
  QPainter::drawText((QPointF *)local_c8,&local_58);
  iVar3 = QFontMetrics::width(&local_b0,(int)&local_68);
  iVar5 = QFontMetrics::descent();
  QPainter::setFont((QFont *)local_c8);
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)(double)((iVar2 - iVar3) / 2);
  local_40 = (double)((iVar4 + -1) - iVar5);
  QPainter::drawText((QPointF *)local_c8,&local_48);
  QPainter::~QPainter(local_c8);
  QFontMetrics::~QFontMetrics((QFontMetrics *)&local_b0);
  QFont::~QFont(local_a0);
  QFontMetrics::~QFontMetrics((QFontMetrics *)&local_90);
  QFont::~QFont((QFont *)local_78);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007a7fe9;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1007a7fe9:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_60,2,8);
  }
  return param_1;
}

