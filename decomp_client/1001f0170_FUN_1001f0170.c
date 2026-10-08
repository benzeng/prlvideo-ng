
void FUN_1001f0170(long param_1)

{
  int iVar1;
  
  iVar1 = CAbstractTask::getCurrentSubTask();
  if ((((iVar1 == 2) && (*(long *)(param_1 + 0x38) != 0)) &&
      (*(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) && (*(long *)(param_1 + 0x40) != 0)) {
    QWidget::activateWindow();
    return;
  }
  return;
}

