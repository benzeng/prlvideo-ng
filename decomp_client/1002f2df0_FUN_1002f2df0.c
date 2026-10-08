
undefined8 FUN_1002f2df0(long param_1)

{
  CAbstractTask::setWaitForSubTaskCompletion();
  QTimer::singleShot(500,*(QObject **)(param_1 + 0x18),"1retrievePaxBundlePath()");
  return 0;
}

