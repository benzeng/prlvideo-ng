
void FUN_10010dc80(QPaintDevice *param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  QPainter local_48 [8];
  double local_40;
  double local_38;
  
  uVar1 = QImage::size();
  uVar2 = QImage::size();
  iVar6 = (int)uVar1 - (int)uVar2;
  if ((param_3 & 2) == 0) {
    iVar6 = 0;
  }
  if (((param_3 & 0xc) != 0) || ((param_3 & 0x84) == 0x84)) {
    iVar6 = ((int)(((uint)(uVar1 >> 0x1f) & 1) + (int)uVar1) >> 1) -
            ((int)(((uint)(uVar2 >> 0x1f) & 1) + (int)uVar2) >> 1);
  }
  iVar5 = (int)(uVar1 >> 0x20);
  iVar3 = (int)(uVar2 >> 0x20);
  iVar4 = iVar5 - iVar3;
  if ((param_3 & 0x40) == 0) {
    iVar4 = 0;
  }
  if ((param_3 & 0x80) != 0) {
    iVar4 = iVar5 / 2 - iVar3 / 2;
  }
  QPainter::QPainter(local_48,param_1);
  local_40 = (double)iVar6;
  local_38 = (double)iVar4;
  QPainter::drawImage((QPointF *)local_48,(QImage *)&local_40);
  QPainter::~QPainter(local_48);
  return;
}

