
void FUN_100629d30(long *param_1)

{
  char cVar1;
  
  cVar1 = CAbstractTask::isFinished();
  if (cVar1 != '\0') {
    return;
  }
  FUN_100df99c0("","prl_client_app",0,"Register Receipt timeout");
                    /* WARNING: Could not recover jumptable at 0x000100629d7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))(param_1,0x80047046);
  return;
}

