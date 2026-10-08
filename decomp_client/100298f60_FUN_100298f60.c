
void FUN_100298f60(long param_1)

{
  if (((*(long *)(param_1 + 0x30) != 0) && (*(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) &&
     (*(long *)(param_1 + 0x38) != 0)) {
    QWidget::close();
  }
  CAbstractTask::terminate((int)param_1);
  return;
}

