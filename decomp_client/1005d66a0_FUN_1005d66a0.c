
void FUN_1005d66a0(long param_1)

{
  char cVar1;
  long lVar2;
  
  lVar2 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
  cVar1 = FUN_1005cb7e0(*(undefined4 *)(lVar2 + 0x38));
  if (cVar1 != '\0') {
    QWidget::show();
    QWidget::show();
    return;
  }
  QWidget::hide();
  QWidget::hide();
  return;
}

