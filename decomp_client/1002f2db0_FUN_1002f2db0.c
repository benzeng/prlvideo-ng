
undefined8 FUN_1002f2db0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined4 *)(lVar1 + 0x1c) = 2;
  FUN_100828d50(*(undefined8 *)(lVar1 + 0x10),2);
  CAbstractTask::setWaitForSubTaskCompletion();
  FUN_1002f0660(*(undefined8 *)(param_1 + 0x18));
  return 0;
}

