
void FUN_10062b4d0(long *param_1)

{
  char cVar1;
  
  cVar1 = CAbstractTask::isFinished();
  if (cVar1 != '\0') {
    return;
  }
  FUN_100df99c0("","prl_client_app",0,"Wait Keys changes in Account timeout");
                    /* WARNING: Could not recover jumptable at 0x00010062b51f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))(param_1,0x80000015);
  return;
}

