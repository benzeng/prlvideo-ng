
void FUN_10054e620(long param_1)

{
  QSize *pQVar1;
  QPoint *pQVar2;
  
  pQVar1 = *(QSize **)(*(long *)(param_1 + 0x18) + 200);
  (**(code **)((long)*pQVar1 + 0x70))(pQVar1);
  QWidget::setFixedSize(pQVar1);
  pQVar2 = *(QPoint **)(*(long *)(param_1 + 0x18) + 200);
  QWidget::pos();
  QWidget::move(pQVar2);
  return;
}

