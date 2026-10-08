
void FUN_10023e5e0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = CAbstractTask::getCurrentSubTask();
  if (iVar1 == 4) {
    FUN_100df99c0("","prl_client_app",0,"transition timout reached");
    FUN_10023e370(param_1);
    return;
  }
  return;
}

