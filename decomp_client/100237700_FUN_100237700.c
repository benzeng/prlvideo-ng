
undefined8 FUN_100237700(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (((*(long *)(param_1 + 0x70) != 0) && (*(int *)(*(long *)(param_1 + 0x70) + 4) != 0)) &&
     (*(long *)(param_1 + 0x78) != 0)) {
    cVar1 = CAbstractTask::isFinished();
    if (cVar1 != '\0') {
      QObject::deleteLater();
      uVar2 = CAbstractTask::getResult();
      return uVar2;
    }
    CAbstractTask::setWaitForSubTaskCompletion();
  }
  return 0;
}

