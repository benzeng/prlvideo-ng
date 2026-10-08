
void FUN_100260d50(long param_1)

{
  if ((((*(char *)(param_1 + 0x38) != '\0') && (*(long *)(param_1 + 0x40) != 0)) &&
      (*(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) && (*(long *)(param_1 + 0x48) != 0)) {
    QWidget::close();
  }
  CAbstractTask::finish((int)param_1);
  return;
}

