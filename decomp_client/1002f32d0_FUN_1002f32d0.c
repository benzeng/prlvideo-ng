
undefined8 FUN_1002f32d0(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x18) + 0x78) + 4) == 0) {
    FUN_100df99c0("","prl_client_app",0,"No Deploy Id was generated, skip the authorization step");
    uVar1 = 0x3bfa;
  }
  else {
    FUN_1002f1930();
    CAbstractTask::setWaitForSubTaskCompletion();
    uVar1 = 0;
  }
  return uVar1;
}

