
void FUN_100388cb0(QGraphicsWidget *param_1)

{
  *(undefined **)param_1 = &DAT_1021f0400;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021f0568;
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_1021f06a0;
  QPixmap::~QPixmap((QPixmap *)(param_1 + 0x30));
  QGraphicsWidget::~QGraphicsWidget(param_1);
  return;
}

