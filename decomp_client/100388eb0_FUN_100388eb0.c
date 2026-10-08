
void FUN_100388eb0(undefined8 *param_1)

{
  param_1[-4] = &DAT_1021f0400;
  param_1[-2] = &PTR_FUN_1021f0568;
  *param_1 = &PTR_FUN_1021f06a0;
  QPixmap::~QPixmap((QPixmap *)(param_1 + 2));
  QGraphicsWidget::~QGraphicsWidget((QGraphicsWidget *)(param_1 + -4));
  operator_delete((QGraphicsWidget *)(param_1 + -4));
  return;
}

