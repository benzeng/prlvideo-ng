
undefined8 FUN_10062a3d0(QObject *param_1)

{
  CAbstractTask::setWaitForSubTaskCompletion();
  QTimer::singleShot(3000,param_1,"1onWaitBeforeRegetReceiptStatusFinished()");
  return 0;
}

