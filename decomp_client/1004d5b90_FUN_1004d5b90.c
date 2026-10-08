
void FUN_1004d5b90(long param_1)

{
  QPalette *pQVar1;
  undefined1 local_38 [16];
  QPalette local_28 [16];
  QBrush local_18 [8];
  
  FontUtils::setH2Font(*(QWidget **)(*(long *)(param_1 + 0x38) + 0x60),false);
  pQVar1 = (QPalette *)QWidget::palette();
  QPalette::QPalette(local_28,pQVar1);
  QColor::setRgb((int)local_38,0x66,0x66,0x66);
  QBrush::QBrush(local_18,local_38,1);
  QPalette::setBrush(local_28,5,0,local_18);
  QBrush::~QBrush(local_18);
  QWidget::setPalette(*(QPalette **)(*(long *)(param_1 + 0x38) + 0x60));
  QPalette::~QPalette(local_28);
  return;
}

