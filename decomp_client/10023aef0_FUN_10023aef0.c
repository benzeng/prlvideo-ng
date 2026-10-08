
undefined8 FUN_10023aef0(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar2 = FUN_100323e30(uVar3,0);
  if (lVar2 != 0) {
    QWidget::show();
    QWidget::update();
    if (*(char *)(param_1 + 0x34) != '\0') {
      cVar1 = QWidget::hasFocus();
      if (cVar1 != '\0') {
        QWidget::clearFocus();
      }
      QWidget::setFocus(lVar2,7);
    }
  }
  return 0;
}

