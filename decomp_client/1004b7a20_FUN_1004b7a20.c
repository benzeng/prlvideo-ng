
void FUN_1004b7a20(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  QWidget::setFixedHeight((int)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20));
  uVar2 = FUN_10044e660(param_1);
  cVar1 = FUN_1003bf650(uVar2);
  if (cVar1 != '\0') {
    return;
  }
  QWidget::hide();
  QWidget::hide();
  QWidget::hide();
  return;
}

