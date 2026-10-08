
void FUN_1002f73a0(long param_1)

{
  if (((*(long *)(param_1 + 0x28) != 0) && (*(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) &&
     (*(long *)(param_1 + 0x30) != 0)) {
    QWidget::hide();
    QObject::deleteLater();
    return;
  }
  return;
}

