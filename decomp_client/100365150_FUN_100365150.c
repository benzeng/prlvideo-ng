
void FUN_100365150(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x70);
  if ((((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) &&
      (lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x78), lVar1 != 0)) && (lVar1 == param_2)) {
    cVar2 = QWidget::hasFocus();
    if (cVar2 != '\0') {
      QWidget::clearFocus();
      QWidget::setFocus(param_2,7);
      FUN_10035ea10(*(undefined8 *)(param_1 + 8));
      return;
    }
  }
  return;
}

