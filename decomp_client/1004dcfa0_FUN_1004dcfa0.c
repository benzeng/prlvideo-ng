
void FUN_1004dcfa0(QEvent *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(short *)(param_2 + 0x10) == 0x11) {
    uVar1 = (**(code **)(*(long *)param_1 + 0x228))(param_1);
    QWidget::setFocus(uVar1,7);
  }
  QWidget::event(param_1);
  return;
}

