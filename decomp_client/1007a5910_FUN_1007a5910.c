
void FUN_1007a5910(long param_1,QPointF *param_2)

{
  char cVar1;
  undefined8 local_d0;
  QArrayData *local_c8;
  QPixmap local_c0 [32];
  QPixmap local_a0 [32];
  undefined8 local_80;
  QArrayData *local_78;
  QPixmap local_70 [32];
  QPixmap local_50 [32];
  undefined8 local_30;
  undefined8 local_28;
  
  QPainter::save();
  if ((*(double *)(param_1 + 0xd0) != 0.0) || (NAN(*(double *)(param_1 + 0xd0)))) {
    cVar1 = QPixmap::isNull();
    if (cVar1 != '\0') {
      local_78 = (QArrayData *)QString::fromAscii_helper(":/images/selection-PD10.png",0x1b);
      QPixmap::QPixmap(local_70,&local_78,0,0);
      local_80 = 0xa0000000b3;
      FUN_1007a6070(local_50,local_70,&local_80);
      QPixmap::operator=((QPixmap *)(param_1 + 0x118),local_50);
      QPixmap::~QPixmap(local_50);
      QPixmap::~QPixmap(local_70);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          UNLOCK();
          local_30 = CONCAT71(local_30._1_7_,*(int *)local_78 != 0);
          if (*(int *)local_78 != 0) goto LAB_1007a59ef;
        }
        QArrayData::deallocate(local_78,2,8);
      }
    }
LAB_1007a59ef:
    QPainter::setOpacity(*(double *)(param_1 + 0xd0));
    local_30 = 0x4030000000000000;
    local_28 = 0;
    QPainter::drawPixmap(param_2,(QPixmap *)&local_30);
  }
  if ((*(double *)(param_1 + 0xe8) == 0.0) && (!NAN(*(double *)(param_1 + 0xe8))))
  goto LAB_1007a5b40;
  cVar1 = QPixmap::isNull();
  if (cVar1 != '\0') {
    local_c8 = (QArrayData *)QString::fromAscii_helper(":/images/selection-hover-PD10.png",0x21);
    QPixmap::QPixmap(local_c0,&local_c8,0,0);
    local_d0 = 0xa0000000b3;
    FUN_1007a6070(local_a0,local_c0,&local_d0);
    QPixmap::operator=((QPixmap *)(param_1 + 0xf8),local_a0);
    QPixmap::~QPixmap(local_a0);
    QPixmap::~QPixmap(local_c0);
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        UNLOCK();
        local_30 = CONCAT71(local_30._1_7_,*(int *)local_c8 != 0);
        if (*(int *)local_c8 != 0) goto LAB_1007a5b0b;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
  }
LAB_1007a5b0b:
  QPainter::setOpacity(*(double *)(param_1 + 0xe8));
  local_30 = 0x4030000000000000;
  local_28 = 0;
  QPainter::drawPixmap(param_2,(QPixmap *)&local_30);
LAB_1007a5b40:
  QPainter::restore();
  return;
}

