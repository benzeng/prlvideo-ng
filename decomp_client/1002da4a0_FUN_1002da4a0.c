
void FUN_1002da4a0(long param_1)

{
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    QWidget::show();
    QWidget::activateWindow();
    QWidget::raise();
    return;
  }
  return;
}

