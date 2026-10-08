
void FUN_1005338d0(QPainter *param_1,QPointF *param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  bool bVar5;
  QColor local_280 [16];
  undefined1 local_270 [16];
  undefined1 local_260 [16];
  QBrush local_250 [8];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  QLinearGradient local_208 [8];
  QArrayData *local_200;
  QColor local_1c8 [16];
  undefined1 local_1b8 [16];
  QFont local_1a8 [16];
  QPixmap local_198 [32];
  QArrayData *local_178;
  QPixmap local_170 [32];
  Data_conflict local_150;
  undefined4 local_148;
  QModelIndex local_140 [9];
  byte local_137;
  undefined1 local_118 [48];
  QFont local_e8 [16];
  undefined1 local_d8;
  int local_80;
  undefined4 local_7c;
  double local_78;
  double local_70;
  QBrush local_68 [15];
  undefined1 local_59;
  QBrush local_58 [8];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  FUN_10014c170(local_140,param_3);
  local_d8 = 0;
  if (*(int *)(param_4 + 4) == 0) {
    plVar3 = *(long **)(param_4 + 0x10);
    if (plVar3 == (long *)0x0) {
      local_148 = 0x80000000;
      local_150.field7 = 0;
    }
    else {
      (**(code **)(*plVar3 + 0x90))(&local_150,plVar3,param_4,0x100);
    }
    iVar4 = QVariant::toInt((bool *)&local_150.field0);
    QVariant::~QVariant((QVariant *)&local_150);
    if (iVar4 == 6) {
      QPainter::save();
      local_178 = (QArrayData *)QString::fromAscii_helper(":/Images/listview_separator.png",0x1f);
      QPixmap::QPixmap(local_170,&local_178,0,0);
      if (*(int *)local_178 != -1) {
        if (*(int *)local_178 != 0) {
          LOCK();
          *(int *)local_178 = *(int *)local_178 + -1;
          local_59 = *(int *)local_178 != 0;
          UNLOCK();
          if ((bool)local_59) goto LAB_1005339de;
        }
        QArrayData::deallocate(local_178,2,8);
      }
LAB_1005339de:
      iVar4 = *(int *)(param_3 + 0x10);
      iVar1 = *(int *)(param_3 + 0x14);
      iVar2 = *(int *)(param_3 + 0x18);
      local_7c = QPixmap::height();
      local_80 = (1 - iVar4) + iVar2;
      QPixmap::scaled(local_198,local_170,&local_80,0,0);
      local_78 = (double)iVar4;
      local_70 = (double)iVar1;
      QPainter::drawPixmap(param_2,(QPixmap *)&local_78);
      QPixmap::~QPixmap(local_198);
      QPainter::restore();
      FontUtils::getSmallFont(SUB81(local_1a8,0));
      QFont::operator=(local_e8,local_1a8);
      QFont::~QFont(local_1a8);
      QColor::QColor(local_1c8,5);
      QColor::dark((int)local_1b8);
      QBrush::QBrush(local_68,local_1b8,1);
      QPalette::setBrush(local_118,5,6,local_68);
      QBrush::~QBrush(local_68);
      QPixmap::~QPixmap(local_170);
    }
  }
  if ((*(byte *)(param_3 + 9) & 0x80) != 0) {
    local_137 = local_137 & 0x7f;
    QPainter::save();
    QPainter::setPen(param_2,0);
    local_228 = (double)*(int *)(param_3 + 0x10);
    local_210 = (double)*(int *)(param_3 + 0x14);
    local_220 = (double)*(int *)(param_3 + 0x1c);
    local_218 = local_228;
    QLinearGradient::QLinearGradient(local_208,(QPointF *)&local_218,(QPointF *)&local_228);
    bVar5 = (*(uint *)(param_3 + 8) & 0x10100) != 0x10100;
    if (bVar5) {
      QColor::setRgb((int)local_238,0x94,0xa8,0xc5);
    }
    else {
      QColor::setRgb((int)local_238,0x3f,0x82,0xd0);
    }
    QColor::light((int)local_248);
    QGradient::setColorAt(0.0,(QColor *)local_208);
    QGradient::setColorAt(DAT_100e11050,(QColor *)local_208);
    QBrush::QBrush(local_250,(QGradient *)local_208);
    QPainter::fillRect((QRect *)param_2,(QBrush *)(param_3 + 0x10));
    QBrush::~QBrush(local_250);
    if (!bVar5) {
      QColor::light((int)local_260);
      QPainter::setPen((QColor *)param_2);
      local_40 = *(undefined4 *)(param_3 + 0x10);
      local_3c = *(undefined4 *)(param_3 + 0x14);
      local_38 = *(undefined4 *)(param_3 + 0x18);
      local_34 = local_3c;
      QPainter::drawLines((QLine *)param_2,(int)&local_40);
      QColor::dark((int)local_270);
      QPainter::setPen((QColor *)param_2);
      local_4c = *(undefined4 *)(param_3 + 0x1c);
      local_50 = *(undefined4 *)(param_3 + 0x10);
      local_48 = *(undefined4 *)(param_3 + 0x18);
      local_44 = local_4c;
      QPainter::drawLines((QLine *)param_2,(int)&local_50);
    }
    QPainter::restore();
    QColor::QColor(local_280,3);
    QBrush::QBrush(local_58,local_280,1);
    QPalette::setBrush(local_118,5,6,local_58);
    QBrush::~QBrush(local_58);
    if (*(int *)local_200 != -1) {
      if (*(int *)local_200 != 0) {
        LOCK();
        *(int *)local_200 = *(int *)local_200 + -1;
        local_59 = *(int *)local_200 != 0;
        UNLOCK();
        if ((bool)local_59) goto LAB_100533d89;
      }
      QArrayData::deallocate(local_200,0x18,8);
    }
  }
LAB_100533d89:
  QStyledItemDelegate::paint(param_1,(QStyleOptionViewItem *)param_2,local_140);
  FUN_10014c380(local_140);
  return;
}

