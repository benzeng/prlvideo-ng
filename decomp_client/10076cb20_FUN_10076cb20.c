
void FUN_10076cb20(long param_1,long param_2)

{
  if (((*(long *)(param_1 + 0x68) != 0) && (*(int *)(*(long *)(param_1 + 0x68) + 4) != 0)) &&
     (*(long *)(param_1 + 0x70) == param_2)) {
    QWidget::close();
    return;
  }
  return;
}

