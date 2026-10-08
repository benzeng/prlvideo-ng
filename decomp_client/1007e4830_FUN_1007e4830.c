
void FUN_1007e4830(long param_1)

{
  if (((*(long *)(param_1 + 0x20) != 0) && (*(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) &&
     (*(long *)(param_1 + 0x28) != 0)) {
    QWidget::showNormal();
    QWidget::raise();
    QWidget::activateWindow();
    return;
  }
  return;
}

