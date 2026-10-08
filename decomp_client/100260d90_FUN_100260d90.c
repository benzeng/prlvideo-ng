
void FUN_100260d90(long param_1)

{
  if (((*(long *)(param_1 + 0x40) != 0) && (*(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) &&
     (*(long *)(param_1 + 0x48) != 0)) {
    QWidget::raise();
    QWidget::activateWindow();
    return;
  }
  return;
}

