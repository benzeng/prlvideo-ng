
void FUN_10064b540(long param_1,char param_2)

{
  char cVar1;
  
  if (param_2 != '\0') {
    QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x88),0));
    QWidget::setFocus(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x88),7);
    return;
  }
  cVar1 = QWidget::hasFocus();
  if (cVar1 != '\0') {
    QWidget::setFocus(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x70),7);
  }
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x88),0));
  return;
}

