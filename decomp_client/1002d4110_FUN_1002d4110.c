
void FUN_1002d4110(long param_1)

{
  if (((*(long *)(param_1 + 0x38) != 0) && (*(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) &&
     (*(long *)(param_1 + 0x40) != 0)) {
    QWidget::close();
  }
  CAbstractTask::finish((int)param_1);
  return;
}

