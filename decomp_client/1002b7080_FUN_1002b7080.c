
void FUN_1002b7080(long param_1)

{
  if (((*(long *)(param_1 + 0x40) != 0) && (*(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) &&
     (*(long *)(param_1 + 0x48) != 0)) {
    QWidget::hide();
    QObject::deleteLater();
    return;
  }
  return;
}

