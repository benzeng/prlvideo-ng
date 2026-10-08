
undefined8 FUN_100224700(QObject *param_1)

{
  undefined8 uVar1;
  
  if ((param_1[0x29] != (QObject)0x0) && (param_1[0x28] == (QObject)0x0)) {
    uVar1 = FUN_100224550(param_1);
    return uVar1;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  MacUtils::moveDirectoryToTrashAsync((QString *)(param_1 + 0x20),param_1,"onMovedToTrash");
  return 0;
}

