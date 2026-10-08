
undefined8 FUN_100249ec0(QObject *param_1)

{
  CAbstractTask::setWaitForSubTaskCompletion();
  QTimer::singleShot(*(int *)(param_1 + 0x2c),param_1,"1onDelayExecutionFinished()");
  return 0;
}

