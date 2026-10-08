
void FUN_100734e30(long param_1,QPixmap *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 in_R9;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  int local_130;
  int local_12c;
  QImage local_128 [32];
  QPixmap local_108 [32];
  QRect local_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 *local_30;
  char *local_28;
  
  if (*(int *)(param_1 + 0x28) < 1) {
    QPixmap::operator=((QPixmap *)(param_1 + 0x30),param_2);
  }
  else {
    QPixmap::toImage();
    iVar2 = QImage::width();
    local_12c = QImage::height();
    local_138 = 0;
    local_134 = 0;
    local_130 = iVar2 + -1;
    local_12c = local_12c + -1;
    DrawUtils::blurredImage
              (local_128,local_e8,(int)&local_138,SUB41(*(undefined4 *)(param_1 + 0x28),0));
    QPixmap::fromImage(local_108,local_128,0);
    QPixmap::operator=((QPixmap *)(param_1 + 0x30),local_108);
    QPixmap::~QPixmap(local_108);
    QImage::~QImage(local_128);
    QImage::~QImage((QImage *)local_e8);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  local_140 = QPixmap::size();
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_30 = &local_140;
  local_28 = "QSize";
  local_48 = 0;
  uStack_40 = 0;
  QMetaObject::invokeMethod
            (uVar1,"sourceSizeChanged",0,0,0,in_R9,local_30,"QSize",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
             0,0);
  QGraphicsItem::update((QRectF *)(*(long *)(param_1 + 0x10) + 0x10));
  return;
}

