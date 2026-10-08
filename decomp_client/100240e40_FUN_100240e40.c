
undefined8 FUN_100240e40(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100240e70();
  if (-1 < (int)uVar1) {
    CAbstractTask::setWaitForSubTaskCompletion();
    uVar1 = 0;
  }
  return uVar1;
}

