
void FUN_1007e55d0(long param_1)

{
  QPen *pQVar1;
  QPen local_30 [8];
  QPen local_28 [8];
  
  pQVar1 = *(QPen **)(param_1 + 0x30);
  QPen::QPen(local_28,(QColor *)&DAT_1023123f0);
  CGraphicsTextLabel::setPen(pQVar1);
  QPen::~QPen(local_28);
  pQVar1 = *(QPen **)(param_1 + 0x38);
  QPen::QPen(local_30,(QColor *)&DAT_1023123f0);
  CGraphicsTextLabel::setPen(pQVar1);
  QPen::~QPen(local_30);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x10) + 0x28) + 9) & 0x80) != 0) {
    QTimer::singleShot(500,(QObject *)(param_1 + 0x48),"1start()");
  }
  return;
}

