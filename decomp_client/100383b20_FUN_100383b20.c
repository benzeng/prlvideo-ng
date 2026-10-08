
void FUN_100383b20(long *param_1,QPen *param_2)

{
  undefined1 local_88 [32];
  undefined1 local_68 [16];
  QBrush local_58 [8];
  undefined1 local_50 [16];
  QBrush local_40 [8];
  QPen local_38 [8];
  
  if ((char)param_1[10] != '\0') {
    QColor::setRgb((int)local_50,0xa6,0xda,0xec);
    QBrush::QBrush(local_40,local_50,1);
    QPen::QPen(DAT_100e12b90,local_38,local_40,1,0x10,0x40);
    QPainter::setPen(param_2);
    QPen::~QPen(local_38);
    QBrush::~QBrush(local_40);
    QColor::setRgb((int)local_68,0xa6,0xda,0xec);
    QBrush::QBrush(local_58,local_68,1);
    QPainter::setBrush((QBrush *)param_2);
    QBrush::~QBrush(local_58);
    (**(code **)(*param_1 + 0x158))(local_88,param_1);
    QPainter::drawRoundedRect(DAT_100e19930,DAT_100e19930,param_2,local_88,0);
  }
  return;
}

