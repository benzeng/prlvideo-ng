
undefined8 FUN_1002646f0(long param_1)

{
  undefined8 uVar1;
  
  CAbstractTask::setWaitForSubTaskCompletion();
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10019def0(*(undefined8 *)(param_1 + 0x28),uVar1,param_1,"1onConvertFinished(int)");
  return 0;
}

