
void FUN_1002bb600(long param_1)

{
  if (((*(long *)(param_1 + 0x50) != 0) && (*(int *)(*(long *)(param_1 + 0x50) + 4) != 0)) &&
     (*(long *)(param_1 + 0x58) != 0)) {
    QWidget::close();
  }
  CAbstractTask::finish((int)param_1);
  return;
}

