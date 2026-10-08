
void FUN_1007afc40(long param_1)

{
  char cVar1;
  
  FUN_1007ae9b0();
  cVar1 = (**(code **)(**(long **)(param_1 + 0x110) + 0x80))();
  if (cVar1 != '\0') {
    QWidget::setEnabled(SUB81(*(undefined8 *)(param_1 + 0xe8),0));
    QWidget::setEnabled(SUB81(*(undefined8 *)(param_1 + 0xe0),0));
    QWidget::setEnabled(SUB81(*(undefined8 *)(param_1 + 0xb8),0));
    return;
  }
  return;
}

