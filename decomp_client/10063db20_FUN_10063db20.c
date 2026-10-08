
void FUN_10063db20(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10);
  cVar2 = QAbstractButton::isChecked();
  if (cVar2 == '\0') {
    QAbstractButton::isChecked();
  }
  QWidget::setEnabled(SUB81(uVar1,0));
  return;
}

