
void FUN_1002693f0(long param_1)

{
  if (((*(long *)(param_1 + 0x58) != 0) && (*(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) &&
     (*(long *)(param_1 + 0x60) != 0)) {
    QWidget::raise();
    QWidget::activateWindow();
    return;
  }
  return;
}

