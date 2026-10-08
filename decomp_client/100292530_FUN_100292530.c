
void FUN_100292530(long param_1)

{
  if (((*(long *)(param_1 + 0x38) != 0) && (*(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) &&
     (*(long *)(param_1 + 0x40) != 0)) {
    QWidget::showNormal();
    QWidget::raise();
    QWidget::activateWindow();
    return;
  }
  return;
}

