
void FUN_10061ccd0(long param_1)

{
  FUN_10061e540(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10));
  FUN_10061d180(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20));
  FUN_10061d180(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x68));
  FUN_10061d310(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30));
  FUN_10061d310(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x78));
  QWidget::setMinimumWidth((int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x38));
  QWidget::setMinimumWidth((int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x80));
  FUN_10061d400(param_1,0,0);
  FUN_10061d400(param_1,0,1);
  QWidget::hide();
  QWidget::setMinimumWidth((int)*(undefined8 *)(param_1 + 0x10));
  return;
}

