
undefined8 FUN_100223310(long param_1)

{
  undefined8 uVar1;
  undefined4 local_1c;
  
  CAbstractTask::setWaitForSubTaskCompletion();
  FUN_100223940(param_1 + 0x28);
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  local_1c = FUN_100319b00(uVar1);
  FUN_1000bf010(param_1 + 0x28,&local_1c);
  FUN_100223370(param_1);
  return 0;
}

