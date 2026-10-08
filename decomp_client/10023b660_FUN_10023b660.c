
void FUN_10023b660(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = CAbstractTask::getCurrentSubTask();
  if (iVar1 == 2) {
    FUN_100df99c0("","prl_client_app",0,"Exit from native fullscreen timout reached");
    FUN_10023b6b0(param_1);
    return;
  }
  return;
}

