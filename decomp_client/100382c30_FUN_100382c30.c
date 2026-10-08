
void FUN_100382c30(QGraphicsWidget *param_1,undefined8 param_2)

{
  QGraphicsWidget::QGraphicsWidget(param_1,param_2,0);
  *(undefined **)param_1 = &DAT_1021f0400;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021f0568;
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_1021f06a0;
  QPixmap::QPixmap((QPixmap *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x50) = 0x84;
  QGraphicsWidget::setContentsMargins(0.0,0.0,0.0,0.0);
  return;
}

