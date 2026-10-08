
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100142420(long param_1,long param_2)

{
  int iVar1;
  QBrush local_140 [8];
  int local_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  QPainter local_120 [8];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  
  QPainter::QPainter(local_120,(QPaintDevice *)(param_1 + 0x10));
  if (((*(byte *)(*(long *)(param_1 + 0x28) + 8) & 2) != 0) || (*(char *)(param_1 + 0xf8) != '\0'))
  {
    local_38 = (double)(int)(*(uint *)(param_2 + 0x14) + 1);
    local_30 = (double)(int)(*(uint *)(param_2 + 0x18) + 1);
    local_28 = (double)(int)(~*(uint *)(param_2 + 0x14) + *(int *)(param_2 + 0x1c));
    local_20 = (double)(int)(~*(uint *)(param_2 + 0x18) + *(int *)(param_2 + 0x20));
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    QPainter::drawPixmap((QRectF *)local_120,(QPixmap *)&local_38,(QRectF *)(param_1 + 0x90));
    local_78 = (double)*(int *)(param_2 + 0x14);
    local_70 = (double)*(int *)(param_2 + 0x18);
    local_68 = (double)((1 - *(int *)(param_2 + 0x14)) + *(int *)(param_2 + 0x1c));
    local_60 = (double)((1 - *(int *)(param_2 + 0x18)) + *(int *)(param_2 + 0x20));
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    QPainter::drawPixmap((QRectF *)local_120,(QPixmap *)&local_78,(QRectF *)(param_1 + 0x30));
  }
  iVar1 = *(int *)(param_2 + 0x14);
  if (*(int *)(param_1 + 0xf0) == 0) {
    local_b8 = (double)(iVar1 + 5);
    local_b0 = (double)(*(int *)(param_2 + 0x18) + 5);
    local_a8 = (double)((-9 - iVar1) + *(int *)(param_2 + 0x1c));
    local_a0 = (double)((-9 - *(int *)(param_2 + 0x18)) + *(int *)(param_2 + 0x20));
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    QPainter::drawPixmap((QRectF *)local_120,(QPixmap *)&local_b8,(QRectF *)(param_1 + 0x70));
  }
  else {
    local_f8 = (double)(iVar1 + 3);
    local_f0 = (double)(*(int *)(param_2 + 0x18) + 3);
    local_e8 = (double)((-5 - iVar1) + *(int *)(param_2 + 0x1c));
    local_e0 = (double)((-5 - *(int *)(param_2 + 0x18)) + *(int *)(param_2 + 0x20));
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    QPainter::drawPixmap((QRectF *)local_120,(QPixmap *)&local_f8,(QRectF *)(param_1 + 0x50));
    local_138 = *(int *)(param_2 + 0x14) + _DAT_100e14d20;
    iStack_134 = *(int *)(param_2 + 0x18) + _UNK_100e14d24;
    iStack_130 = *(int *)(param_2 + 0x1c) + _UNK_100e14d28;
    iStack_12c = *(int *)(param_2 + 0x20) + _UNK_100e14d2c;
    QBrush::QBrush(local_140,(QGradient *)(param_1 + 0xb0));
    QPainter::fillRect((QRect *)local_120,(QBrush *)&local_138);
    QBrush::~QBrush(local_140);
  }
  QPainter::~QPainter(local_120);
  return;
}

