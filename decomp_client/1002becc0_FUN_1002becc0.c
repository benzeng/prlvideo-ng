
void FUN_1002becc0(QObject *param_1)

{
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (*(QObject **)(param_1 + 0x20) != (QObject *)0x0)) {
    QObject::disconnect(*(QObject **)(param_1 + 0x20),"2finished(int)",param_1,
                        "1onSettingsDialogDone(int)");
    QWidget::close();
  }
  CAbstractTask::finish((int)param_1);
  return;
}

